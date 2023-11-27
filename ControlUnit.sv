module ControlUnit #(
	parameter DATA_WIDTH = 32
)(
    input logic [11:0]           instruction,
	input logic [6:0]            op,
    input logic [2:0]            function3,
    input logic                  function7,
    input logic                  zero,
    

	output logic            PCSrc,
    output logic            ResultSrc,
	output logic            MemWrite,
	output logic [2:0]      ALUControl,
	output logic            ALUSrc,
	output logic            ImmSrc,
	output logic            RegWrite
);

always_comb begin
	casez (Instr[11:0])
		// I-type instruction
		7'b00?????: begin
			ALUctrl = 1'b0;
			ALUsrc = 1'b1;
			ImmSrc = 1'b0;
			PCsrc = 1'b0;
			RegWrite = 1'b1;
			// for loading memory
			if (Instr[6:0] == 7'b0000011)
				WriteSrc = 1'b1;
			else
				WriteSrc = 1'b0;
		end
		// R-type instruction
		7'b0110011: begin
			ALUctrl = 1'b0;
			ALUsrc = 1'b0;
			ImmSrc = 1'b0;
			PCsrc = 1'b0;
			RegWrite = 1'b1;
			WriteSrc = 1'b0;
		end
		// B-type instruction
		7'b1100011: begin
			ALUctrl = 1'b1; // subtract for comparison
			ALUsrc = 1'b0; // compare two registers
			ImmSrc = 1'b1; // for 13 bit
			PCsrc = !EQ;
			RegWrite = 1'b0;
			WriteSrc = 1'b0;
		end
		default: begin
			ALUctrl = 1'b0;
			ALUsrc = 1'b0;
			ImmSrc = 1'b0;
			PCsrc = 1'b0;
			RegWrite = 1'b0;
			WriteSrc = 1'b0;
		end
	endcase
end

endmodule