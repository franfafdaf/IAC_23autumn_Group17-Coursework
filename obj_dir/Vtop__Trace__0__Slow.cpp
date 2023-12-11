// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+206,"clk", false,-1);
    tracep->declBit(c+207,"rst", false,-1);
    tracep->declBus(c+208,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+206,"clk", false,-1);
    tracep->declBit(c+207,"rst", false,-1);
    tracep->declBus(c+208,"a0", false,-1, 31,0);
    tracep->declBit(c+3,"PCSrcE", false,-1);
    tracep->declBus(c+202,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+4,"PC_PlusD", false,-1, 31,0);
    tracep->declBus(c+5,"PC_PlusE", false,-1, 31,0);
    tracep->declBus(c+6,"PC_PlusM", false,-1, 31,0);
    tracep->declBus(c+7,"PC_PlusW", false,-1, 31,0);
    tracep->declBus(c+8,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+9,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+203,"PCF", false,-1, 31,0);
    tracep->declBus(c+10,"PCD", false,-1, 31,0);
    tracep->declBus(c+11,"PCE", false,-1, 31,0);
    tracep->declBus(c+12,"InstrD", false,-1, 31,0);
    tracep->declBus(c+13,"opcode", false,-1, 6,0);
    tracep->declBus(c+14,"funct3", false,-1, 2,0);
    tracep->declBus(c+15,"funct3E", false,-1, 2,0);
    tracep->declBit(c+16,"func75", false,-1);
    tracep->declBit(c+17,"ZeroE", false,-1);
    tracep->declBus(c+18,"ResultSrcD", false,-1, 1,0);
    tracep->declBus(c+19,"ResultSrcE", false,-1, 1,0);
    tracep->declBus(c+20,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+21,"ResultSrcW", false,-1, 1,0);
    tracep->declBit(c+22,"MemWriteD", false,-1);
    tracep->declBit(c+23,"MemWriteE", false,-1);
    tracep->declBit(c+24,"MemWriteM", false,-1);
    tracep->declBit(c+25,"ALUSrcAD", false,-1);
    tracep->declBit(c+26,"ALUSrcBD", false,-1);
    tracep->declBit(c+27,"ALUSrcAE", false,-1);
    tracep->declBit(c+28,"ALUSrcBE", false,-1);
    tracep->declBus(c+29,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+30,"RegWriteD", false,-1);
    tracep->declBit(c+31,"RegWriteE", false,-1);
    tracep->declBit(c+32,"RegWriteM", false,-1);
    tracep->declBit(c+33,"RegWriteW", false,-1);
    tracep->declBus(c+34,"ALUControlD", false,-1, 2,0);
    tracep->declBus(c+35,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+36,"LdSrcD", false,-1);
    tracep->declBit(c+37,"StSrcD", false,-1);
    tracep->declBit(c+38,"JalSrcD", false,-1);
    tracep->declBit(c+39,"LdSrcE", false,-1);
    tracep->declBit(c+40,"StSrcE", false,-1);
    tracep->declBit(c+41,"JalSrcE", false,-1);
    tracep->declBit(c+42,"LdSrcM", false,-1);
    tracep->declBit(c+43,"StSrcM", false,-1);
    tracep->declBus(c+204,"A", false,-1, 11,0);
    tracep->declBus(c+44,"A1", false,-1, 4,0);
    tracep->declBus(c+45,"A2", false,-1, 4,0);
    tracep->declBus(c+205,"RDi", false,-1, 31,0);
    tracep->declBus(c+46,"RD", false,-1, 31,0);
    tracep->declBus(c+209,"RD1", false,-1, 31,0);
    tracep->declBus(c+47,"RD1E", false,-1, 31,0);
    tracep->declBus(c+210,"RD2", false,-1, 31,0);
    tracep->declBus(c+48,"RD2E", false,-1, 31,0);
    tracep->declBus(c+49,"ResultW", false,-1, 31,0);
    tracep->declBus(c+50,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+51,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+52,"Imm", false,-1, 24,0);
    tracep->declBus(c+53,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+54,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+55,"ALUResultW", false,-1, 31,0);
    tracep->declBit(c+56,"JumpD", false,-1);
    tracep->declBit(c+57,"JumpE", false,-1);
    tracep->declBit(c+58,"BranchD", false,-1);
    tracep->declBit(c+59,"BranchE", false,-1);
    tracep->declBus(c+60,"RdD", false,-1, 4,0);
    tracep->declBus(c+61,"RdE", false,-1, 4,0);
    tracep->declBus(c+62,"RdM", false,-1, 4,0);
    tracep->declBus(c+63,"RdW", false,-1, 4,0);
    tracep->declBus(c+44,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+45,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+64,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+65,"Rs2E", false,-1, 4,0);
    tracep->declBit(c+66,"StallD", false,-1);
    tracep->declBit(c+66,"StallF", false,-1);
    tracep->declBit(c+67,"FlushE", false,-1);
    tracep->declBit(c+3,"FlushD", false,-1);
    tracep->declBus(c+68,"SrcA0E", false,-1, 31,0);
    tracep->declBus(c+69,"SrcB0E", false,-1, 31,0);
    tracep->declBit(c+70,"hit", false,-1);
    tracep->declBus(c+50,"CtoMData", false,-1, 31,0);
    tracep->declBus(c+54,"CtoMAdress", false,-1, 31,0);
    tracep->declBus(c+71,"memOut", false,-1, 31,0);
    tracep->declBus(c+72,"cacheOut", false,-1, 31,0);
    tracep->pushNamePrefix("PCSrcE_decode ");
    tracep->declBit(c+17,"ZeroE", false,-1);
    tracep->declBit(c+59,"BranchE", false,-1);
    tracep->declBit(c+57,"JumpE", false,-1);
    tracep->declBus(c+15,"funct3E", false,-1, 2,0);
    tracep->declBit(c+3,"PCSrcE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage1 ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+206,"clk", false,-1);
    tracep->declBit(c+66,"en", false,-1);
    tracep->declBit(c+3,"clr", false,-1);
    tracep->declBus(c+205,"RDi", false,-1, 31,0);
    tracep->declBus(c+203,"PCF", false,-1, 31,0);
    tracep->declBus(c+202,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+12,"InstrD", false,-1, 31,0);
    tracep->declBus(c+10,"PCD", false,-1, 31,0);
    tracep->declBus(c+4,"PC_PlusD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage2 ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+206,"clk", false,-1);
    tracep->declBit(c+67,"clr", false,-1);
    tracep->declBit(c+30,"RegWriteD", false,-1);
    tracep->declBus(c+18,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+22,"MemWriteD", false,-1);
    tracep->declBit(c+56,"JumpD", false,-1);
    tracep->declBit(c+58,"BranchD", false,-1);
    tracep->declBus(c+34,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+25,"ALUSrcAD", false,-1);
    tracep->declBit(c+26,"ALUSrcBD", false,-1);
    tracep->declBit(c+36,"LdSrcD", false,-1);
    tracep->declBit(c+37,"StSrcD", false,-1);
    tracep->declBit(c+38,"JalSrcD", false,-1);
    tracep->declBus(c+209,"RD1", false,-1, 31,0);
    tracep->declBus(c+210,"RD2", false,-1, 31,0);
    tracep->declBus(c+60,"RdD", false,-1, 4,0);
    tracep->declBus(c+8,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+10,"PCD", false,-1, 31,0);
    tracep->declBus(c+4,"PC_PlusD", false,-1, 31,0);
    tracep->declBus(c+44,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+45,"Rs2D", false,-1, 4,0);
    tracep->declBit(c+31,"RegWriteE", false,-1);
    tracep->declBus(c+19,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+23,"MemWriteE", false,-1);
    tracep->declBit(c+57,"JumpE", false,-1);
    tracep->declBit(c+59,"BranchE", false,-1);
    tracep->declBus(c+35,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+27,"ALUSrcAE", false,-1);
    tracep->declBit(c+28,"ALUSrcBE", false,-1);
    tracep->declBit(c+39,"LdSrcE", false,-1);
    tracep->declBit(c+40,"StSrcE", false,-1);
    tracep->declBit(c+41,"JalSrcE", false,-1);
    tracep->declBus(c+47,"RD1E", false,-1, 31,0);
    tracep->declBus(c+48,"RD2E", false,-1, 31,0);
    tracep->declBus(c+61,"RdE", false,-1, 4,0);
    tracep->declBus(c+9,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+11,"PCE", false,-1, 31,0);
    tracep->declBus(c+5,"PC_PlusE", false,-1, 31,0);
    tracep->declBus(c+14,"funct3", false,-1, 2,0);
    tracep->declBus(c+15,"funct3E", false,-1, 2,0);
    tracep->declBus(c+64,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+65,"Rs2E", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage3 ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+206,"clk", false,-1);
    tracep->declBit(c+31,"RegWriteE", false,-1);
    tracep->declBus(c+19,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+23,"MemWriteE", false,-1);
    tracep->declBit(c+40,"StSrcE", false,-1);
    tracep->declBit(c+39,"LdSrcE", false,-1);
    tracep->declBus(c+53,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+69,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+61,"RdE", false,-1, 4,0);
    tracep->declBus(c+5,"PC_PlusE", false,-1, 31,0);
    tracep->declBit(c+32,"RegWriteM", false,-1);
    tracep->declBus(c+20,"ResultSrcM", false,-1, 1,0);
    tracep->declBit(c+24,"MemWriteM", false,-1);
    tracep->declBit(c+43,"StSrcM", false,-1);
    tracep->declBit(c+42,"LdSrcM", false,-1);
    tracep->declBus(c+54,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+50,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+62,"RdM", false,-1, 4,0);
    tracep->declBus(c+6,"PC_PlusM", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage4 ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+206,"clk", false,-1);
    tracep->declBit(c+32,"RegWriteM", false,-1);
    tracep->declBus(c+20,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+54,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+46,"RD", false,-1, 31,0);
    tracep->declBus(c+62,"RdM", false,-1, 4,0);
    tracep->declBus(c+6,"PC_PlusM", false,-1, 31,0);
    tracep->declBit(c+33,"RegWriteW", false,-1);
    tracep->declBus(c+21,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+55,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+51,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+63,"RdW", false,-1, 4,0);
    tracep->declBus(c+7,"PC_PlusW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DataMux ");
    tracep->declBus(c+21,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+55,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+51,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+7,"PC_PlusW", false,-1, 31,0);
    tracep->declBus(c+49,"ResultW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_InstrD_mem ");
    tracep->declBus(c+213,"A_length", false,-1, 31,0);
    tracep->declBus(c+214,"D_length", false,-1, 31,0);
    tracep->declBus(c+204,"A", false,-1, 11,0);
    tracep->declBus(c+205,"RDi", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_alu ");
    tracep->declBus(c+11,"PCE", false,-1, 31,0);
    tracep->declBus(c+68,"SrcA0E", false,-1, 31,0);
    tracep->declBus(c+69,"SrcB0E", false,-1, 31,0);
    tracep->declBus(c+9,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+35,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+27,"ALUSrcAE", false,-1);
    tracep->declBit(c+28,"ALUSrcBE", false,-1);
    tracep->declBus(c+53,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+17,"ZeroE", false,-1);
    tracep->declBus(c+73,"SrcAE", false,-1, 31,0);
    tracep->declBus(c+74,"SrcBE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_cache ");
    tracep->declBus(c+215,"Tag_Width", false,-1, 31,0);
    tracep->declBus(c+216,"Set_Width", false,-1, 31,0);
    tracep->declBus(c+217,"BlockOffset", false,-1, 31,0);
    tracep->declBus(c+217,"wayNum", false,-1, 31,0);
    tracep->declBus(c+212,"Data_Width", false,-1, 31,0);
    tracep->declBit(c+206,"clk", false,-1);
    tracep->declBus(c+54,"addressIn", false,-1, 31,0);
    tracep->declBus(c+50,"dataIn", false,-1, 31,0);
    tracep->declBit(c+24,"we", false,-1);
    tracep->declBit(c+43,"StSrcM", false,-1);
    tracep->declBit(c+42,"LdSrcM", false,-1);
    tracep->declBus(c+72,"dataOut", false,-1, 31,0);
    tracep->declBit(c+70,"hit", false,-1);
    tracep->declBus(c+50,"MdataOut", false,-1, 31,0);
    tracep->declBus(c+54,"MaddressOut", false,-1, 31,0);
    tracep->declBus(c+75,"valid", false,-1, 15,0);
    tracep->declArray(c+76,"tag", false,-1, 399,0);
    tracep->declArray(c+89,"data", false,-1, 2047,0);
    tracep->declBus(c+153,"lru", false,-1, 7,0);
    tracep->declBit(c+154,"selectedWay", false,-1);
    tracep->declArray(c+155,"selectedData", false,-1, 127,0);
    tracep->declBus(c+159,"inputTag", false,-1, 24,0);
    tracep->declBus(c+160,"inputSet", false,-1, 2,0);
    tracep->declBus(c+161,"inputBlock", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+217,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_cachemux ");
    tracep->declBus(c+212,"Data_Width", false,-1, 31,0);
    tracep->declBit(c+70,"hit", false,-1);
    tracep->declBus(c+72,"cacheInput", false,-1, 31,0);
    tracep->declBus(c+71,"memInput", false,-1, 31,0);
    tracep->declBus(c+46,"Moutput", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_control_unit ");
    tracep->declBus(c+13,"opcode", false,-1, 6,0);
    tracep->declBus(c+14,"funct3", false,-1, 2,0);
    tracep->declBit(c+16,"func75", false,-1);
    tracep->declBit(c+30,"RegWriteD", false,-1);
    tracep->declBus(c+18,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+22,"MemWriteD", false,-1);
    tracep->declBit(c+56,"JumpD", false,-1);
    tracep->declBit(c+58,"BranchD", false,-1);
    tracep->declBus(c+34,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+25,"ALUSrcAD", false,-1);
    tracep->declBit(c+26,"ALUSrcBD", false,-1);
    tracep->declBus(c+29,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+36,"LdSrcD", false,-1);
    tracep->declBit(c+37,"StSrcD", false,-1);
    tracep->declBit(c+38,"JalSrcD", false,-1);
    tracep->declBus(c+162,"ALUOpD", false,-1, 1,0);
    tracep->declBus(c+163,"ALUDecode", false,-1, 1,0);
    tracep->declBit(c+164,"op5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_data_memory ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+206,"clk", false,-1);
    tracep->declBit(c+24,"WE", false,-1);
    tracep->declBit(c+43,"StSrcM", false,-1);
    tracep->declBit(c+42,"LdSrcM", false,-1);
    tracep->declBus(c+54,"A", false,-1, 31,0);
    tracep->declBus(c+50,"WD", false,-1, 31,0);
    tracep->declBus(c+71,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_extend ");
    tracep->declBus(c+29,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+52,"Imm", false,-1, 31,7);
    tracep->declBus(c+8,"ImmExtD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_hazardunit ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"RD1E", false,-1, 31,0);
    tracep->declBus(c+48,"RD2E", false,-1, 31,0);
    tracep->declBus(c+64,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+65,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+62,"RdM", false,-1, 4,0);
    tracep->declBus(c+63,"RdW", false,-1, 4,0);
    tracep->declBit(c+32,"RegWriteM", false,-1);
    tracep->declBit(c+33,"RegWriteW", false,-1);
    tracep->declBus(c+49,"ResultW", false,-1, 31,0);
    tracep->declBus(c+54,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+68,"SrcA0E", false,-1, 31,0);
    tracep->declBus(c+69,"SrcB0E", false,-1, 31,0);
    tracep->declBus(c+44,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+45,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+61,"RdE", false,-1, 4,0);
    tracep->declBus(c+19,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+66,"StallF", false,-1);
    tracep->declBit(c+66,"StallD", false,-1);
    tracep->declBit(c+67,"FlushE", false,-1);
    tracep->declBit(c+3,"PCSrcE", false,-1);
    tracep->declBit(c+3,"FlushD", false,-1);
    tracep->declBus(c+165,"ForwardAE", false,-1, 1,0);
    tracep->declBus(c+166,"ForwardBE", false,-1, 1,0);
    tracep->declBit(c+167,"ResultSrcE0", false,-1);
    tracep->declBit(c+66,"lwStall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_pc ");
    tracep->declBus(c+212,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+206,"clk", false,-1);
    tracep->declBit(c+207,"rst", false,-1);
    tracep->declBit(c+66,"en", false,-1);
    tracep->declBit(c+3,"PCSrcE", false,-1);
    tracep->declBit(c+41,"JalSrcE", false,-1);
    tracep->declBus(c+9,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+11,"PCE", false,-1, 31,0);
    tracep->declBus(c+47,"RD1E", false,-1, 31,0);
    tracep->declBus(c+202,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+203,"PCF", false,-1, 31,0);
    tracep->declBus(c+168,"PC_TargetE", false,-1, 31,0);
    tracep->declBus(c+169,"PC_Jump", false,-1, 31,0);
    tracep->declBus(c+211,"PCF_Next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_reg_file ");
    tracep->declBit(c+206,"clk", false,-1);
    tracep->declBus(c+44,"A1", false,-1, 4,0);
    tracep->declBus(c+45,"A2", false,-1, 4,0);
    tracep->declBus(c+63,"A3", false,-1, 4,0);
    tracep->declBus(c+49,"WD3", false,-1, 31,0);
    tracep->declBit(c+33,"WE3", false,-1);
    tracep->declBus(c+209,"RD1", false,-1, 31,0);
    tracep->declBus(c+210,"RD2", false,-1, 31,0);
    tracep->declBus(c+208,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+170+i*1,"register", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__my_cache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__my_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__PCSrcE));
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__PC_PlusD),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__PC_PlusE),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__PC_PlusM),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__PC_PlusW),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__ImmExtD),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__ImmExtE),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__PCD),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__PCE),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__InstrD),32);
    bufp->fullCData(oldp+13,((0x7fU & vlSelf->top__DOT__InstrD)),7);
    bufp->fullCData(oldp+14,((7U & (vlSelf->top__DOT__InstrD 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__funct3E),3);
    bufp->fullBit(oldp+16,((1U & (vlSelf->top__DOT__InstrD 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__ZeroE));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__ResultSrcD),2);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__ResultSrcE),2);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__ResultSrcM),2);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__ResultSrcW),2);
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__MemWriteD));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__MemWriteE));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__MemWriteM));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__ALUSrcAD));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__ALUSrcBD));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__ALUSrcAE));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__ALUSrcBE));
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__ImmSrcD),3);
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__RegWriteD));
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__RegWriteE));
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__RegWriteM));
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__RegWriteW));
    bufp->fullCData(oldp+34,(((0U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                               ? ((1U == (7U & (vlSelf->top__DOT__InstrD 
                                                >> 0xcU)))
                                   ? 7U : ((5U == (7U 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 0xcU)))
                                            ? 4U : 
                                           ((7U == 
                                             (7U & 
                                              (vlSelf->top__DOT__InstrD 
                                               >> 0xcU)))
                                             ? 2U : 0U)))
                               : ((1U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                   ? 1U : ((2U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                            ? ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__InstrD 
                                                    >> 0xcU)))
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                      ? 0U
                                                      : 1U)))
                                                : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__InstrD 
                                                        >> 0xcU)))
                                                    ? 5U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 0xcU)))
                                                     ? 3U
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__InstrD 
                                                          >> 0xcU)))
                                                      ? 2U
                                                      : 0U))))
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 6U
                                                    : 0U)
                                                : 0U))))),3);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__ALUControlE),3);
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__LdSrcD));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__StSrcD));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__JalSrcD));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__LdSrcE));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__StSrcE));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__JalSrcE));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__LdSrcM));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__StSrcM));
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+46,(((IData)(vlSelf->top__DOT__hit)
                               ? vlSelf->top__DOT__cacheOut
                               : ((IData)(vlSelf->top__DOT__LdSrcM)
                                   ? (IData)(vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0)
                                   : ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                       [(0x1ffffU & 
                                         ((IData)(3U) 
                                          + vlSelf->top__DOT__ALUResultM))] 
                                       << 0x18U) | 
                                      ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                        [(0x1ffffU 
                                          & ((IData)(2U) 
                                             + vlSelf->top__DOT__ALUResultM))] 
                                        << 0x10U) | 
                                       ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                         [(0x1ffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->top__DOT__ALUResultM))] 
                                         << 8U) | (IData)(vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0))))))),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__RD1E),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__RD2E),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__ResultW),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__WriteDataM),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__ReadDataW),32);
    bufp->fullIData(oldp+52,((vlSelf->top__DOT__InstrD 
                              >> 7U)),25);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__ALUResult),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__ALUResultM),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__ALUResultW),32);
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__JumpD));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__JumpE));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__BranchD));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__BranchE));
    bufp->fullCData(oldp+60,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 7U))),5);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__RdE),5);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__RdM),5);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__RdW),5);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__Rs1E),5);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__Rs2E),5);
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__StallD));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__FlushE));
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__SrcA0E),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__SrcB0E),32);
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__hit));
    bufp->fullIData(oldp+71,(((IData)(vlSelf->top__DOT__LdSrcM)
                               ? (IData)(vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0)
                               : ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                   [(0x1ffffU & ((IData)(3U) 
                                                 + vlSelf->top__DOT__ALUResultM))] 
                                   << 0x18U) | ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                                 [(0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__ALUResultM))] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->top__DOT__ALUResultM))] 
                                                    << 8U) 
                                                   | (IData)(vlSelf->top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0)))))),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__cacheOut),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__my_alu__DOT__SrcAE),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__my_alu__DOT__SrcBE),32);
    bufp->fullSData(oldp+75,(vlSelf->top__DOT__my_cache__DOT__valid),16);
    bufp->fullWData(oldp+76,(vlSelf->top__DOT__my_cache__DOT__tag),400);
    bufp->fullWData(oldp+89,(vlSelf->top__DOT__my_cache__DOT__data),2048);
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__my_cache__DOT__lru),8);
    bufp->fullBit(oldp+154,(vlSelf->top__DOT__my_cache__DOT__selectedWay));
    bufp->fullWData(oldp+155,(vlSelf->top__DOT__my_cache__DOT__selectedData),128);
    bufp->fullIData(oldp+159,((vlSelf->top__DOT__ALUResultM 
                               >> 7U)),25);
    bufp->fullCData(oldp+160,((7U & (vlSelf->top__DOT__ALUResultM 
                                     >> 4U))),3);
    bufp->fullCData(oldp+161,((3U & (vlSelf->top__DOT__ALUResultM 
                                     >> 2U))),2);
    bufp->fullCData(oldp+162,(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD),2);
    bufp->fullCData(oldp+163,(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode),2);
    bufp->fullBit(oldp+164,((1U & (vlSelf->top__DOT__InstrD 
                                   >> 5U))));
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE),2);
    bufp->fullCData(oldp+166,(vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE),2);
    bufp->fullBit(oldp+167,((1U & (IData)(vlSelf->top__DOT__ResultSrcE))));
    bufp->fullIData(oldp+168,(((IData)(vlSelf->top__DOT__JalSrcE)
                                ? (vlSelf->top__DOT__ImmExtE 
                                   + vlSelf->top__DOT__PCE)
                                : vlSelf->top__DOT__RD1E)),32);
    bufp->fullIData(oldp+169,((vlSelf->top__DOT__ImmExtE 
                               + vlSelf->top__DOT__PCE)),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__my_reg_file__DOT__register[0]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__my_reg_file__DOT__register[1]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__my_reg_file__DOT__register[2]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__my_reg_file__DOT__register[3]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__my_reg_file__DOT__register[4]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__my_reg_file__DOT__register[5]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__my_reg_file__DOT__register[6]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__my_reg_file__DOT__register[7]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__my_reg_file__DOT__register[8]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__my_reg_file__DOT__register[9]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__my_reg_file__DOT__register[10]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__my_reg_file__DOT__register[11]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__my_reg_file__DOT__register[12]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__my_reg_file__DOT__register[13]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__my_reg_file__DOT__register[14]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__my_reg_file__DOT__register[15]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__my_reg_file__DOT__register[16]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__my_reg_file__DOT__register[17]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__my_reg_file__DOT__register[18]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__my_reg_file__DOT__register[19]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__my_reg_file__DOT__register[20]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__my_reg_file__DOT__register[21]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__my_reg_file__DOT__register[22]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__my_reg_file__DOT__register[23]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__my_reg_file__DOT__register[24]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__my_reg_file__DOT__register[25]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__my_reg_file__DOT__register[26]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__my_reg_file__DOT__register[27]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__my_reg_file__DOT__register[28]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__my_reg_file__DOT__register[29]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__my_reg_file__DOT__register[30]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__my_reg_file__DOT__register[31]),32);
    bufp->fullIData(oldp+202,(((IData)(4U) + vlSelf->top__DOT__PCF)),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__PCF),32);
    bufp->fullSData(oldp+204,((0xfffU & vlSelf->top__DOT__PCF)),12);
    bufp->fullIData(oldp+205,(((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                [(0xfffU & ((IData)(3U) 
                                            + vlSelf->top__DOT__PCF))] 
                                << 0x18U) | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->top__DOT__PCF))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                 [(0xfffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__PCF))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                [(0xfffU 
                                                  & vlSelf->top__DOT__PCF)])))),32);
    bufp->fullBit(oldp+206,(vlSelf->clk));
    bufp->fullBit(oldp+207,(vlSelf->rst));
    bufp->fullIData(oldp+208,(vlSelf->a0),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__my_reg_file__DOT__register
                              [(0x1fU & (vlSelf->top__DOT__InstrD 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__my_reg_file__DOT__register
                              [(0x1fU & (vlSelf->top__DOT__InstrD 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+211,(((IData)(vlSelf->top__DOT__PCSrcE)
                                ? ((IData)(vlSelf->top__DOT__JalSrcE)
                                    ? (vlSelf->top__DOT__ImmExtE 
                                       + vlSelf->top__DOT__PCE)
                                    : vlSelf->top__DOT__RD1E)
                                : ((IData)(4U) + vlSelf->top__DOT__PCF))),32);
    bufp->fullIData(oldp+212,(0x20U),32);
    bufp->fullIData(oldp+213,(0xcU),32);
    bufp->fullIData(oldp+214,(8U),32);
    bufp->fullIData(oldp+215,(0x19U),32);
    bufp->fullIData(oldp+216,(3U),32);
    bufp->fullIData(oldp+217,(2U),32);
}
