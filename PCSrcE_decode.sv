//This module is managed by Guanxi Lu
module PCSrcE_decode(
    input logic         ZeroE, 
    input logic         BranchE,
    input logic         JumpE,
    // input logic [2:0]   funct3,
    output logic        PCSrcE
); 

// always_comb begin 
// // if (Jump == 1) 
// //     PCSrc = 1;
// // else if (Branch == 1 && Zero == 1 && funct3 == {3'b000}) 
// //     PCSrc = 1;
// // else if (Branch == 1 && Zero == 0 && funct3 == {3'b001}) 
// //     PCSrc = 1;
// // else 
// //     PCSrc = 0;
// end

assign PCSrcE = JumpE | (BranchE & ZeroE);

endmodule
