module DataMemory#(
    parameter DATA_WIDTH = 32
)(
    input  logic                  clk,          // Clock input
    input  logic                  WE,          // Write Enable signal
    input  logic                  StSrc,       // Store Type signal
    input  logic                  LdSrc,       // Load Type signal
    input  logic [DATA_WIDTH-1:0] A,           // Address input
    input  logic [DATA_WIDTH-1:0] WD,          // Write Data input
    output logic [DATA_WIDTH-1:0] RD           // Read Data output
);

    memory my_mem (
        .clk(clk),
        .A(A),
        .WE(WE),
        .StSrc(StSrc),
        .LdSrc(LdSrc),
        .WD(WD),
        .RD(RD)
    );


endmodule
