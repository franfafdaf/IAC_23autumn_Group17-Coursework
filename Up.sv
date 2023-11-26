// This module is managed by Guanxi Lu
module extend(
    input logic                 UpSrcSrc, 
    input logic [19:0]          UpImm, 
    input logic [31:0]          PC, 
    output logic [31:0]         UpResult
);

always_comb 
case (UpSrc)
    0: UpResult = {UpImm[19:0], 12'b0}; 
    1: UpResult = {UpImm[19:0], 12'b0} + PC;
    default: UpResult = 0;

endcase

endmodule
