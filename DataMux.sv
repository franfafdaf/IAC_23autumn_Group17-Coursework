module DataMux(
    input logic [31:0] RD,
    input logic [31:0] A,
    input logic        ResultSrc,
    output logic [31:0] Result
);

assign Result = ResultSrc ? RD : A;

endmodule
