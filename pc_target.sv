module pc_target#(
    parameter PC_WIDTH = 32,
    parameter DATA_WIDTH = 32
)(
    input logic [PC_WIDTH-1:0] PC,
    input logic [DATA_WIDTH-1:0] ImmExt,
    output logic [PC_WIDTH-1:0] PC_target
);

    always_comb begin
        PC_target = PC + ImmExt;
    end

endmodule
