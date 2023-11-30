module memory_i #(
    parameter DATA_WIDTH = 32

)(
    input  logic                    StSrc,    //0: word, 1: byte
    input  logic[DATA_WIDTH-1:0]    WD_i,     //Data memory write data
    output logic[DATA_WIDTH-1:0]    WD_o      //Corrected Write Data

);

always_comb begin
    if (StSrc) WD_o ={{24{1'b0}}, WD_i[7:0]};//SB
    else WD_o = WD_i;//SW
end

endmodule
