module alu_top_level(
    input logic clk,
    input logic [4:0] A1,
    input logic [4:0] A2,
    input logic [4:0] A3,
    input logic [31:0] WD3,
    input logic [31:0] ImmExt,
    input logic ALUsrcB,
    input logic [2:0] ALUControl,
    input logic [31:0] PC,
    input logic ALUSrcA,
    output logic [31:0] ALUResult, 
    output logic [31:0] RD2, 
    output logic Zero
);

    logic [31:0] RD1;
    logic [31:0] RD2;
    logic [31:0] SrcA;
    logic [31:0] SrcB;

    reg_file myreg_file(
        .clk(clk),
        .A1(A1),
        .A2(A2),
        .A3(A3),
        .WD3(WD3),
        .RD1(RD1),
        .RD2(RD2)
    );

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
        .zero(zero),
    );

endmodule