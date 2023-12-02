module DataMux (
    input logic [1:0]   ResultWSrcW, // 2-bit selector
    input logic [31:0]  ALUResultWW, // ALU ResultW
    input logic [31:0]  ReadDataW,        // Data memory read data
    input logic [31:0]  PCPlusW,    // PC + 4
    output logic [31:0] ResultW    // Output ResultW
);

    always_comb begin
        case (ResultWSrcW)
            2'b00: ResultW = ALUResultWW; 
            2'b01: ResultW = ReadDataW;        
            2'b10: ResultW = PCPlusW;     
            default: ResultW = 32'b0;   
        endcase
    end
endmodule
