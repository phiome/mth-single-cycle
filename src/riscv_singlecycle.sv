

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

    // ===========================================================================
    // 1. BELLEK (MEMORY) TANIMLAMALARI VE İLKLENDİRME
    // ===========================================================================
    // Her biri 32-bit (XLEN) genişliğinde 2048 satırlık bellek dizileri (8 KB)
    logic [XLEN-1:0] instr_mem [0:2047];
    logic [XLEN-1:0] data_mem  [0:2047];

    // PDF Kuralı: readmemh ile başlatma
    initial begin
        $readmemh(IMemInitFile, instr_mem, 0, 2047);
        $readmemh(DMemInitFile, data_mem, 0, 2047);
    end

    // Testbench'in arkadan belleği okuması için gerekli atama
    assign data_o = data_mem[addr_i[12:2]]; 

    // ===========================================================================
    // 2. PROGRAM COUNTER (PC) VE FETCH MANTIĞI
    // ===========================================================================
    logic [31:0] pc_reg;
    logic [31:0] next_pc;
    logic [31:0] instr_w;

    // Saat sinyaline bağlı PC güncellemesi (Reset'te 0'a döner)
    always_ff @(posedge clk_i or negedge rstn_i) begin
        if (!rstn_i) pc_reg <= 32'b0;
        else         pc_reg <= next_pc;
    end

    // Instruction Memory'den komut çekme (Fetch). PC 4'er arttığı için 4'e bölüyoruz (>> 2)
    assign instr_w = instr_mem[pc_reg[12:2]];


    // ===========================================================================
    // 3. DECODER (KONTROL BİRİMİ) BAĞLANTILARI
    // ===========================================================================
    logic [4:0]  rs1_addr_w, rs2_addr_w, rd_addr_w;
    logic [31:0] imm_w;
    logic        reg_we_w, alu_src_w, pc_to_alu_w, mem_we_w, branch_w, jump_w, jalr_w;
    logic [1:0]  wb_sel_w;
    logic [3:0]  alu_ctrl_w;
    logic [2:0]  funct3_w;
    logic [2:0]  unused_branch_type;
    // Custom ISA'na göre funct3 her zaman [7:5] bitleri arasındadır
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
        .branch_type_o (unused_branch_type), // Doğrudan funct3_w kullanacağımız için boşa çıkarıyoruz
        .jump_o        (jump_w),
        .jalr_o        (jalr_w)
    );


    // ===========================================================================
    // 4. REGISTER FILE BAĞLANTILARI
    // ===========================================================================
    logic [31:0] rs1_data_w, rs2_data_w, wb_data_w;

    register_file u_regfile (
        .clk_i      (clk_i),
        .rstn_i     (rstn_i),
        .we_i       (reg_we_w),
        .rs1_addr_i (rs1_addr_w),
        .rs2_addr_i (rs2_addr_w),
        .rd_addr_i  (rd_addr_w),
        .rd_data_i  (wb_data_w),
        .rs1_data_o (rs1_data_w),
        .rs2_data_o (rs2_data_w)
    );


    // ===========================================================================
    // 5. ALU BAĞLANTILARI
    // ===========================================================================
    logic [31:0] alu_a_w, alu_b_w, alu_res_w;
    logic        alu_zero_w; // Aslında dallanma için alttaki özel mantığı kullanacağız

    // MUX: ALU'nun A girişine PC mi gidecek, RS1 mi?
    assign alu_a_w = pc_to_alu_w ? pc_reg : rs1_data_w;
    // MUX: ALU'nun B girişine Immediate mı gidecek, RS2 mi?
    assign alu_b_w = alu_src_w ? imm_w : rs2_data_w;

    alu u_alu (
        .a_i        (alu_a_w),
        .b_i        (alu_b_w),
        .alu_ctrl_i (alu_ctrl_w),
        .res_o      (alu_res_w),
        .zero_o     (alu_zero_w)
    );


    // ===========================================================================
    // 6. DALLANMA (BRANCH) MANTIĞI & NEXT_PC HESAPLAMA
    // ===========================================================================
    logic branch_taken;
    
    // ALU yerine karşılaştırmaları burada yapmak daha güvenlidir
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

    // Bir sonraki PC'nin ne olacağına karar veren MUX ağı
    always_comb begin
        if (jalr_w)
            next_pc = (rs1_data_w + imm_w) & ~32'b1; // JALR kuralı: son bit 0 yapılır
        else if (jump_w || branch_taken)
            next_pc = pc_reg + imm_w;                // JAL veya Koşul sağlandıysa atla
        else
            next_pc = pc_reg + 32'd4;                // Normal işleyiş
    end


    // ===========================================================================
    // 7. DATA MEMORY OKUMA/YAZMA VE WRITE-BACK MUX MANTIĞI
    // ===========================================================================
    logic [31:0] mem_read_word;
    logic [31:0] load_data_w;
    
    // Data Memory'den ham 32-bit veriyi oku
    assign mem_read_word = data_mem[alu_res_w[12:2]];

    // Load İşlemleri için Byte/Halfword ayıklama ve Sign Extension (İşaret Genişletme)
    always_comb begin
        load_data_w = mem_read_word; // Varsayılan (LW)
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

    // Write-Back MUX: Register'a Hangi Veri Gidecek?
    always_comb begin
        case (wb_sel_w)
            2'b00: wb_data_w = alu_res_w;       // ALU Sonucu
            2'b01: wb_data_w = load_data_w;     // Bellekten Okunan (Ayıklanmış) Veri
            2'b10: wb_data_w = pc_reg + 32'd4;  // JAL/JALR için Dönüş Adresi
            2'b11: wb_data_w = imm_w;           // Doğrudan Immediate (LUI için)
            default: wb_data_w = 32'b0;
        endcase
    end

    // Store İşlemleri (Byte/Halfword yazma) ve Belleğe Yazma Mantığı
    logic [31:0] mem_write_word;
    
    always_comb begin
        mem_write_word = mem_read_word; // Read-Modify-Write mantığı
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
                default: mem_write_word = rs2_data_w; // SW
            endcase
        end
    end

    // Data Memory Yazma İşlemi (Senkron)
    always_ff @(posedge clk_i) begin
        if (mem_we_w) begin
            data_mem[alu_res_w[12:2]] <= mem_write_word;
        end
    end


    // ===========================================================================
    // 8. TESTBENCH VE ÇIKIŞ PORTLARI (PDF ZORUNLULUKLARI)
    // ===========================================================================
    assign update_o   = rstn_i;        // Reset dışındayken her vuruşta update geçerli
    assign pc_o       = pc_reg;        // Mevcut PC
    assign instr_o    = instr_w;       // Çalışan Komut
    assign reg_addr_o = rd_addr_w;     // Hedef Register Adresi
    assign reg_data_o = wb_data_w;     // Register'a yazılan veya ALU'dan çıkan veri
    assign mem_addr_o = alu_res_w;     // Bellek Erişim Adresi
    assign mem_data_o = mem_write_word;// Belleğe yazılan veri
    assign mem_wrt_o  = mem_we_w;      // Bellek Yazma Yetkisi

endmodule
