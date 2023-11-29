module memory #(
    parameter DATA_WIDTH = 8
) (
    input  logic                        clk,
    input  logic                        WE,
    input  logic [31:0]                 A,
    input  logic [31:0]                 WD,
    output logic [31:0]                 RD
);

    logic [DATA_WIDTH-1:0] data_array [2**17-1 : 0]; 

    initial $readmemh("sine.mem", data_array, 17'h10000);

    assign RD = {data_array[A+3], data_array[A+2], data_array[A+1], data_array[A]};
        
    always_ff @(posedge clk) begin
        if (WE) begin
            data_array[A] <= WD[7:0];
            data_array[A+1] <= WD[15:8];
            data_array[A+2] <= WD[23:16];
            data_array[A+3] <= WD[31:24];
        end
    end 

endmodule
