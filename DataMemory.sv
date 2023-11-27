<<<<<<< HEAD
module DataMemory#(
    parameter DATA_WIDTH = 32
)(
    input  logic                clk,          // Clock input
    input  logic                WE,          // Write Enable signal
    input  logic                StSrc,       // Store Type signal
    input  logic                LdSrc,       // Load Type signal
    input  logic [DATA_WIDTH:0] A,           // Address input
    input  logic [DATA_WIDTH:0] WD,          // Write Data input
    output logic [DATA_WIDTH:0] RD           // Read Data output
);

    logic [31:0] corrected_WD;
    logic [31:0] read_data_internal;

    memory_i my_mem_i (
        .StSrc(StSrc),
        .WD_i(WD),
        .RD(read_data_internal),
        .A(A),
        .WD_o(corrected_WD)
    );

    memory my_mem (
        .clk(clk),
        .WE(WE),
        .A(A),
        .WD(corrected_WD),
        .RD(read_data_internal)
    );

    memory_o my_mem_o (
        .LdSrc(LdSrc),
        .RD_i(read_data_internal),
        .A(A),
        .RD_o(RD)
    );

endmodule

=======
module DataMemory #(
    parameter DataLength = 32,
               
) (
    input logic                     clk;
    input logic                     WE;//write enable
    input logic [DataLength-1: 0]   A;// aluAddress 
    input logic [Datalength-1: 0]   WD;//write data
    output logic [DataLength-1: 0]  RD// read data
);
logic [DataLength-1:0] DataArray [0x0001FFFF: 0X00000000];

initial
    $readmemh("data.mem", DataArray);

always_ff @(posedge clk) begin
    if (WE)
        mem[A] <= WD;
    RD <= mem[A]; //in same cycle?
end
endmodule
>>>>>>> origin/fhc
