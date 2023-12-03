module top(
    input logic             clk, 
    input logic             rst, 
    output logic [31:0]     a0
);

    logic               PCSrc;
    logic [31:0]        PC_Plus; 
    logic [31:0]        ImmExt; 
    logic [31:0]        PC; 
    logic [31:0]        Instr;
    logic [6:0]         opcode;
    logic [2:0]         funct3;
    logic               func75;
    logic               Zero;
    logic [1:0]         ResultSrc;
    logic               MemWrite;
    logic               ALUSrcA;
    logic               ALUSrcB;
    logic [2:0]         ImmSrc;
    logic               RegWrite;
    logic [2:0]         ALUControl;
    logic               LdSrc;  
    logic               StSrc;
    logic               JalSrc;
    logic [11:0]        A;
    logic [4:0]         A1;
    logic [4:0]         A2;
    logic [4:0]         A3;
    logic [31:0]        RD1;
    logic [31:0]        Result;
    logic [31:0]        WriteData;
    logic [31:0]        ReadData;
    logic [24:0]        Imm;
    logic [31:0]        ALUResult;


pc_top my_pc_top(
    .clk(clk),
    .rst(rst),
    .PCSrc(PCSrc),
    .ImmExt(ImmExt),
    .PC_Plus(PC_Plus),
    .PC(PC),
    .RD1(RD1),
    .JalSrc(JalSrc)

);

instr_mem my_instr_mem(
    .A(A),
    .RD(Instr)
);

reg_file my_reg_file(
    .clk(clk),
    .A1(A1),
    .A2(A2),
    .A3(A3),
    .WD3(Result),
    .WE3(RegWrite),
    .RD1(RD1),
    .RD2(WriteData),
    .a0(a0)
);

alu_top my_alu_top(
    .PC(PC),
    .RD1(RD1),
    .RD2(WriteData),
    .ImmExt(ImmExt),
    .ALUControl(ALUControl),
    .ALUSrcA(ALUSrcA),
    .ALUSrcB(ALUSrcB),
    //outputs
    .ALUResult(ALUResult), 
    .Zero(Zero)
);

control_unit my_control_unit(
    .opcode(opcode),
    .funct3(funct3),
    .func75(func75),
    .Zero(Zero),
    //outputs
    .PCSrc(PCSrc),
    .ResultSrc(ResultSrc),
    .MemWrite(MemWrite),
    .ALUControl(ALUControl),
    .ALUSrcA(ALUSrcA),
    .ALUSrcB(ALUSrcB),
    .ImmSrc(ImmSrc),
    .RegWrite(RegWrite),
    .LdSrc(LdSrc),
    .StSrc(StSrc),
    .JalSrc(JalSrc)
);

extend my_extend(
    .ImmSrc(ImmSrc),
    .Imm(Imm),
    .ImmExt(ImmExt)
);

DataMemory my_data_memory(
    .clk(clk),
    .WE(MemWrite),
    .StSrc(StSrc),
    .LdSrc(LdSrc),
    .A(ALUResult),
    .WD(WriteData),
    .RD(ReadData)
);

DataMux my_DataMux(
    .ResultSrc(ResultSrc),
    .ALUResult(ALUResult),
    .RD(ReadData),
    .PCPlus(PC_Plus),
    .Result(Result)
);

// assignment for instr_mem
assign A = PC[11:0];
// assignment for control_unit
assign opcode = Instr[6:0];
assign funct3 = Instr[14:12];
assign func75 = Instr[30];
// assignment for reg_file
assign A1 = Instr[19:15];
assign A2 = Instr[24:20];
assign A3 = Instr[11:7];
// assignment for extend
assign Imm = Instr[31:7];

endmodule
