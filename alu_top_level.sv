module alu_top_level(
    input logic clk,
    input logic [4:0] A1,
    input logic [4:0] A2,
    input logic [4:0] A3,
    input logic [31:0] WD3,
    input logic [31:0] ImmExt,
    input logic ALUsrc,
    input logic [2:0] ALUControl,
    output logic [31:0] ALUResult
);

    logic [31:0] RD1_SrcA;
    logic [31:0] RD2;
    logic [31:0] SrcB;

    reg_file myreg_file(
        .clk(clk),
        .A1(A1),
        .A2(A2),
        .A3(A3),
        .WD3(WD3),
        .RD1(RD1_SrcA),
        .RD2(RD2)
    );

    alu_mux mymux(
        .RD2(RD2_regOp2),
        .ImmExt(ImmExt),
        .ALUSrc(ALUsrc),
        .SrcB(SrcB)
    );

    alu myalu(
        .SrcA(RD1_SrcA),
        .SrcB(SrcB),
        .ALUControl(ALUControl),
        .ALUResult(ALUResult),
    );

endmodule