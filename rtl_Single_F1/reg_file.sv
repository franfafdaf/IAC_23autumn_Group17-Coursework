module reg_file(
    input logic             clk,
    input logic [4:0]       A1,
    input logic [4:0]       A2,
    input logic [4:0]       A3,
    input logic [31:0]      WD3,
    input logic             WE3,

    output logic [31:0]     RD1,
    output logic [31:0]     RD2,
    output logic [31:0]     a0, 
    input logic  [31:0]     trigger
);

logic [31:0] register [31:0];

assign     RD1 = register[A1];
assign     RD2 = register[A2];
assign     a0 = register[10];
assign     register[5] = trigger;

always_ff @(posedge clk) begin
    if ((WE3 == 1'b1) && (A3 != 0)) register[A3] <= WD3;
end
endmodule
