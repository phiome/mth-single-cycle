

module riscv_singlecycle import riscv_pkg::*; #(
    parameter DMemInitFile = "dmem.mem",
    parameter IMemInitFile = "imem.mem"
) (
    input  logic              clk_i,       // system clock
    input  logic              rstn_i,      // system reset
    input  logic [XLEN-1:0]   addr_i,      // memory address input for reading (Testbench için)
    output logic              update_o,    // retire signal
    output logic [XLEN-1:0]   data_o,      // memory data output for reading (Testbench için)
    output logic [XLEN-1:0]   pc_o,        // retired program counter
    output logic [XLEN-1:0]   instr_o,     // retired instruction
    output logic [4:0]        reg_addr_o,  // retired register address
    output logic [XLEN-1:0]   reg_data_o,  // retired register data
    output logic [XLEN-1:0]   mem_addr_o,  // retired memory address
    output logic [XLEN-1:0]   mem_data_o,  // retired memory data
    output logic              mem_wrt_o    // retired memory write enable
);


    // 1. Memory Definitions

    // 32 bit width and 2048 entries (8kb) 
    logic [XLEN-1:0] instr_mem [0:2047];
    logic [XLEN-1:0] data_mem  [0:2047];

    initial begin
        $readmemh(IMemInitFile, instr_mem, 0, 2047);
        $readmemh(DMemInitFile, data_mem, 0, 2047);
    end

    assign data_o = data_mem[addr_i[12:2]]; 

    // 2. PROGRAM COUNTER VE FETCH LOGIC

    logic [31:0] pc_reg;
    logic [31:0] next_pc;
    logic [31:0] instr_w;


    always_ff @(posedge clk_i or negedge rstn_i) begin
        if (!rstn_i) pc_reg <= 32'h80000000;
        else         pc_reg <= next_pc;
    end

    // shift by 2 
    assign instr_w = instr_mem[pc_reg[12:2]];



    // 3. DECODER CONNECTIONS
    
    logic [4:0]  rs1_addr_w, rs2_addr_w, rd_addr_w;
    logic [31:0] imm_w;
    logic        reg_we_w, alu_src_w, pc_to_alu_w, mem_we_w, branch_w, jump_w, jalr_w;
    logic [1:0]  wb_sel_w;
    logic [3:0]  alu_ctrl_w;
    logic [2:0]  funct3_w;
    logic [2:0]  unused_branch_type;
    // funct3
    assign funct3_w = instr_w[7:5];

    decoder u_decoder (
        .clk_i         (clk_i),
        .instr_i       (instr_w),
        .rs1_addr_o    (rs1_addr_w),
        .rs2_addr_o    (rs2_addr_w),
        .rd_addr_o     (rd_addr_w),
        .imm_o         (imm_w),
        .reg_we_o      (reg_we_w),
        .alu_src_o     (alu_src_w),
        .pc_to_alu_o   (pc_to_alu_w),
        .alu_ctrl_o    (alu_ctrl_w),
        .mem_we_o      (mem_we_w),
        .wb_sel_o      (wb_sel_w),
        .branch_o      (branch_w),
        .branch_type_o (unused_branch_type), // connected to dummy branch for not taking any failures
        .jump_o        (jump_w),
        .jalr_o        (jalr_w)
    );


    // 4. REGISTER FILE CONNECTIONS

    logic [31:0] rs1_data_w, rs2_data_w, wb_data_w;

    register_file u_regfile (
        .clk_i      (clk_i),
        .rstn_i     (rstn_i),
        .we_i       (reg_we_w && !mem_we_w),
        .rs1_addr_i (rs1_addr_w),
        .rs2_addr_i (rs2_addr_w),
        .rd_addr_i  (rd_addr_w),
        .rd_data_i  (wb_data_w),
        .rs1_data_o (rs1_data_w),
        .rs2_data_o (rs2_data_w)
    );


    // 5. ALU CONNECIONS

    logic [31:0] alu_a_w, alu_b_w, alu_res_w;
    logic        alu_zero_w; 

    
    assign alu_a_w = pc_to_alu_w ? pc_reg : rs1_data_w;
    assign alu_b_w = alu_src_w ? imm_w : rs2_data_w;

    alu u_alu (
        .a_i        (alu_a_w),
        .b_i        (alu_b_w),
        .alu_ctrl_i (alu_ctrl_w),
        .res_o      (alu_res_w),
        .zero_o     (alu_zero_w)
    );


    
    // 6.BRANCH Logic and NEXT_PC calculatıon
    
    logic branch_taken;
    
    always_comb begin
        branch_taken = 1'b0;
        if (branch_w) begin
            case (funct3_w)
                3'b100: branch_taken = (rs1_data_w == rs2_data_w);                         // BEQ
                3'b101: branch_taken = (rs1_data_w != rs2_data_w);                         // BNE
                3'b000: branch_taken = (rs1_data_w >= rs2_data_w);                         // BGEU
                3'b001: branch_taken = (rs1_data_w <  rs2_data_w);                         // BLTU
                3'b010: branch_taken = ($signed(rs1_data_w) >= $signed(rs2_data_w));       // BGE
                3'b011: branch_taken = ($signed(rs1_data_w) <  $signed(rs2_data_w));       // BLT
                default: branch_taken = 1'b0;
            endcase
        end
    end

    // next PC MUX 
    always_comb begin
        if (jalr_w)
            next_pc = (rs1_data_w + imm_w) & ~32'b1; // JALR rule: last bit will be 0
        else if (jump_w || branch_taken)
            next_pc = pc_reg + imm_w;                
        else
            next_pc = pc_reg + 32'd4;                
    end


    // 7. DATA MEMORY READ/WRITE and WRITE-BACK MUX LOGIC

    logic [31:0] mem_read_word;
    logic [31:0] load_data_w;
    
    assign mem_read_word = data_mem[alu_res_w[12:2]];

    always_comb begin
        load_data_w = mem_read_word; // LW
        case (funct3_w)
            3'b000: begin // LBU (Load Byte Unsigned)
                if (alu_res_w[1:0] == 2'b00) load_data_w = {24'b0, mem_read_word[7:0]};
                if (alu_res_w[1:0] == 2'b01) load_data_w = {24'b0, mem_read_word[15:8]};
                if (alu_res_w[1:0] == 2'b10) load_data_w = {24'b0, mem_read_word[23:16]};
                if (alu_res_w[1:0] == 2'b11) load_data_w = {24'b0, mem_read_word[31:24]};
            end
            3'b100: begin // LB (Load Byte Signed)
                if (alu_res_w[1:0] == 2'b00) load_data_w = {{24{mem_read_word[7]}},  mem_read_word[7:0]};
                if (alu_res_w[1:0] == 2'b01) load_data_w = {{24{mem_read_word[15]}}, mem_read_word[15:8]};
                if (alu_res_w[1:0] == 2'b10) load_data_w = {{24{mem_read_word[23]}}, mem_read_word[23:16]};
                if (alu_res_w[1:0] == 2'b11) load_data_w = {{24{mem_read_word[31]}}, mem_read_word[31:24]};
            end
            3'b001: begin // LHU (Load Halfword Unsigned)
                if (alu_res_w[1] == 1'b0) load_data_w = {16'b0, mem_read_word[15:0]};
                if (alu_res_w[1] == 1'b1) load_data_w = {16'b0, mem_read_word[31:16]};
            end
            3'b101: begin // LH (Load Halfword Signed)
                if (alu_res_w[1] == 1'b0) load_data_w = {{16{mem_read_word[15]}}, mem_read_word[15:0]};
                if (alu_res_w[1] == 1'b1) load_data_w = {{16{mem_read_word[31]}}, mem_read_word[31:16]};
            end
            default: load_data_w = mem_read_word;
        endcase
    end

    // Write-Back MUX
    always_comb begin
        case (wb_sel_w)
            2'b00: wb_data_w = alu_res_w;       
            2'b01: wb_data_w = load_data_w;     
            2'b10: wb_data_w = pc_reg + 32'd4;  
            2'b11: wb_data_w = imm_w;           
            default: wb_data_w = 32'b0;
        endcase
    end

    // Store and Write Memory Logic
    logic [31:0] mem_write_word;
    
    always_comb begin
        mem_write_word = mem_read_word; 
        if (mem_we_w) begin
            case (funct3_w)
                3'b000: begin // SB
                    if (alu_res_w[1:0] == 2'b00) mem_write_word[7:0]   = rs2_data_w[7:0];
                    if (alu_res_w[1:0] == 2'b01) mem_write_word[15:8]  = rs2_data_w[7:0];
                    if (alu_res_w[1:0] == 2'b10) mem_write_word[23:16] = rs2_data_w[7:0];
                    if (alu_res_w[1:0] == 2'b11) mem_write_word[31:24] = rs2_data_w[7:0];
                end
                3'b001: begin // SH
                    if (alu_res_w[1] == 1'b0) mem_write_word[15:0]  = rs2_data_w[15:0];
                    if (alu_res_w[1] == 1'b1) mem_write_word[31:16] = rs2_data_w[15:0];
                end
                default: mem_write_word = rs2_data_w; 
            endcase
        end
    end

    // Data Memory Writing (Sync.)
    always_ff @(posedge clk_i) begin
        if (mem_we_w) begin
            data_mem[alu_res_w[12:2]] <= mem_write_word;
        end
    end


    // 8. TESTBENCH VE OUTPUT PORTS 

    assign update_o   = rstn_i;       
    assign pc_o       = pc_reg;        
    assign instr_o    = instr_w;       
    // Retired Register Address and Data are gated to ensure valid retired data during Store instructions
    assign reg_addr_o = (reg_we_w && !mem_we_w) ? rd_addr_w : 5'b0;     
    assign reg_data_o = (reg_we_w && !mem_we_w) ? wb_data_w : 32'b0;    

    assign mem_addr_o = alu_res_w;     
    assign mem_data_o = mem_write_word;
    assign mem_wrt_o  = mem_we_w;     

endmodule
