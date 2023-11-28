module alu_top(
    input logic [31:0]      PC,
    input logic [31:0]      RD1, 
    input logic [31:0]      RD2, 
    input logic [31:0]      ImmExt,
    input logic [2:0]       ALUControl,
    input logic             ALUSrcA,
    input logic             ALUSrcB,
    
    output logic [31:0]     ALUResult,     
    output logic            Zero
);

logic [31:0]      SrcA;
logic [31:0]      SrcB;

assign SrcA = ALUSrcA ? PC : RD1;
assign SrcB = ALUSrcB ? ImmExt : RD2;


always_comb begin
    
    ALUResult = 32'b0;
    Zero = 1'b0;

    if (ALUControl == 3'b000) begin 
        ALUResult = SrcA + SrcB;//add
    end
    
    if (ALUControl == 3'b001) begin
        ALUResult = SrcA + (SrcB ^ {32{1'b1}}) + 32'b1  ;//subtract
    end

    if (ALUControl == 3'b010) begin 
        ALUResult = SrcA & SrcB;//and
    end

    if (ALUControl == 3'b011) begin 
        ALUResult = SrcA | SrcB;//or
    end

    // if (ALUControl == 3'b100) begin 
    //     //shift
    // end

    if (ALUControl == 3'b101) begin 
        ALUResult = (SrcA < SrcB) ? 32'b1 : 32'b0;//SLT
    end
    
    if (ALUControl == 3'b110) begin 
        ALUResult = SrcB;//select SrcB
    end

    Zero = (ALUResult == 32'b0);
end

endmodule
