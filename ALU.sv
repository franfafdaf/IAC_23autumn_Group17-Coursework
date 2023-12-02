module ALU(
    input logic [31:0]      PCE,
    input logic [31:0]      RD1E, 
    input logic [31:0]      RD2E, 
    input logic [31:0]      ImmExtE,
    input logic [2:0]       ALUControlE,
    input logic             ALUSrcAE,
    input logic             ALUSrcBE,
    
    output logic [31:0]     ALUResult,     
    output logic            ZeroE
);

logic [31:0]      SrcA;
logic [31:0]      SrcB;

assign SrcA = ALUSrcAE ? PCE : RD1E;
assign SrcB = ALUSrcBE ? ImmExtE : RD2E;


always_comb begin
    
    ALUResult = 32'b0;
    ZeroE = 1'b0;

    if (ALUControlE == 3'b000) begin 
        ALUResult = SrcA + SrcB;//add
    end
    
    if (ALUControlE == 3'b001) begin
        ALUResult = SrcA - SrcB ;//subtract
    end

    if (ALUControlE == 3'b010) begin 
        ALUResult = SrcA & SrcB;//and
    end

    if (ALUControlE == 3'b011) begin 
        ALUResult = SrcA | SrcB;//or
    end

    if (ALUControlE == 3'b100) begin 
        ALUResult = SrcA >> SrcB[4:0];//shift right
    end

    if (ALUControlE == 3'b101) begin 
        ALUResult = SrcA ^ SrcB;//xor
    end
    
    if (ALUControlE == 3'b110) begin 
        ALUResult = SrcB;//select SrcB
    end

    if (ALUControlE == 3'b111) begin 
        ALUResult = SrcA << SrcB[4:0];//shift left
    end

    ZeroE = (ALUResult == 32'b0);
end

endmodule
