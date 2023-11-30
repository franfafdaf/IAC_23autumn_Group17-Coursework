module alu_muxB(
    input logic [31:0] RD2,
    input logic [31:0] ImmExt,
    input logic ALUSrcB,
    output logic [31:0]SrcB
);

assign SrcB = ALUSrcB ? ImmExt : RD2;

endmodule
