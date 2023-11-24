module pc_plus#(
    parameter PC_WIDTH = 32
)(
    input logic [PC_WIDTH-1:0] PC,
    output logic [PC_WIDTH-1:0] NextPC
);

    always_comb begin
        NextPC = PC + 4;
    end

endmodule
