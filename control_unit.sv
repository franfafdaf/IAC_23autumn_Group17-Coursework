//This module is managed by Guanxi Lu

module control_unit (
    input logic [6:0] opcode,
    input logic [2:0] funct3,
    input logic func75,
    input logic Zero, // used for determination of branch
    output logic PCSrc,
    output logic ResultSrc,
    output logic MemWrite, 
    output logic [2:0] ALUControl, 
    output logic ALUSrc, 
    output logic [1:0] ImmSrc, 
    output logic RegWrite
);

ALU_decode myALU_decode(
    input logic [2:0] funct3,
    input logic func75,
    output logic [2:0] ALUControl
);

PCSrc_decode myPCSrc_decode(
    input logic Zero,
    output logic PCSrc
);

main_decode mymain_decode(
    input logic [6:0] opcode,
    output logic ResultSrc,
    output logic MemWrite, 
    output logic ALUSrc, 
    output logic [1:0] ImmSrc, 
    output logic RegWrite
);




endmodule
