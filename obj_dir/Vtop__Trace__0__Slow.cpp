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
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBus(c+116,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBus(c+116,"a0", false,-1, 31,0);
    tracep->declBit(c+1,"PCSrcE", false,-1);
    tracep->declBus(c+110,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+2,"PC_PlusD", false,-1, 31,0);
    tracep->declBus(c+3,"PC_PlusE", false,-1, 31,0);
    tracep->declBus(c+4,"PC_PlusM", false,-1, 31,0);
    tracep->declBus(c+5,"PC_PlusW", false,-1, 31,0);
    tracep->declBus(c+6,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+7,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+111,"PCF", false,-1, 31,0);
    tracep->declBus(c+8,"PCD", false,-1, 31,0);
    tracep->declBus(c+9,"PCE", false,-1, 31,0);
    tracep->declBus(c+10,"InstrD", false,-1, 31,0);
    tracep->declBus(c+11,"opcode", false,-1, 6,0);
    tracep->declBus(c+12,"funct3", false,-1, 2,0);
    tracep->declBus(c+13,"funct3E", false,-1, 2,0);
    tracep->declBit(c+14,"func75", false,-1);
    tracep->declBit(c+15,"ZeroE", false,-1);
    tracep->declBus(c+16,"ResultSrcD", false,-1, 1,0);
    tracep->declBus(c+17,"ResultSrcE", false,-1, 1,0);
    tracep->declBus(c+18,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+19,"ResultSrcW", false,-1, 1,0);
    tracep->declBit(c+20,"MemWriteD", false,-1);
    tracep->declBit(c+21,"MemWriteE", false,-1);
    tracep->declBit(c+22,"MemWriteM", false,-1);
    tracep->declBit(c+23,"ALUSrcAD", false,-1);
    tracep->declBit(c+24,"ALUSrcBD", false,-1);
    tracep->declBit(c+25,"ALUSrcAE", false,-1);
    tracep->declBit(c+26,"ALUSrcBE", false,-1);
    tracep->declBus(c+27,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+28,"RegWriteD", false,-1);
    tracep->declBit(c+29,"RegWriteE", false,-1);
    tracep->declBit(c+30,"RegWriteM", false,-1);
    tracep->declBit(c+31,"RegWriteW", false,-1);
    tracep->declBus(c+32,"ALUControlD", false,-1, 2,0);
    tracep->declBus(c+33,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+34,"LdSrcD", false,-1);
    tracep->declBit(c+35,"StSrcD", false,-1);
    tracep->declBit(c+36,"JalSrcD", false,-1);
    tracep->declBit(c+37,"LdSrcE", false,-1);
    tracep->declBit(c+38,"StSrcE", false,-1);
    tracep->declBit(c+39,"JalSrcE", false,-1);
    tracep->declBit(c+40,"LdSrcM", false,-1);
    tracep->declBit(c+41,"StSrcM", false,-1);
    tracep->declBus(c+112,"A", false,-1, 11,0);
    tracep->declBus(c+42,"A1", false,-1, 4,0);
    tracep->declBus(c+43,"A2", false,-1, 4,0);
    tracep->declBus(c+113,"RDi", false,-1, 31,0);
    tracep->declBus(c+44,"RD", false,-1, 31,0);
    tracep->declBus(c+117,"RD1", false,-1, 31,0);
    tracep->declBus(c+45,"RD1E", false,-1, 31,0);
    tracep->declBus(c+118,"RD2", false,-1, 31,0);
    tracep->declBus(c+46,"RD2E", false,-1, 31,0);
    tracep->declBus(c+47,"ResultW", false,-1, 31,0);
    tracep->declBus(c+48,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+49,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+50,"Imm", false,-1, 24,0);
    tracep->declBus(c+51,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+52,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+53,"ALUResultW", false,-1, 31,0);
    tracep->declBit(c+54,"JumpD", false,-1);
    tracep->declBit(c+55,"JumpE", false,-1);
    tracep->declBit(c+56,"BranchD", false,-1);
    tracep->declBit(c+57,"BranchE", false,-1);
    tracep->declBus(c+58,"RdD", false,-1, 4,0);
    tracep->declBus(c+59,"RdE", false,-1, 4,0);
    tracep->declBus(c+60,"RdM", false,-1, 4,0);
    tracep->declBus(c+61,"RdW", false,-1, 4,0);
    tracep->declBus(c+42,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+43,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+62,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+63,"Rs2E", false,-1, 4,0);
    tracep->declBit(c+64,"StallD", false,-1);
    tracep->declBit(c+64,"StallF", false,-1);
    tracep->declBit(c+65,"FlushE", false,-1);
    tracep->declBit(c+1,"FlushD", false,-1);
    tracep->declBus(c+66,"SrcA0E", false,-1, 31,0);
    tracep->declBus(c+67,"SrcB0E", false,-1, 31,0);
    tracep->pushNamePrefix("PCSrcE_decode ");
    tracep->declBit(c+15,"ZeroE", false,-1);
    tracep->declBit(c+57,"BranchE", false,-1);
    tracep->declBit(c+55,"JumpE", false,-1);
    tracep->declBus(c+13,"funct3E", false,-1, 2,0);
    tracep->declBit(c+1,"PCSrcE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage1 ");
    tracep->declBus(c+120,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+64,"en", false,-1);
    tracep->declBus(c+113,"RDi", false,-1, 31,0);
    tracep->declBus(c+111,"PCF", false,-1, 31,0);
    tracep->declBus(c+110,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+10,"InstrD", false,-1, 31,0);
    tracep->declBus(c+8,"PCD", false,-1, 31,0);
    tracep->declBus(c+2,"PC_PlusD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage2 ");
    tracep->declBus(c+120,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+64,"en", false,-1);
    tracep->declBit(c+1,"clr", false,-1);
    tracep->declBit(c+28,"RegWriteD", false,-1);
    tracep->declBus(c+16,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+20,"MemWriteD", false,-1);
    tracep->declBit(c+54,"JumpD", false,-1);
    tracep->declBit(c+56,"BranchD", false,-1);
    tracep->declBus(c+32,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+23,"ALUSrcAD", false,-1);
    tracep->declBit(c+24,"ALUSrcBD", false,-1);
    tracep->declBit(c+34,"LdSrcD", false,-1);
    tracep->declBit(c+35,"StSrcD", false,-1);
    tracep->declBit(c+36,"JalSrcD", false,-1);
    tracep->declBus(c+117,"RD1", false,-1, 31,0);
    tracep->declBus(c+118,"RD2", false,-1, 31,0);
    tracep->declBus(c+58,"RdD", false,-1, 4,0);
    tracep->declBus(c+6,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+8,"PCD", false,-1, 31,0);
    tracep->declBus(c+2,"PC_PlusD", false,-1, 31,0);
    tracep->declBus(c+42,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+43,"Rs2D", false,-1, 4,0);
    tracep->declBit(c+29,"RegWriteE", false,-1);
    tracep->declBus(c+17,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+21,"MemWriteE", false,-1);
    tracep->declBit(c+55,"JumpE", false,-1);
    tracep->declBit(c+57,"BranchE", false,-1);
    tracep->declBus(c+33,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+25,"ALUSrcAE", false,-1);
    tracep->declBit(c+26,"ALUSrcBE", false,-1);
    tracep->declBit(c+37,"LdSrcE", false,-1);
    tracep->declBit(c+38,"StSrcE", false,-1);
    tracep->declBit(c+39,"JalSrcE", false,-1);
    tracep->declBus(c+45,"RD1E", false,-1, 31,0);
    tracep->declBus(c+46,"RD2E", false,-1, 31,0);
    tracep->declBus(c+59,"RdE", false,-1, 4,0);
    tracep->declBus(c+7,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+9,"PCE", false,-1, 31,0);
    tracep->declBus(c+3,"PC_PlusE", false,-1, 31,0);
    tracep->declBus(c+12,"funct3", false,-1, 2,0);
    tracep->declBus(c+13,"funct3E", false,-1, 2,0);
    tracep->declBus(c+62,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+63,"Rs2E", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage3 ");
    tracep->declBus(c+120,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+65,"clr", false,-1);
    tracep->declBit(c+29,"RegWriteE", false,-1);
    tracep->declBus(c+17,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+21,"MemWriteE", false,-1);
    tracep->declBit(c+38,"StSrcE", false,-1);
    tracep->declBit(c+37,"LdSrcE", false,-1);
    tracep->declBus(c+51,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+46,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+59,"RdE", false,-1, 4,0);
    tracep->declBus(c+3,"PC_PlusE", false,-1, 31,0);
    tracep->declBit(c+30,"RegWriteM", false,-1);
    tracep->declBus(c+18,"ResultSrcM", false,-1, 1,0);
    tracep->declBit(c+22,"MemWriteM", false,-1);
    tracep->declBit(c+41,"StSrcM", false,-1);
    tracep->declBit(c+40,"LdSrcM", false,-1);
    tracep->declBus(c+52,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+48,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+60,"RdM", false,-1, 4,0);
    tracep->declBus(c+4,"PC_PlusM", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage4 ");
    tracep->declBus(c+120,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+30,"RegWriteM", false,-1);
    tracep->declBus(c+18,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+52,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+44,"RD", false,-1, 31,0);
    tracep->declBus(c+60,"RdM", false,-1, 4,0);
    tracep->declBus(c+4,"PC_PlusM", false,-1, 31,0);
    tracep->declBit(c+31,"RegWriteW", false,-1);
    tracep->declBus(c+19,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+53,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+49,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+61,"RdW", false,-1, 4,0);
    tracep->declBus(c+5,"PC_PlusW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DataMux ");
    tracep->declBus(c+19,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+53,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+49,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+5,"PC_PlusW", false,-1, 31,0);
    tracep->declBus(c+47,"ResultW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_InstrD_mem ");
    tracep->declBus(c+121,"A_length", false,-1, 31,0);
    tracep->declBus(c+122,"D_length", false,-1, 31,0);
    tracep->declBus(c+112,"A", false,-1, 11,0);
    tracep->declBus(c+113,"RDi", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_alu ");
    tracep->declBus(c+9,"PCE", false,-1, 31,0);
    tracep->declBus(c+66,"SrcA0E", false,-1, 31,0);
    tracep->declBus(c+67,"SrcB0E", false,-1, 31,0);
    tracep->declBus(c+7,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+33,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+25,"ALUSrcAE", false,-1);
    tracep->declBit(c+26,"ALUSrcBE", false,-1);
    tracep->declBus(c+51,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+15,"ZeroE", false,-1);
    tracep->declBus(c+68,"SrcAE", false,-1, 31,0);
    tracep->declBus(c+69,"SrcBE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_control_unit ");
    tracep->declBus(c+11,"opcode", false,-1, 6,0);
    tracep->declBus(c+12,"funct3", false,-1, 2,0);
    tracep->declBit(c+14,"func75", false,-1);
    tracep->declBit(c+28,"RegWriteD", false,-1);
    tracep->declBus(c+16,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+20,"MemWriteD", false,-1);
    tracep->declBit(c+54,"JumpD", false,-1);
    tracep->declBit(c+56,"BranchD", false,-1);
    tracep->declBus(c+32,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+23,"ALUSrcAD", false,-1);
    tracep->declBit(c+24,"ALUSrcBD", false,-1);
    tracep->declBus(c+27,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+34,"LdSrcD", false,-1);
    tracep->declBit(c+35,"StSrcD", false,-1);
    tracep->declBit(c+36,"JalSrcD", false,-1);
    tracep->declBus(c+70,"ALUOpD", false,-1, 1,0);
    tracep->declBus(c+71,"ALUDecode", false,-1, 1,0);
    tracep->declBit(c+72,"op5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_data_memory ");
    tracep->declBus(c+120,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+22,"WE", false,-1);
    tracep->declBit(c+41,"StSrcM", false,-1);
    tracep->declBit(c+40,"LdSrcM", false,-1);
    tracep->declBus(c+52,"A", false,-1, 31,0);
    tracep->declBus(c+48,"WD", false,-1, 31,0);
    tracep->declBus(c+44,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_extend ");
    tracep->declBus(c+27,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+50,"Imm", false,-1, 31,7);
    tracep->declBus(c+6,"ImmExtD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_hazardunit ");
    tracep->declBus(c+120,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"RD1E", false,-1, 31,0);
    tracep->declBus(c+46,"RD2E", false,-1, 31,0);
    tracep->declBus(c+62,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+63,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+60,"RdM", false,-1, 4,0);
    tracep->declBus(c+61,"RdW", false,-1, 4,0);
    tracep->declBit(c+30,"RegWriteM", false,-1);
    tracep->declBit(c+31,"RegWriteW", false,-1);
    tracep->declBus(c+47,"ResultW", false,-1, 31,0);
    tracep->declBus(c+52,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+66,"SrcA0E", false,-1, 31,0);
    tracep->declBus(c+67,"SrcB0E", false,-1, 31,0);
    tracep->declBus(c+42,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+43,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+59,"RdE", false,-1, 4,0);
    tracep->declBus(c+17,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+64,"StallF", false,-1);
    tracep->declBit(c+64,"StallD", false,-1);
    tracep->declBit(c+65,"FlushE", false,-1);
    tracep->declBit(c+1,"PCSrcE", false,-1);
    tracep->declBit(c+1,"FlushD", false,-1);
    tracep->declBus(c+73,"ForwardAE", false,-1, 1,0);
    tracep->declBus(c+74,"ForwardBE", false,-1, 1,0);
    tracep->declBit(c+75,"ResultSrcE0", false,-1);
    tracep->declBit(c+64,"lwStall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_pc ");
    tracep->declBus(c+120,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+115,"rst", false,-1);
    tracep->declBit(c+1,"PCSrcE", false,-1);
    tracep->declBit(c+39,"JalSrcE", false,-1);
    tracep->declBus(c+7,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+9,"PCE", false,-1, 31,0);
    tracep->declBus(c+45,"RD1E", false,-1, 31,0);
    tracep->declBus(c+110,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+111,"PCF", false,-1, 31,0);
    tracep->declBus(c+76,"PC_TargetE", false,-1, 31,0);
    tracep->declBus(c+77,"PC_Jump", false,-1, 31,0);
    tracep->declBus(c+119,"PCF_Next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_reg_file ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBus(c+42,"A1", false,-1, 4,0);
    tracep->declBus(c+43,"A2", false,-1, 4,0);
    tracep->declBus(c+61,"A3", false,-1, 4,0);
    tracep->declBus(c+47,"WD3", false,-1, 31,0);
    tracep->declBit(c+31,"WE3", false,-1);
    tracep->declBus(c+117,"RD1", false,-1, 31,0);
    tracep->declBus(c+118,"RD2", false,-1, 31,0);
    tracep->declBus(c+116,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+78+i*1,"mem", true,(i+0), 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__PCSrcE));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__PC_PlusD),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__PC_PlusE),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__PC_PlusM),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__PC_PlusW),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__ImmExtD),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__ImmExtE),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__PCD),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__PCE),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__InstrD),32);
    bufp->fullCData(oldp+11,((0x7fU & vlSelf->top__DOT__InstrD)),7);
    bufp->fullCData(oldp+12,((7U & (vlSelf->top__DOT__InstrD 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__funct3E),3);
    bufp->fullBit(oldp+14,((1U & (vlSelf->top__DOT__InstrD 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__ZeroE));
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__ResultSrcD),2);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__ResultSrcE),2);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__ResultSrcM),2);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__ResultSrcW),2);
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__MemWriteD));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__MemWriteE));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__MemWriteM));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__ALUSrcAD));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__ALUSrcBD));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__ALUSrcAE));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__ALUSrcBE));
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__ImmSrcD),3);
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__RegWriteD));
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__RegWriteE));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__RegWriteM));
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__RegWriteW));
    bufp->fullCData(oldp+32,(((0U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
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
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__ALUControlE),3);
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__LdSrcD));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__StSrcD));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__JalSrcD));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__LdSrcE));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__StSrcE));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__JalSrcE));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__LdSrcM));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__StSrcM));
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+44,(((IData)(vlSelf->top__DOT__LdSrcM)
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
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__RD1E),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__RD2E),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__ResultW),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__WriteDataM),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__ReadDataW),32);
    bufp->fullIData(oldp+50,((vlSelf->top__DOT__InstrD 
                              >> 7U)),25);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__ALUResult),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__ALUResultM),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__ALUResultW),32);
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__JumpD));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__JumpE));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__BranchD));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__BranchE));
    bufp->fullCData(oldp+58,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 7U))),5);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__RdE),5);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__RdM),5);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__RdW),5);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__Rs1E),5);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__Rs2E),5);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__StallD));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__FlushE));
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__SrcA0E),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__SrcB0E),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__my_alu__DOT__SrcAE),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__my_alu__DOT__SrcBE),32);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD),2);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode),2);
    bufp->fullBit(oldp+72,((1U & (vlSelf->top__DOT__InstrD 
                                  >> 5U))));
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE),2);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE),2);
    bufp->fullBit(oldp+75,((1U & (IData)(vlSelf->top__DOT__ResultSrcE))));
    bufp->fullIData(oldp+76,(((IData)(vlSelf->top__DOT__JalSrcE)
                               ? (vlSelf->top__DOT__ImmExtE 
                                  + vlSelf->top__DOT__PCE)
                               : vlSelf->top__DOT__RD1E)),32);
    bufp->fullIData(oldp+77,((vlSelf->top__DOT__ImmExtE 
                              + vlSelf->top__DOT__PCE)),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__my_reg_file__DOT__mem[0]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__my_reg_file__DOT__mem[1]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__my_reg_file__DOT__mem[2]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__my_reg_file__DOT__mem[3]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__my_reg_file__DOT__mem[4]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__my_reg_file__DOT__mem[5]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__my_reg_file__DOT__mem[6]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__my_reg_file__DOT__mem[7]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__my_reg_file__DOT__mem[8]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__my_reg_file__DOT__mem[9]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__my_reg_file__DOT__mem[10]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__my_reg_file__DOT__mem[11]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__my_reg_file__DOT__mem[12]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__my_reg_file__DOT__mem[13]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__my_reg_file__DOT__mem[14]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__my_reg_file__DOT__mem[15]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__my_reg_file__DOT__mem[16]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__my_reg_file__DOT__mem[17]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__my_reg_file__DOT__mem[18]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__my_reg_file__DOT__mem[19]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__my_reg_file__DOT__mem[20]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__my_reg_file__DOT__mem[21]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__my_reg_file__DOT__mem[22]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__my_reg_file__DOT__mem[23]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__my_reg_file__DOT__mem[24]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__my_reg_file__DOT__mem[25]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__my_reg_file__DOT__mem[26]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__my_reg_file__DOT__mem[27]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__my_reg_file__DOT__mem[28]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__my_reg_file__DOT__mem[29]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__my_reg_file__DOT__mem[30]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__my_reg_file__DOT__mem[31]),32);
    bufp->fullIData(oldp+110,(((IData)(4U) + vlSelf->top__DOT__PCF)),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__PCF),32);
    bufp->fullSData(oldp+112,((0xfffU & vlSelf->top__DOT__PCF)),12);
    bufp->fullIData(oldp+113,(((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
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
    bufp->fullBit(oldp+114,(vlSelf->clk));
    bufp->fullBit(oldp+115,(vlSelf->rst));
    bufp->fullIData(oldp+116,(vlSelf->a0),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__my_reg_file__DOT__mem
                              [(0x1fU & (vlSelf->top__DOT__InstrD 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__my_reg_file__DOT__mem
                              [(0x1fU & (vlSelf->top__DOT__InstrD 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+119,(((IData)(vlSelf->top__DOT__PCSrcE)
                                ? ((IData)(vlSelf->top__DOT__JalSrcE)
                                    ? (vlSelf->top__DOT__ImmExtE 
                                       + vlSelf->top__DOT__PCE)
                                    : vlSelf->top__DOT__RD1E)
                                : ((IData)(4U) + vlSelf->top__DOT__PCF))),32);
    bufp->fullIData(oldp+120,(0x20U),32);
    bufp->fullIData(oldp+121,(0xcU),32);
    bufp->fullIData(oldp+122,(8U),32);
}
