module pc_top#(
    parameter PC_WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic PCSrc,
    input logic [PC_WIDTH-1:0] ImmExt,
    output logic [PC_WIDTH-1:0] PC
);

    logic [PC_WIDTH-1:0] PC_Plus;
    logic [PC_WIDTH-1:0] PC_Target;
    logic [PC_WIDTH-1:0] PCNext;

    always_ff @(posedge clk or posedge rst)begin
        if (rst) PC <= 0;
        else PC <= PCNext;
    end

    pc_mux my_pc_mux(
        .PCSrc(PCSrc),
        .PC_Plus(PC_Plus),
        .PC_Target(PC_Target),
        .PC_Next(PCNext)
    );

    pc_plus my_pc_plus(
        .PC(PC),
        .NextPC(PC_Plus)
    );

    pc_target my_pc_target(
        .PC(PC),
        .ImmExt(ImmExt),
        .PC_target(PC_Target)
    );

endmodule


