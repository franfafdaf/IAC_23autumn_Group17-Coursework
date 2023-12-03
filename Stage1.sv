module  Stage1#(
    parameter DATA_WIDTH = 32
)(
    input logic                     clk,
    input logic                     rst,
    input logic                     en,

    //instrmem input
    input logic[DATA_WIDTH-1:0]        RDi,
    //PC input
    input logic[DATA_WIDTH-1:0]        PCF,
    input logic[DATA_WIDTH-1:0]        PC_PlusF,

    //instrmem output
    output logic[DATA_WIDTH-1:0]        InstrD,
    //PC output
    output logic[DATA_WIDTH-1:0]        PCD,
    output logic[DATA_WIDTH-1:0]        PC_PlusD

);

always_ff @(posedge clk) begin

    if (en != 1) begin
        //instrmem
        InstrD <= RDi;
        //pc
        PCD <= PCF;
        PC_PlusD <= PC_PlusF;
    end
end
    
endmodule
