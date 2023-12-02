module Stage2#(
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
    input logic [2:0]               ImmSrcD, 
    input logic                     LdSrcD, 
    input logic                     StSrcD, 
    input logic                     JalSrcD,
    // regfile input 
    input logic[DATA_WIDTH-1:0]     RD1,
    input logic[DATA_WIDTH-1:0]     RD2,
    //
    input logic[4:0]                RdD,
    // extend input
    input logic[DATA_WIDTH-1:0]     ImmExtD,
    //PC input
    input logic[DATA_WIDTH-1:0]     PCD,
    input logic[DATA_WIDTH-1:0]     PC_PlusD,

    // control output 
    output logic                    RegWriteE,
    output logic[1:0]               ResultSrcE,
    output logic                    MemWriteE,
    output logic                    JumpE,
    output logic                    BranchE,
    output logic                    ALUControlE,
    output logic                    ALUSrcAE,
    output logic                    ALUSrcBE,
    output logic [2:0]              ImmSrcE, 
    output logic                    LdSrcE, 
    output logic                    StSrcE, 
    output logic                    JalSrcE,
    // regfile output 
    output logic[DATA_WIDTH-1:0]     RD1E,
    output logic[DATA_WIDTH-1:0]     RD2E,
    //rd
    output logic[4:0]                RdE,
    //PC output
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
    ImmSrcE <= ImmSrcD;
    LdSrcE <= LdSrcD;
    StSrcE <= StSrcD;
    JalSrcE <= JalSrcD;
    //regfile
    RD1E <= RD1;
    RD2E<= RD2;
    //rd
    RdE <= RdD;
    //extend
    ImmExtE <= ImmExtD;
    //PC
    PCE <= PCD;
    PC_PlusE <= PC_PlusD;
end
    
endmodule
