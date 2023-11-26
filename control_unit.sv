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
)




endmodule
