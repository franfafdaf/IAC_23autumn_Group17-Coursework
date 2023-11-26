module DataMUX (
    input logic ResultSrc,             // Selector bit
    input logic [31:0] ALUResult, // ALU result
    input logic [31:0] RD,  // Data memory read data
    output logic [31:0] Result    // Output result
);

    assign Result = ResultSrc ? RD : ALUResult;

endmodule
