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
    input logic [2:0]                    ALUControlD,
    input logic                     ALUSrcAD,
    input logic                     ALUSrcBD,
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
    output logic [2:0]                   ALUControlE,
    output logic                    ALUSrcAE,
    output logic                    ALUSrcBE,
    output logic                    LdSrcE, 
    output logic                    StSrcE, 
    output logic                    JalSrcE,
    // regfile output 
    output logic[DATA_WIDTH-1:0]     RD1E,
    output logic[DATA_WIDTH-1:0]     RD2E,
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
    MemWriteE <= MemWriteD;
    JumpE <= JumpD;
    BranchE <= BranchD;
    ALUControlE <= ALUControlD;
    ALUSrcAE <= ALUSrcAD;
    ALUSrcBE <= ALUSrcBD;
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
