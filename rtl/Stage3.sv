module Stage3#(
    parameter DATA_WIDTH = 32
)(
    input logic                     clk,
    // input logic                     clr,// flush

    // control input 
    input logic                        RegWriteE,
    input logic[1:0]                   ResultSrcE,
    input logic                        MemWriteE,
    input  logic                       StSrcE,       
    input  logic                       LdSrcE,
    // ALU input
    input logic[DATA_WIDTH-1:0]        ALUResult,
    //regfile input
    input logic[DATA_WIDTH-1:0]        WriteDataE,
    //rd
    input logic[4:0]                   RdE,
    //PC input
    input logic[DATA_WIDTH-1:0]        PC_PlusE,

    // control output 
    output logic                        RegWriteM,
    output logic[1:0]                   ResultSrcM,
    output logic                        MemWriteM,
    output  logic                        StSrcM, 
    output  logic                        LdSrcM,
    // ALU output
    output logic[DATA_WIDTH-1:0]        ALUResultM,
    //regfile output
    output logic[DATA_WIDTH-1:0]        WriteDataM,
    //rd
    output logic[4:0]                   RdM,
    //PC output
    output logic[DATA_WIDTH-1:0]        PC_PlusM

);

always_ff @(posedge clk) begin

    // if (clr) begin
    //     // Clear all outputs when clr is high
    //     RegWriteM <= 0;
    //     ResultSrcM <= 0;
    //     MemWriteM <= 0;
    //     StSrcM <= 0;
    //     LdSrcM <= 0;
    //     ALUResultM <= 0;
    //     WriteDataM <= 0;
    //     RdM <= 0;
    //     PC_PlusM <= 0;
    // end 
    // else begin
        //control
        RegWriteM <= RegWriteE;
        ResultSrcM <= ResultSrcE;
        MemWriteM <= MemWriteE;
        StSrcM <= StSrcE;
        LdSrcM <= LdSrcE;
        //alu
        ALUResultM <= ALUResult;
        //regfile
        WriteDataM <= WriteDataE;
        //rd
        RdM <= RdE;
        //PC
        PC_PlusM <= PC_PlusE;
    end
// end
    
endmodule
