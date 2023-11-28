module memory #(
    parameter ADDRESS_WIDTH = 32, 
    parameter DATA_WIDTH = 8
) (
    input  logic                        clk,
    input  logic                        WE,
    input  logic [ADDRESS_WIDTH-1:0]    A,
    input  logic [ADDRESS_WIDTH-1:0]    WD,
    output logic [ADDRESS_WIDTH-1:0]    RD
);

    logic [DATA_WIDTH-1:0] mem_array [2**17-1:0]; 

    initial begin 
        $readmemh("gaussian.mem", mem_array);
    end;

    assign RD = {mem_array[A+3], mem_array[A+2], mem_array[A+1], mem_array[A]};
        
    always_ff @(posedge clk) begin
        if (WE) begin
            mem_array[A] <= WD[7:0];
            mem_array[A+1] <= WD[15:8];
            mem_array[A+2] <= WD[23:16];
            mem_array[A+3] <= WD[31:24];
        end
    end 

endmodule
