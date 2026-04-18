/* verilator lint_off UNUSEDSIGNAL */
import riscv_pkg::*; // Struct yerine standart paketimizi ekledik

module decoder (
    input  logic        clk_i,   // Verilator uyarılarını engellemek için
    input  logic [31:0] instr_i,
    
    // VERİ YOLU (DATAPATH) ADRES VE DEĞER ÇIKIŞLARI
    output logic [4:0]  rs1_addr_o,
    output logic [4:0]  rs2_addr_o,
    output logic [4:0]  rd_addr_o,
    output logic [31:0] imm_o,         // Kendi HW1 mantığınla çözülmüş Anlık Değer
    
    // KONTROL SİNYALLERİ (Control Unit Outputs)
    output logic        reg_we_o,      // Register'a yazma izni (Register File we_i)
    output logic        alu_src_o,     // ALU B girişi: 0 = RS2, 1 = IMM
    output logic        pc_to_alu_o,   // ALU A girişi: 0 = RS1, 1 = PC (AUIPC için)
    output logic [3:0]  alu_ctrl_o,    // ALU'ya gidecek 4-bitlik işlem komutu
    output logic        mem_we_o,      // Data Memory'ye yazma izni
    output logic [1:0]  wb_sel_o,      // RegFile'a ne yazılacak? 00:ALU, 01:Mem, 10:PC+4, 11:IMM
    output logic        branch_o,      // Komut bir dallanma mı?
    output logic [2:0]  branch_type_o, // Hangi dallanma türü? (BEQ, BNE vs. için funct3)
    output logic        jump_o,        // JAL veya JALR mi?
    output logic        jalr_o         // PC = RS1 + IMM mi olacak?
);

    // 1. ADIM: Sinyalleri senin Custom ISA'na göre ayıklama
    logic [6:0] opcode;
    logic [2:0] funct3;

    assign opcode     = instr_i[19:13];
    assign rs2_addr_o = instr_i[24:20];
    assign rs1_addr_o = instr_i[12:8];
    assign funct3     = instr_i[7:5];
    assign rd_addr_o  = instr_i[4:0];

    // 2. ADIM: Kombinasyonel Çözümleme Mantığı
    always_comb begin
        // Varsayılan değerler (LATCH oluşumunu engellemek için her şey 0)
        imm_o         = '0;
        reg_we_o      = 1'b0;
        alu_src_o     = 1'b0;
        pc_to_alu_o   = 1'b0;
        alu_ctrl_o    = 4'b0000; // Varsayılan ALU: ADD
        mem_we_o      = 1'b0;
        wb_sel_o      = 2'b00;
        branch_o      = 1'b0;
        branch_type_o = 3'b000;
        jump_o        = 1'b0;
        jalr_o        = 1'b0;

        // 3. ADIM: Opcode'a Göre Yönlendirme
        case (opcode)
            
            // LUI
            7'b1110101: begin 
                reg_we_o = 1'b1;
                wb_sel_o = 2'b11; // IMM değerini doğrudan Register'a yaz
                imm_o    = {instr_i[31:20], instr_i[12:5], 12'b0};
            end

            // AUIPC
            7'b1110100: begin 
                reg_we_o    = 1'b1;
                wb_sel_o    = 2'b00; // ALU sonucunu (PC + IMM) yaz
                pc_to_alu_o = 1'b1;  // ALU A girişi PC olsun
                alu_src_o   = 1'b1;  // ALU B girişi IMM olsun
                alu_ctrl_o  = 4'b0000; // ADD
                imm_o       = {instr_i[31:20], instr_i[12:5], 12'b0};
            end

            // JAL 
            7'b1101111: begin 
                reg_we_o = 1'b1;
                wb_sel_o = 2'b10; // PC+4 değerini Register'a (genelde x1) yaz
                jump_o   = 1'b1;
                imm_o    = { {11{instr_i[31]}}, instr_i[31], instr_i[12:5], instr_i[20], instr_i[30:21], 1'b0 };
            end

            // JALR 
            7'b1100111: begin 
                reg_we_o = 1'b1;
                wb_sel_o = 2'b10; // PC+4 değerini Register'a yaz
                jump_o   = 1'b1;
                jalr_o   = 1'b1;  // Hedef adres RS1 + IMM olarak hesaplanacak
                imm_o    = { {20{instr_i[31]}}, instr_i[31:20] };
            end

            // Branch (Dallanma)
            7'b1100011: begin 
                branch_o      = 1'b1;
                branch_type_o = funct3; // BEQ, BNE kontrolü için dışarı veriyoruz
                alu_src_o     = 1'b0;   // Karşılaştırma için ALU B = RS2
                alu_ctrl_o    = 4'b1000; // SUB (Birbirinden çıkarıp zero bayrağına bakacağız)
                imm_o         = { {19{instr_i[31]}}, instr_i[31], instr_i[0], instr_i[30:25], instr_i[4:1], 1'b0 };
            end

            // Load (Okuma)
            7'b1100000: begin 
                reg_we_o   = 1'b1;
                wb_sel_o   = 2'b01;   // Mem'den geleni Register'a yaz
                alu_src_o  = 1'b1;    // Adres hesabı için ALU B = IMM
                alu_ctrl_o = 4'b0000; // Adres hesabı: RS1 + IMM (ADD)
                imm_o      = { {20{instr_i[31]}}, instr_i[31:20] };
            end

            // Store (Yazma)
            7'b1100001: begin 
                mem_we_o   = 1'b1;    // Belleğe yazma izni!
                alu_src_o  = 1'b1;    // Adres hesabı için ALU B = IMM
                alu_ctrl_o = 4'b0000; // Adres hesabı: RS1 + IMM (ADD)
                imm_o      = { {20{instr_i[31]}}, instr_i[31:25], instr_i[4:0] };
            end

            // I-Type Aritmetik/Mantık
            7'b1100100: begin 
                reg_we_o   = 1'b1;
                wb_sel_o   = 2'b00; // ALU sonucunu Register'a yaz
                alu_src_o  = 1'b1;  // ALU B = IMM

                // Senin Shift ve Arithmetic ayrımın:
                if (funct3 == 3'b001 || funct3 == 3'b101) begin
                    imm_o = { 27'b0, instr_i[24:20] }; 
                end else begin
                    imm_o = { {20{instr_i[31]}}, instr_i[31:20] };
                end
                
                // ALU İşlem Kodunu (alu.sv'deki kodlara göre) atıyoruz
                case (funct3)
                    3'b000: alu_ctrl_o = 4'b0000; // ADDI
                    3'b010: alu_ctrl_o = 4'b0010; // SLTI
                    3'b011: alu_ctrl_o = 4'b0011; // SLTIU
                    3'b100: alu_ctrl_o = 4'b0110; // ORI
                    3'b110: alu_ctrl_o = 4'b0100; // XORI
                    3'b111: alu_ctrl_o = 4'b0111; // ANDI
                    3'b001: alu_ctrl_o = 4'b0001; // SLLI
                    3'b101: begin
                        if (instr_i[31:25] == 7'b0000000)
                            alu_ctrl_o = 4'b0101; // SRLI
                        else if (instr_i[31:25] == 7'b0000010)
                            alu_ctrl_o = 4'b1101; // SRAI
                    end
                    default: ;
                endcase
            end

            // R-Type Aritmetik/Mantık
            7'b1110001: begin 
                reg_we_o  = 1'b1;
                wb_sel_o  = 2'b00; // ALU sonucunu Register'a yaz
                alu_src_o = 1'b0;  // ALU B = RS2

                case (funct3)
                    3'b000: begin
                        if (instr_i[31:25] == 7'b0000000)      alu_ctrl_o = 4'b0000; // ADD
                        else if (instr_i[31:25] == 7'b0000010) alu_ctrl_o = 4'b1000; // SUB
                    end
                    3'b001: if (instr_i[31:25] == 7'b0000000) alu_ctrl_o = 4'b0001; // SLL
                    3'b010: if (instr_i[31:25] == 7'b0000000) alu_ctrl_o = 4'b0010; // SLT
                    3'b011: if (instr_i[31:25] == 7'b0000000) alu_ctrl_o = 4'b0011; // SLTU
                    3'b100: if (instr_i[31:25] == 7'b0000000) alu_ctrl_o = 4'b0100; // XOR
                    3'b101: begin
                        if (instr_i[31:25] == 7'b0000000)      alu_ctrl_o = 4'b0101; // SRL
                        else if (instr_i[31:25] == 7'b0000010) alu_ctrl_o = 4'b1101; // SRA
                    end
                    3'b110: if (instr_i[31:25] == 7'b0000000) alu_ctrl_o = 4'b0110; // OR
                    3'b111: if (instr_i[31:25] == 7'b0000000) alu_ctrl_o = 4'b0111; // AND
                    default: ; 
                endcase
            end

            default: ; // Bilinmeyen opcode durumunda her şey varsayılan 0'da kalır
        endcase
    end

endmodule