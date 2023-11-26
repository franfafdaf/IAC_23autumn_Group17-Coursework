//This module is managed by Guanxi Lu
module ALU_decode(
    input logic op5, 
    input logic [2:0] func3, 
    input logic func75, 
    input logic [1:0] ALUOp
    output logic [2:0] ALUControl
);

logic [6:0] decode; 
assign decode = {ALUOp, func3, op5, func75};

always_comb
case (decode)
    00?????: ALUControl = 3'b000; //add for lw, sw
    01?????: ALUControl = 3'b001; //sub for beq
    100000?: ALUControl = 3'b000; //add
    1000010: ALUControl = 3'b000; //add
    1000011: ALUControl = 3'b001; //sub
    10010??: ALUControl = 3'b101; //slt
    10110??: ALUControl = 3'b011; //or
    10111??: ALUControl = 3'b010; //and
    default: ALUControl = 3'b000;
endcase


endmodule
