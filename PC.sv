
module PC#(
    parameter PC_WIDTH = 32
)(
    input logic                 clk,
    input logic                 rst,

    input logic                 PCSrcE,
    input logic                 JalSrcE,
    input logic [PC_WIDTH-1:0]  ImmExtE,
    input logic [PC_WIDTH-1:0]  PCE,
    input logic [PC_WIDTH-1:0]  RD1E,

    output logic [PC_WIDTH-1:0] PC_PlusF,
    output logic [PC_WIDTH-1:0] PCF
);

    logic [PC_WIDTH-1:0] PC_TargetE;
    logic [PC_WIDTH-1:0] PC_Jump;
    logic [PC_WIDTH-1:0] PCF_Next;


    assign  PC_PlusF = PCF + 4;
    assign  PC_Jump = PCE + ImmExtE;
    assign  PC_TargetE = JalSrcE ? PC_Jump : RD1E; 
    assign  PCF_Next = PCSrcE ? PC_TargetE : PC_PlusF;

    always_ff @(posedge clk or posedge rst)begin
        if (rst) PCF <= 0;
        else PCF <= PCF_Next;
    end

endmodule
