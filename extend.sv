// This module is managed by Guanxi Lu
module extend(
    input logic [2:0]            ImmSrc, 
    input logic [24:0]           Imm, 
    output logic [31:0]          ImmExt
);

always_comb 
case (ImmSrc)
    3'b000: ImmExt = {{20{Instr[31]}}, Instr[31:20]}; //for I-type, 12-bit signed immediate
    3'b001: ImmExt = {{20{Instr[31]}}, Instr[31:25], Instr[11:7]}; //for S-type. 12-bit signed immediate
    3'b010: ImmExt = {{20{Instr[31]}}, Instr[7], Instr[30:25], Instr[11:8], 1'b0}; //for B-type, 13-bit signed immediate
    3'b011: ImmExt = {{12{Instr[31]}}, Instr[19:12], Instr[20], Instr[30:21], 1'b0}; //for J-type, 21-bit signed immediate
    3'b100: ImmExt = {Instr[31:12], {12{0}}}; //for U-type, fill last 12 bits with 0
    default: ImmExt = 0;

endcase


endmodule
