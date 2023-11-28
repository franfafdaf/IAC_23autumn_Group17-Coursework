module pc_top#(
    parameter PC_WIDTH = 32
)(
    input logic                 clk,
    input logic                 rst,
    input logic                 PCSrc,
    input logic [PC_WIDTH-1:0]  ImmExt,
    output logic [PC_WIDTH-1:0] PC_Plus,
    output logic [PC_WIDTH-1:0] PC
);

    logic [PC_WIDTH-1:0] PC_Target;
    logic [PC_WIDTH-1:0] PC_Next;


    assign  PC_Plus = PC + 4;
    assign  PC_Target = PC + ImmExt;
    assign  PC_Next = PCSrc ? PC_Target : PC_Plus;

    always_ff @(posedge clk or posedge rst)begin
        if (rst) PC <= 0;
        else PC <= PC_Next;
    end

endmodule
