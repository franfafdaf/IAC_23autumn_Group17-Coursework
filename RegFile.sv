module RegFile(
    input logic             clk,
    input logic             trigger,
    input logic [4:0]       A1,
    input logic [4:0]       A2,
    input logic [4:0]       A3,
    input logic [31:0]      WD3,
    input logic             WE3,

    output logic [31:0]     RD1,
    output logic [31:0]     RD2,
    output logic [31:0]     a0 
);

logic [31:0] mem [31:0];

assign     RD1 = mem[A1];
assign     RD2 = mem[A2];
assign     a0 = mem[10];
assign     mem[18] = trigger;

always_ff @(negedge clk) begin
    mem[0] <= 32'b0;
    if (WE3 == 1'b1)
        mem[A3] <= WD3;
end
endmodule
