module top(
    input logic             clk, 
    input logic             trigger, 
    input logic             rst, 
    output logic [31:0]     a0
);

    logic               PCSrc;
    logic [31:0]        PC_Plus; 
    logic [31:0]        ImmExt; 
    logic [31:0]        PC; 
    logic [31:0]        InstrD;
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


PC my_pc_top(
    .clk(clk),
    .rst(rst),
    // input
    .PCSrcE(PCSrcE),
    .JalSrcE(JalSrcE)
    .ImmExtE(ImmExtE),
    .PCE(PCE),
    .RD1E(RD1E),
    //output
    .PC_PlusF(PC_PlusF),
    .PCF(PCF)

);

InstrDuction my_InstrD_mem(
    .A(PCF),
    .RD(RD)
);

Stage1 Stage1(
    .clk(clk),
    .rst(rst),
    
    .RD(RD),
    .PCF(PCF),
    .PC_PlusF(PC_PlusF),

    .InstrDD(InstrDD),
    .PCD(PCD),
    .PC_PlusD(PC_PlusD)
);

RegFile my_reg_file(
    .clk(clk),
    .A1(A1),
    .A2(A2),
    .A3(A3),
    .WD3(Result),
    .WE3(RegWrite),
    .RD1(RD1),
    .RD2(WriteData),
    .a0(a0), 
    .trigger(trigger)
);

ALU my_alu_top(
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

ControlUnit my_control_unit(
    .opcode(opcode),
    .funct3(funct3),
    .func75(func75),
    .Zero(Zero),
    //outputs
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

Extend my_extend(
    .ImmSrcD(ImmSrcD),
    .Imm(Imm),
    .ImmExtD(ImmExtD)
);

PCSrc_decode PCSrc_decode(
    .Zero(Zero),
    .Branch(Branch),
    .Jump(Jump),
    // .funct3(funct3),
    .PCSrc(PCSrc)
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

// assignment for InstrD_mem
assign A = PC[11:0];
// assignment for control_unit
assign opcode = InstrD[6:0];
assign funct3 = InstrD[14:12];
assign func75 = InstrD[30];
// assignment for reg_file
assign A1 = InstrD[19:15];
assign A2 = InstrD[24:20];
assign A3 = InstrD[11:7];
// assignment for extend
assign Imm = InstrD[31:7];
assign RdD =InstrD[11:7];

endmodule
