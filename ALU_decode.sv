//This module is managed by Guanxi Lu
module ALU_decode(
    input logic op5, 
    input logic func3, 
    input logic func75, 
    input logic ALUOp
);

logic [6:0] decode; 
assign decode = {ALUOp, func3, op5, func75};

always_comb
case (decode)
    00?????: ALUControl = 3'b000; //add
    01?????: ALUControl = 3'b001; //sub
    1000000: ALUControl = 3'b000; //add
    1000001: ALUControl = 3'b000; //add
    1000010: ALUControl = 3'b000; //add
    1000011: ALUControl = 3'b001; //sub
    10010??: ALUControl = 3'b101; //slt
    10110??: ALUControl = 3'b011; //or
    10111??: ALUControl = 3'b010; //and
    default: ALUControl = 3'b000;
endcase


endmodule