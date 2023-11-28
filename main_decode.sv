//This module is managed by Guanxi Lu
module main_decode(
    input logic [6:0]       opcode,
    input logic [2:0]       funct3,
    output logic            Branch, 
    output logic            Jump, 
    output logic [1:0]      ResultSrc,
    output logic            MemWrite,
    output logic            ALUSrcA, 
    output logic            ALUSrcB,
    output logic [2:0]      ImmSrc,
    output logic            RegWrite, 
    output logic [1:0]      ALUOp, 
    output logic            LdSrc,
    output logic            StSrc
); 

always_comb
case (opcode)
7'b0110011: begin //R-type
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'b00;
    MemWrite = 0;
    ALUSrcA = 0;
    ALUSrcB = 0;
    RegWrite = 1;
    ALUOp = 2'b10;
end

7'b0010011: begin //I-type ALU
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'b00;
    MemWrite = 0;
    ALUSrcA = 0;
    ALUSrcB = 1;
    ImmSrc = 3'b000;
    RegWrite = 1;
    ALUOp = 2'b00;
end

7'b0000011: begin //I-type load
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'b01;
    MemWrite = 0;
    ALUSrcA = 0;
    ALUSrcB = 1;
    ImmSrc = 3'b000;
    RegWrite = 1;
    ALUOp = 2'b00;
    LdSrc = {funct3[2]};
end

7'b1100111: begin //I-type jump
    Branch = 0; 
    Jump = 1; 
    ResultSrc = 2'b10;
    MemWrite = 0;
    ImmSrc = 3'b000;
    RegWrite = 1;
end

7'b0100011: begin //S-type
    Branch = 0; 
    Jump = 0; 
    MemWrite = 1;
    ALUSrcA = 0;
    ALUSrcB = 1;
    ImmSrc = 3'b001;
    RegWrite = 0;
    ALUOp = 2'b00;
    StSrc = ~{&{funct3}};
end

7'b1100011: begin //B-type
    Branch = 1; 
    Jump = 0; 
    MemWrite = 0;
    ALUSrcA = 0;
    ALUSrcB = 0;
    ImmSrc = 3'b010;
    RegWrite = 0;
    ALUOp = 2'b01;
end

7'b0110111: begin //U-type LUI
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'b00;
    MemWrite = 0;
    ALUSrcB = 1'b1;
    ImmSrc = 3'b100;
    RegWrite = 1;
    ALUOp = 2'b11;
end

7'b0010111: begin //U-type AUIPC
    Branch = 0; 
    Jump = 0; 
    ResultSrc = 2'b00;
    MemWrite = 0;
    ALUSrcA = 1'b1;
    ALUSrcB = 1'b1;
    ImmSrc = 3'b100;
    RegWrite = 1;
    ALUOp = 2'b11;
end

7'b1101111: begin //J-type
    Branch = 0; 
    Jump = 1; 
    ResultSrc = 2'b10;
    MemWrite = 0;
    ImmSrc = 3'b011;
    RegWrite = 1;
end

default: begin
    Branch=0;
    Jump =0;
    MemWrite=0;
    RegWrite=0;
end

endcase


endmodule
