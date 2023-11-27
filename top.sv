module top(
    input logic             clk, 
    // input logic trigger, 
    input logic             reset, 
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
    logic               ResultSrc;
    logic               MemWrite;
    logic               ALUSrcA;
    logic               ALUSrcB;
    logic [2:0]         ImmSrc;
    logic               RegWrite;
    logic [2:0]         ALUControl;
    logic               LdSrc;
    logic               StSrc;
    logic [4:0]         A1;
    logic [4:0]         A2;
    logic [4:0]         A3;
    logic [31:0]        Result;
    logic [31:0]        WriteData;
    logic [24:0]        Imm;
    logic [31:0]        ALUResult;


pc_top my_pc_top(
    .clk(clk),
    .rst(reset),
    .PCSrc(PCSrc),
    .ImmExt(ImmExt),
    .PC(PC)
);

instr_mem my_instr_mem(
    .A(A),
    .RD(Instr)
);

control_unit my_control_unit(
    .opcode(opcode),
    .funct3(funct3),
    .func75(func75),
    .Zero(Zero),
    .PCSrc(PCSrc),
    .ResultSrc(ResultSrc),
    .MemWrite(MemWrite),
    .ALUSrcA(ALUSrcA),
    .ALUSrcB(ALUSrcB),
    .ImmSrc(ImmSrc),
    .RegWrite(RegWrite),
    .ALUControl(ALUControl),
    .LdSrc(LdSrc),
    .StSrc(StSrc)
);

extend my_extend(
    .ImmSrc(ImmSrc),
    .Imm(Imm),
    .ImmExt(ImmExt)
);

alu_top my_alu_top(
    .clk(clk),
    .A1(A1),
    .A2(A2),
    .A3(A3),
    .WD3(Result),
    .ImmExt(ImmExt),
    .ALUSrcB(ALUSrcB),
    .ALUControl(ALUControl),
    .PC(PC),
    .ALUSrcA(ALUSrcA),
    .ALUResult(ALUResult), 
    .RD2(WriteData),
    .Zero(Zero),
    .a0(a0)
);

data_memory my_data_memory(
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
