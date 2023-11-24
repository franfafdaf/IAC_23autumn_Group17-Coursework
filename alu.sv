module alu(
    input logic [31:0]  SrcA,
    input logic [31:0]  SrcB,
    input logic [2:0] ALUControl,
    output logic [31:0] ALUResult,
);


always_comb begin
    
    ALUResult = 32'b0;

    if (ALUControl == 3'b000) begin 
        ALUResult = SrcA + SrcB;//add
    end
    if (ALUControl == 3'b001) begin 
        ALUResult = SrcA - SrcB;//subtract
    end
    if (ALUControl == 3'b010) begin 
        ALUResult = SrcA & SrcB;//and
    end
    if (ALUControl == 3'b011) begin 
        ALUResult = SrcA | SrcB;//or
    end
    if (ALUControl == 3'b101) begin 
        ALUResult = (SrcA < SrcB) ? 32'b1 : 32'b0;//SLT
    end
end

endmodule