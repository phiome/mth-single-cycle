import riscv_pkg::*;

module alu (
    input  logic [XLEN-1:0] a_i,        // 1. İşlenen (RS1'den gelir)
    input  logic [XLEN-1:0] b_i,        // 2. İşlenen (RS2'den veya Immediate'ten gelir)
    input  logic [3:0]      alu_ctrl_i, // İşlem Seçici Sinyal
    
    output logic [XLEN-1:0] res_o,      // İşlem Sonucu
    output logic            zero_o      // Sonuç 0 ise '1' olur
);

    // -----------------------------------------------------------------------
    // KOMBİNASYONEL İŞLEM MANTIĞI
    // -----------------------------------------------------------------------
    always_comb begin
        case (alu_ctrl_i)
            4'b0000: res_o = a_i + b_i;                                // ADD / ADDI
            4'b1000: res_o = a_i - b_i;                                // SUB
            
            // Kaydırma (Shift) işlemlerinde sadece B'nin en alt 5 biti [4:0] kullanılır
            4'b0001: res_o = a_i << b_i[4:0];                          // SLL / SLLI (Sola Kaydır)
            4'b0101: res_o = a_i >> b_i[4:0];                          // SRL / SRLI (Sağa Mantıksal Kaydır)
            4'b1101: res_o = $signed(a_i) >>> b_i[4:0];                // SRA / SRAI (Sağa Aritmetik Kaydır)
            
            // Karşılaştırma (Set Less Than) İşlemleri
            // Eğer A < B ise sonuç 1, değilse 0 olur.
            4'b0010: res_o = {31'b0, ($signed(a_i) < $signed(b_i))};   // SLT / SLTI (İşaretli)
            4'b0011: res_o = {31'b0, (a_i < b_i)};                     // SLTU / SLTIU (İşaretsiz)
            
            // Mantıksal İşlemler (Bitwise)
            4'b0100: res_o = a_i ^ b_i;                                // XOR / XORI
            4'b0110: res_o = a_i | b_i;                                // OR / ORI
            4'b0111: res_o = a_i & b_i;                                // AND / ANDI
            
            // Güvenlik: Bilinmeyen bir komut gelirse 0 bas
            default: res_o = '0; 
        endcase
    end

    // -----------------------------------------------------------------------
    // ZERO FLAG (Dallanma - Branch için)
    // -----------------------------------------------------------------------
    // Eğer ALU'nun sonucu tamamen 0 ise bu bayrak kalkar. 
    // BEQ (Branch if Equal) komutunda A ve B birbirinden çıkarılır, sonuç 0'sa eşittirler!
    assign zero_o = (res_o == '0) ? 1'b1 : 1'b0;

endmodule