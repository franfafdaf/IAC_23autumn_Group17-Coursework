//This module is managed by Guanxi Lu
module main_decode(
    input logic [6:0] opcode,
    output logic Branch, 
    output logic Jump, 
    output logic [1:0] ResultSrc,
    output logic MemWrite,
    output logic ALUSrc, 
    output logic [1:0] ImmSrc,
    output logic RegWrite, 
    output logic [1:0] ALUOp, 
    output logic UpSrc
); 

always_comb
case (opcode)
0110011: begin //R-type
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'b00;
    MemWrite = 0;
    ALUSrc = 0;
    ImmSrc = 2'bxx;
    RegWrite = 1;
    ALUOp = 2'b10;
    UpSrc = 1'x;
end

0010011: begin //I-type ALU
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'b00;
    MemWrite = 0;
    ALUSrc = 1;
    ImmSrc = 2'b00;
    RegWrite = 1;
    ALUOp = 2'b00;
    UpSrc = 1'x;
end

0000011: begin //I-type load
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'b01;
    MemWrite = 0;
    ALUSrc = 1;
    ImmSrc = 2'b00;
    RegWrite = 1;
    ALUOp = 2'b00;
    UpSrc = 1'x;
end

1100111: begin //I-type jump
    Branch = 0; 
    Jump = 1; 
    ResultSrc = 2'b10;
    MemWrite = 0;
    ALUSrc = 1'bx;
    ImmSrc = 2'b00;
    RegWrite = 1;
    ALUOp = 2'bxx;
    UpSrc = 1'x;
end

0100011: begin //S-type
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'bxx;
    MemWrite = 1;
    ALUSrc = 1;
    ImmSrc = 2'b01;
    RegWrite = 0;
    ALUOp = 2'b00;
    UpSrc = 1'x;
end

1100011: begin //B-type
    Branch = 1; 
    Jump = 0; 
    ResultSrc = 2'bxx;
    MemWrite = 0;
    ALUSrc = 0;
    ImmSrc = 2'b10;
    RegWrite = 0;
    ALUOp = 2'b01;
    UpSrc = 1'x;
end

0110111: begin //U-type LUI
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'b11;
    MemWrite = 0;
    ALUSrc = 1'bx;
    ImmSrc = 2'bxx;
    RegWrite = 1;
    ALUOp = 2'bxx;
    UpSrc = 1'b0;
end

0010111: begin //U-type AUIPC
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'b11;
    MemWrite = 0;
    ALUSrc = 1'bx;
    ImmSrc = 2'bxx;
    RegWrite = 1;
    ALUOp = 2'bxx;
    UpSrc = 1'b1;
end

1101111: begin //J-type
    Branch = 0; 
    Jump = 1; 
    ResultSrc = 2'b10;
    MemWrite = 0;
    ALUSrc = 1'bx;
    ImmSrc = 2'b11;
    RegWrite = 1;
    ALUOp = 2'bxx;
    UpSrc = 1'x;
end

default: begin
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'bxx;
    MemWrite = 0;
    ALUSrc = 1'bx;
    ImmSrc = 2'bxx;
    RegWrite = 0;
    ALUOp = 2'bxx;
    UpSrc = 1'x;
end

endcase


endmodule
