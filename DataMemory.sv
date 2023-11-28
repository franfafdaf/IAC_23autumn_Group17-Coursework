// <<<<<<< HEAD
module DataMemory#(
    parameter DATA_WIDTH = 32
)(
    input  logic                clk,          // Clock input
    input  logic                WE,          // Write Enable signal
    input  logic                StSrc,       // Store Type signal
    input  logic                LdSrc,       // Load Type signal
    input  logic [DATA_WIDTH-1:0] A,           // Address input
    input  logic [DATA_WIDTH-1:0] WD,          // Write Data input
    output logic [DATA_WIDTH-1:0] RD           // Read Data output
);

    logic [31:0] corrected_WD;
    logic [31:0] read_data_internal;


    memory my_mem (
        .clk(clk),
        .A(A),
        .WE(WE),
        .WD(corrected_WD),
        .RD(read_data_internal)
    );

    memory_i my_mem_i (
        .StSrc(StSrc),
        .WD_i(WD),
        .RD(read_data_internal),
        .WD_o(corrected_WD)
    );

    memory_o my_mem_o (
        .LdSrc(LdSrc),
        .RD_i(read_data_internal),
        .RD_o(RD)
    );

endmodule
