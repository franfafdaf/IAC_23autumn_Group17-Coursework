module sign_extend #(
    parameter INSTR_WIDTH = 32
)(
    input logic [1:0] ImmSrc,                   
    input logic [INSTR_WIDTH-1:0] instr,       
    output logic [INSTR_WIDTH-1:0] ImmExt         
);

    always_comb begin
        case (ImmSrc)
            2'b00: // I-type
                ImmExt = {{20{instr[31]}}, instr[31:20]};
            2'b01: // S-type
                ImmExt = {{20{instr[31]}}, instr[31:25], instr[11:7]};
            2'b10: // B-type
                ImmExt = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
            2'b11: // J-type
                ImmExt = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
            default: 
                ImmExt = {{20{instr[31]}}, instr[31:20]};
        endcase
    end

endmodule
