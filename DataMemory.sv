module DataMemory #(
    parameter ADDRESS_WIDTH = 32, 
    parameter DATA_WIDTH = 8      
)(
    input logic clk,                       // Clock signal
    input logic WE,                        // Write enable signal
    input logic BE,                        // Byte enable signal
    input logic [ADDRESS_WIDTH-1:0] A,     // Memory address input
    input logic [DATA_WIDTH*4-1:0] WD,     // Data input for write operation (32 bits)
    output logic [DATA_WIDTH*4-1:0] RD     // Data output for read operation (32 bits)
);

    logic [DATA_WIDTH-1:0] mem_array [32'h0001FFFF:32'h00000000];

    initial begin
        $readmemh("gaussian.mem", mem_array, 'h10000); 
    end

    always_ff @(posedge clk) begin
        if (WE) begin
            if (BE) begin                //SB
                mem_array[A] <= WD[7:0];
            end
            else begin                   //SW
                mem_array[A] <= WD[7:0];
                mem_array[A+1] <= WD[15:8];
                mem_array[A+2] <= WD[23:16];
                mem_array[A+3] <= WD[31:24];
            end
        end
    end

    always_comb begin
        if (BE) begin                        //LBU
            RD = {24'b0, mem_array[Address]};
        end
        else begin                           //LW
            RD = {mem_array[A+3], mem_array[A+2], mem_array[A+1], mem_array[A]};
        end
    end

endmodule

