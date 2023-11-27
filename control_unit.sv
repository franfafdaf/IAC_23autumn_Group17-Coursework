//This module is managed by Guanxi Lu

module control_unit (
    input logic [6:0] opcode,
    input logic [2:0] funct3,
    input logic func75,
    input logic Zero, // used for determination of branch
    output logic PCSrc,
    output logic ResultSrc,
    output logic MemWrite, 
    output logic ALUSrc, 
    output logic [2:0] ImmSrc, 
    output logic RegWrite
    output logic [2:0] ALUControl,
    output logic LdSrc, 
    output logic StSrc
);

logic [1:0] ALUOp;
logic Branch;
logic Jump;
logic op5;

main_decode main_decode(
    .opcode(opcode),
    .funct3(funct3),
    .Branch(Branch),
    .Jump(Jump),
    .ResultSrc(ResultSrc),
    .MemWrite(MemWrite),
    .ALUSrcA(ALUSrcA),
    .ALUSrcB(ALUSrcB),
    .ImmSrc(ImmSrc),
    .RegWrite(RegWrite),
    .ALUOp(ALUOp),
    .LdSrc(LdSrc),
    .StSrc(StSrc)
);

PCSrc_decode PCSrc_decode(
    .Zero(Zero),
    .Branch(Branch),
    .Jump(Jump),
    .funct3(funct3),
    .PCSrc(PCSrc)
);

ALU_decode ALU_decode(
    .op5(op5),
    .func3(func3),
    .func75(func75),
    .ALUOp(ALUOp),
    .ALUControl(ALUControl)
);

assign op5 = opcode[5];

endmodule
