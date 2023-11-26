module DataMUX (
    input logic sel,             // Selector bit
    input logic [31:0] aluResult, // ALU result
    input logic [31:0] readData,  // Data memory read data
    output logic [31:0] result    // Output result
);

    assign result = sel ? readData : aluResult;

endmodule
