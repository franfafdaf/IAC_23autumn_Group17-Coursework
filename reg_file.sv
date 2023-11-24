module reg_file(
    input logic clk,
    input logic [4:0] A1,
    input logic [4:0] A2,
    input logic [4:0] A3,
    input logic [31:0] WD3,
    output logic [31:0] RD1,
    output logic [31:0] RD2,
);

logic [31:0] mem [31:0];

assign RD1 = mem[A1];
assign RD2 = mem[A2];

always_ff @(posedge clk) begin
    mem[AD3] <= WD3;
end

endmodule