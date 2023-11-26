//This module is managed by Guanxi Lu
module PCSrc_decode(
    input logic Zero, 
    input logic Branch,
    input logic Jump,
    output logic PCSrc
); 

assign PCSrc = (Branch & Zero) | Jump;

endmodule
