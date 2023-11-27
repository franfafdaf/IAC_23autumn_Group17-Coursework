module alu_muxA(
    input logic [31:0] RD1,
    input logic [31:0] PC,
    input logic ALUSrcA,
    output logic [31:0]SrcA
);

assign SrcA = ALUSrcA ? PC : RD1;

endmodule