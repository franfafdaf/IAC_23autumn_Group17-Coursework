// <<<<<<< HEAD
module DataMux (
    input logic [1:0]   ResultSrc, // 2-bit selector
    input logic [31:0]  ALUResult, // ALU result
    input logic [31:0]  RD,        // Data memory read data
    input logic [31:0]  PCPlus,    // PC + 4
    output logic [31:0] Result    // Output result
);

    always_comb begin
        case (ResultSrc)
            2'b00: Result = ALUResult; 
            2'b01: Result = RD;        
            2'b10: Result = PCPlus;     
            default: Result = 32'b0;   
        endcase
    end
endmodule
