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


PC my_pc(
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

    .InstrD(InstrD),
    .PCD(PCD),
    .PC_PlusD(PC_PlusD)
);

ControlUnit my_control_unit(
    .opcode(opcode),
    .funct3(funct3),
    .func75(func75),
    //outputs
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    .ALUControlD(ALUControlD),
    .ALUSrcAD(ALUSrcAD),
    .ALUSrcBD(ALUSrcBD),
    .ImmSrcD(ImmSrcD),
    .RegWriteD(RegWriteD),
    .LdSrcD(LdSrcD),
    .StSrcD(StSrcD),
    .JalSrcD(JalSrcD)
);

RegFile my_reg_file(
    .clk(clk),
    .A1(A1),
    .A2(A2),
    .A3(RdW),
    .WD3(ResultW),
    .WE3(RegWriteW),
    .RD1(RD1),
    .RD2(RD2),
    
    .a0(a0), 
    .trigger(trigger)
);

Extend my_extend(
    .ImmSrcD(ImmSrcD),
    .Imm(Imm),
    .ImmExtD(ImmExtD)
);

Stage2 Stage2(
    .clk(clk),
    .RegWriteD(RegWriteD),
    .ResultSrcD(ResultSrcD),
    .MemWriteD(MemWriteD),
    .JumpD(JumpD),
    .BranchD(BranchD),
    .ALUControlD(ALUControlD),
    .ALUSrcAD(ALUSrcAD),
    .ALUSrcBD(ALUSrcBD),
    .ImmSrcD(ImmSrcD),
    .LdSrcD(LdSrcD),
    .StSrcD(StSrcD),
    .JalSrcD(JalSrcD),
    .RD1(RD1),
    .RD2(RD2),
    .RdD(RdD),
    .ImmExtD(ImmExtD),
    .PCD(PCD),
    .PC_PlusD(PC_PlusD),
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .JumpE(JumpE),
    .BranchE(BranchE),
    .ALUControlE(ALUControlE),
    .ALUSrcAE(ALUSrcAE),
    .ALUSrcBE(ALUSrcBE),
    .ImmSrcE(ImmSrcE),
    .LdSrcE(LdSrcE),
    .StSrcE(StSrcE),
    .JalSrcE(JalSrcE),
    .RD1E(RD1E),
    .RD2E(RD2E),
    .RdE(RdE),
    .PC_PlusE(PC_PlusE)
);

PCSrc_decode PCSrc_decode(
    .Zero(Zero),
    .Branch(Branch),
    .Jump(Jump),
    // .funct3(funct3),
    .PCSrc(PCSrc)
);

ALU my_alu(
    .PCE(PCE),
    .RD1E(RD1E),
    .RD2E(RD2E),
    .ImmExtE(ImmExtE),
    .ALUControlE(ALUControlE),
    .ALUSrcAE(ALUSrcAE),
    .ALUSrcBE(ALUSrcBE),
    //outputs
    .ALUResultE(ALUResultE), 
    .ZeroE(ZeroE)
);

Stage3 Stage3(
    .clk(clk),
    .RegWriteE(RegWriteE),
    .ResultSrcE(ResultSrcE),
    .MemWriteE(MemWriteE),
    .StSrcE(StSrcE),
    .LdSrcE(LdSrcE),
    .ALUResult(ALUResult),
    .WriteDataE(WriteDataE),
    .RdE(RdE),
    .PC_PlusE(PC_PlusE),

    .RegWriteM(RegWriteM),
    .ResultSrcM(ResultSrcM),
    .MemWriteM(MemWriteM),
    .StSrcM(StSrcM),
    .LdSrcM(LdSrcM),
    .ALUResultM(ALUResultM),
    .WriteDataM(WriteDataM),
    .RdM(RdM),
    .PC_PlusM(PC_PlusM)
);

DataMemory my_data_memory(
    .clk(clk),
    .WE(MemWriteM),
    .StSrcM(StSrcM),
    .LdSrcM(LdSrcM),
    .A(ALUResultM),
    .WD(WriteDataM),
    .RD(ReadDataM)
);

Stage4 Stage4(
    .clk(clk),
    .RegWritM(RegWritM),
    .ResultSrcM(ResultSrcM),
    .ALUResultM(ALUResultM),
    .RD(RD),
    .RdM(RdM),
    .PC_PlusM(PC_PlusM),
    .RegWritW(RegWritW),
    .ResultSrcW(ResultSrcW),
    .ALUResultW(ALUResultW),
    .ReadDataW(ReadDataW),
    .RdW(RdW),
    .PC_PlusW(PC_PlusW)
);

DataMux my_DataMux(
    .ResultSrcW(ResultSrcW),
    .ALUResultW(ALUResultW),
    .ReadDataW(ReadDataW),
    .PC_PlusW(PC_PlusW),
    .ResultW(ResultW)
);

// assignment for Instr_mem
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
