module ExecuteStage#(
    parameter DATA_WIDTH = 32
)(
    input logic                     clk,

    // control input
    input logic                     RegWriteD,
    input logic[1:0]                ResultSrcD,
    input logic                     MemWriteD,
    input logic                     JumpD,
    input logic                     BranchD,
    input logic                     ALUControlD,
    input logic                     ALUSrcAD,
    input logic                     ALUSrcBD,
    // regfile input 
    input logic[DATA_WIDTH-1:0]     RD1,
    input logic[DATA_WIDTH-1:0]     RD2,
    input logic[DATA_WIDTH-1:0]     a0D,
    //
    input logic[4:0]                RdD,
    // extend input
    input logic[DATA_WIDTH-1:0]     ImmExtD,
    //PC input
    input logic[DATA_WIDTH-1:0]     PCD,
    input logic[DATA_WIDTH-1:0]     PC_PlusD,

    // control output 
    output logic                    RegWriteE,
    output logic                    ResultSrcE,
    output logic                    MemWriteE,
    output logic                    JumpE,
    output logic                    BranchE,
    output logic                    ALUControlE,
    output logic                    ALUSrcAE,
    output logic                    ALUSrcBE,
    // regfile output 
    output logic[DATA_WIDTH-1:0]     RD1E,
    output logic[DATA_WIDTH-1:0]     RD2E,
    output logic[DATA_WIDTH-1:0]     a0E,
    //rd
    output logic[4:0]                RdE,
    // extend output
    output logic[DATA_WIDTH-1:0]     ImmExtE,
    //PC output
    output logic[DATA_WIDTH-1:0]     PCE,
    output logic[DATA_WIDTH-1:0]     PC_PlusE

);

always_ff @(posedge clk) begin
    //control
    RegWriteE <= RegWriteD;
    ResultSrcE <= ResultSrcD;
    MemWriteD <= MemWriteD;
    JumpE <= JumpD;
    BranchE <= BranchD;
    ALUControlE <= ALUControlD;
    ALUSrcAE <= ALUSrcAD;
    ALUSrcBE <= ALUSrcBD;
    //regfile
    RD1E <= RD1;
    RD2E<= RD2;
    a0E <= a0D;
    //rd
    RdE <= RdD;
    //extend
    ImmExtE <= ImmExtD;
    //PC
    PCE <= PCD;
    PC_PlusE <= PC_PlusD;
end
    
endmodule
