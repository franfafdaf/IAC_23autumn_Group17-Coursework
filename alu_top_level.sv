module alu_top_level(
    input logic [31:0] ImmExt,
    input logic ALUsrcB,
    input logic [2:0] ALUControl,
    input logic [31:0] PC,
    input logic ALUSrcA,
    output logic [31:0] ALUResult, 
    input logic [31:0] RD2, 
    input logic [31:0] RD1,
    output logic Zero,
    output logic [31:0] a0
);

    logic [31:0] SrcA;
    logic [31:0] SrcB;

    alu_muxA mymuxA(
        .RD1(RD1),
        .PC(PC),
        .ALUSrcA(ALUsrcA),
        .SrcA(SrcA)
    );

    alu_muxB mymuxB(
        .RD2(RD2),
        .ImmExt(ImmExt),
        .ALUSrcB(ALUsrcB),
        .SrcB(SrcB)
    );

    alu myalu(
        .SrcA(SrcA),
        .SrcB(SrcB),
        .ALUControl(ALUControl),
        .ALUResult(ALUResult),
        .Zero(Zero)
    );

endmodule
