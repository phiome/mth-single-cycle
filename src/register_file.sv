import riscv_pkg::*;

module register_file (
    input  logic             clk_i,
    input  logic             rstn_i,
    input  logic             we_i,          // Write Enable
    
    input  logic [4:0]       rs1_addr_i,    // Read Address 1
    input  logic [4:0]       rs2_addr_i,    // Read Address 2
    input  logic [4:0]       rd_addr_i,     // Write Address
    
    input  logic [XLEN-1:0]  rd_data_i,     // Write Data
    
    output logic [XLEN-1:0]  rs1_data_o,    // Read Data 1
    output logic [XLEN-1:0]  rs2_data_o     // Read Data 2
);

    // 32 adet, her biri XLEN (32-bit) genişliğinde register dizisi
    logic [XLEN-1:0] registers [31:0];

    // -----------------------------------------------------------------------
    // OKUMA MANTIĞI (Kombinasyonel - Saat sinyalinden bağımsız)
    // -----------------------------------------------------------------------
    // Eğer istenen adres 0 ise, direkt 0 bas. Değilse register'ın içindekini ver.
    assign rs1_data_o = (rs1_addr_i == 5'b0) ? '0 : registers[rs1_addr_i];
    assign rs2_data_o = (rs2_addr_i == 5'b0) ? '0 : registers[rs2_addr_i];

    // -----------------------------------------------------------------------
    // YAZMA VE RESET MANTIĞI (Senkron - Saat sinyaline bağlı)
    // -----------------------------------------------------------------------
    always_ff @(posedge clk_i or negedge rstn_i) begin
        if (!rstn_i) begin
            // Reset geldiğinde tüm register'ları sıfırla (x0 zaten 0 kalır)
            for (int i = 1; i < 32; i++) begin
                registers[i] <= '0;
            end
        end 
        else begin
            // Yazma yetkisi (we_i) varsa VE hedef adres 0 değilse yaz
            if (we_i && (rd_addr_i != 5'b0)) begin
                registers[rd_addr_i] <= rd_data_i;
            end
        end
    end

endmodule