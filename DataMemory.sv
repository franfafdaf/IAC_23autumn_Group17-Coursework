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
