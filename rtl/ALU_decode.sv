module ALU_decode(
    input logic         op5, 
    input logic [2:0]   funct3, 
    input logic         func75, 
    input logic [1:0]   ALUOp,
    output logic [2:0]  ALUControl
);

logic [1:0] decode;


assign decode = {op5, func75};

always_comb begin
    if (ALUOp == 2'b00) begin                               //I-type & S-type
        if (funct3 == 3'b001) ALUControl = 3'b111;          //shift to left
        else if (funct3 == 3'b101) ALUControl = 3'b100;     //shift to right
        else if (funct3 == 3'b111) ALUControl = 3'b010;     //and
        else ALUControl = 3'b000;                           //add
    end 
    else if (ALUOp == 2'b01) ALUControl = 3'b001;           //sub for B-type
    else if (ALUOp == 2'b10) begin                          //R-type
        if (funct3 == 3'b000) begin
            if (decode == 2'b00) ALUControl = 3'b000;       //add
            else if (decode == 2'b01) ALUControl = 3'b000;  //add
            else if (decode == 2'b10) ALUControl = 3'b000;  //add
            else  ALUControl = 3'b001;                      //sub， decode == 2'b11
        end
        else if (funct3 == 3'b100) ALUControl = 3'b101;     //xor
        else if (funct3 == 3'b110) ALUControl = 3'b011;     //or
        else if (funct3 == 3'b111) ALUControl = 3'b010;     //and
        else ALUControl = 3'b000;
    end
    else if (ALUOp == 2'b11) begin                          //U-type
        if (op5 == 0) ALUControl = 3'b000;                  // add
        else  ALUControl = 3'b110;                          // extract out SrcB, op5 == 1
    end
    else ALUControl = 3'b000;
end

endmodule
