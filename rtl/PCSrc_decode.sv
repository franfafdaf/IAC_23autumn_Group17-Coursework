module PCSrc_decode(
    input logic         Zero, 
    input logic         Branch,
    input logic         Jump,
    input logic [2:0]   funct3,
    output logic        PCSrc
); 

always_comb begin 
if (Jump == 1)      // Jump Instructions
    PCSrc = 1;
else if (Branch == 1 && Zero == 1 && funct3 == {3'b000})    // BEQ
    PCSrc = 1;
else if (Branch == 1 && Zero == 0 && funct3 == {3'b001})    // BNE
    PCSrc = 1;
else 
    PCSrc = 0;
end

endmodule
