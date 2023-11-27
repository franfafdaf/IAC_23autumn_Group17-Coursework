module memory_i #(
    parameter DATA_WIDTH = 32

)(
    input  logic                    StSrc,    //0: word, 1: byte
    input  logic[DATA_WIDTH-1:0]    WD_i,     //Data memory write data
    input  logic[DATA_WIDTH-1:0]    RD,       //Data memory read data
    input  logic[DATA_WIDTH-1:0]    A,        //Memory address input
    output logic[DATA_WIDTH-1:0]    WD_o      //Corrected Write Data

);

always_comb begin
    if (StSrc) begin                 //SB
        WD_o ={RD[31:8], WD_i[7:0]};
    end
    else begin                      //SW
        WD_o = WD_i;
    end
end

endmodule
