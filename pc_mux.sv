module pc_mux#(
    parameter PC_WIDTH = 32
)(
    input logic PCSrc,
    input logic [PC_WIDTH-1:0] PC_Plus,
    input logic [PC_WIDTH-1:0] PC_Target,
    output logic [PC_WIDTH-1:0] PC_Next
);
    always_comb begin
        PC_Next = PCSrc ? PC_Target : PC_Plus;
    end

endmodule

