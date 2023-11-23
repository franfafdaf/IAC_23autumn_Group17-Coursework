module temp_lfsr (
    input logic         clk, 
    output logic [7:1]  data_out
);

    always_ff @(posedge clk)   begin 
        data_out[7:1] <= 7'b1111111; //value is 127
    end
endmodule
