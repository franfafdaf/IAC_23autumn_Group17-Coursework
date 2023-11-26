module DataMemory #(
    parameter ADDRESS_WIDTH = 17,
    parameter DATA_WIDTH = 32
)(
    input logic clk,             // Clock signal
    input logic WE,              // Write enable signal
    input logic [DATA_WIDTH-1:0] A, // Memory address input
    input logic [DATA_WIDTH-1:0] WD, // Data input for write operation
    output logic [DATA_WIDTH-1:0] RD  // Data output for read operation
);

    // Memory array declaration
    logic [DATA_WIDTH-1:0] mem_array [2**ADDRESS_WIDTH-1:0];
    
    initial begin
        $readmemh("gaussian.mem", mem_array); 
    end

    always_comb begin
        RD = mem_array[A]; // Reading data from memory at address A
    end

    always_ff @(posedge clk) begin
        if (WE) begin
            mem_array[A] <= WD; // Writing data into memory at address A
        end
    end


endmodule
