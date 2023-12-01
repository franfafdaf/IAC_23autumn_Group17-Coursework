
module pc_top#(
    parameter PC_WIDTH = 32
)(
    input logic                 clk,
    input logic                 rst,
    input logic                 PCSrc,
    input logic                 JalSrc,
    input logic [PC_WIDTH-1:0]  ImmExt,
    input logic [PC_WIDTH-1:0]  RD1,
    output logic [PC_WIDTH-1:0] PC_Plus,
    output logic [PC_WIDTH-1:0] PC
);

    logic [PC_WIDTH-1:0] PC_Target;
    logic [PC_WIDTH-1:0] PC_Jump;
    logic [PC_WIDTH-1:0] PC_Next;


    assign  PC_Plus = PC + 4;
    assign  PC_Jump = PC + ImmExt;
    assign  PC_Target = JalSrc ? PC_Jump : RD1; 
    assign  PC_Next = PCSrc ? PC_Target : PC_Plus;

    always_ff @(posedge clk or posedge rst)begin
        if (rst) PC <= 0;
        else PC <= PC_Next;
    end

endmodule
