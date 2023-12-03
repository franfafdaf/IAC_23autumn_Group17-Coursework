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
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBus(c+106,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBus(c+106,"a0", false,-1, 31,0);
    tracep->declBit(c+1,"PCSrcE", false,-1);
    tracep->declBus(c+74,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+75,"PC_PlusD", false,-1, 31,0);
    tracep->declBus(c+2,"PC_PlusE", false,-1, 31,0);
    tracep->declBus(c+3,"PC_PlusM", false,-1, 31,0);
    tracep->declBus(c+4,"PC_PlusW", false,-1, 31,0);
    tracep->declBus(c+76,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+5,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+77,"PCF", false,-1, 31,0);
    tracep->declBus(c+78,"PCD", false,-1, 31,0);
    tracep->declBus(c+6,"PCE", false,-1, 31,0);
    tracep->declBus(c+79,"InstrD", false,-1, 31,0);
    tracep->declBus(c+80,"opcode", false,-1, 6,0);
    tracep->declBus(c+81,"funct3", false,-1, 2,0);
    tracep->declBit(c+82,"func75", false,-1);
    tracep->declBit(c+7,"ZeroE", false,-1);
    tracep->declBus(c+83,"ResultSrcD", false,-1, 1,0);
    tracep->declBus(c+8,"ResultSrcE", false,-1, 1,0);
    tracep->declBus(c+9,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+10,"ResultSrcW", false,-1, 1,0);
    tracep->declBit(c+84,"MemWriteD", false,-1);
    tracep->declBit(c+11,"MemWriteE", false,-1);
    tracep->declBit(c+12,"MemWriteM", false,-1);
    tracep->declBit(c+85,"ALUSrcAD", false,-1);
    tracep->declBit(c+86,"ALUSrcBD", false,-1);
    tracep->declBit(c+13,"ALUSrcAE", false,-1);
    tracep->declBit(c+14,"ALUSrcBE", false,-1);
    tracep->declBus(c+87,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+88,"RegWriteD", false,-1);
    tracep->declBit(c+15,"RegWriteE", false,-1);
    tracep->declBit(c+16,"RegWriteM", false,-1);
    tracep->declBit(c+17,"RegWriteW", false,-1);
    tracep->declBus(c+89,"ALUControlD", false,-1, 2,0);
    tracep->declBus(c+18,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+90,"LdSrcD", false,-1);
    tracep->declBit(c+91,"StSrcD", false,-1);
    tracep->declBit(c+92,"JalSrcD", false,-1);
    tracep->declBit(c+19,"LdSrcE", false,-1);
    tracep->declBit(c+20,"StSrcE", false,-1);
    tracep->declBit(c+21,"JalSrcE", false,-1);
    tracep->declBit(c+22,"LdSrcM", false,-1);
    tracep->declBit(c+23,"StSrcM", false,-1);
    tracep->declBus(c+93,"A", false,-1, 11,0);
    tracep->declBus(c+94,"A1", false,-1, 4,0);
    tracep->declBus(c+95,"A2", false,-1, 4,0);
    tracep->declBus(c+96,"RDi", false,-1, 31,0);
    tracep->declBus(c+24,"RD", false,-1, 31,0);
    tracep->declBus(c+107,"RD1", false,-1, 31,0);
    tracep->declBus(c+25,"RD1E", false,-1, 31,0);
    tracep->declBus(c+108,"RD2", false,-1, 31,0);
    tracep->declBus(c+26,"RD2E", false,-1, 31,0);
    tracep->declBus(c+27,"ResultW", false,-1, 31,0);
    tracep->declBus(c+28,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+29,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+97,"Imm", false,-1, 24,0);
    tracep->declBus(c+30,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+31,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+32,"ALUResultW", false,-1, 31,0);
    tracep->declBit(c+98,"JumpD", false,-1);
    tracep->declBit(c+33,"JumpE", false,-1);
    tracep->declBit(c+99,"BranchD", false,-1);
    tracep->declBit(c+34,"BranchE", false,-1);
    tracep->declBus(c+100,"RdD", false,-1, 4,0);
    tracep->declBus(c+35,"RdE", false,-1, 4,0);
    tracep->declBus(c+36,"RdM", false,-1, 4,0);
    tracep->declBus(c+37,"RdW", false,-1, 4,0);
    tracep->pushNamePrefix("PCSrcE_decode ");
    tracep->declBit(c+7,"ZeroE", false,-1);
    tracep->declBit(c+34,"BranchE", false,-1);
    tracep->declBit(c+33,"JumpE", false,-1);
    tracep->declBit(c+1,"PCSrcE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage1 ");
    tracep->declBus(c+110,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBus(c+96,"RDi", false,-1, 31,0);
    tracep->declBus(c+77,"PCF", false,-1, 31,0);
    tracep->declBus(c+74,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+79,"InstrD", false,-1, 31,0);
    tracep->declBus(c+78,"PCD", false,-1, 31,0);
    tracep->declBus(c+75,"PC_PlusD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage2 ");
    tracep->declBus(c+110,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+88,"RegWriteD", false,-1);
    tracep->declBus(c+83,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+84,"MemWriteD", false,-1);
    tracep->declBit(c+98,"JumpD", false,-1);
    tracep->declBit(c+99,"BranchD", false,-1);
    tracep->declBus(c+89,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+85,"ALUSrcAD", false,-1);
    tracep->declBit(c+86,"ALUSrcBD", false,-1);
    tracep->declBit(c+90,"LdSrcD", false,-1);
    tracep->declBit(c+91,"StSrcD", false,-1);
    tracep->declBit(c+92,"JalSrcD", false,-1);
    tracep->declBus(c+107,"RD1", false,-1, 31,0);
    tracep->declBus(c+108,"RD2", false,-1, 31,0);
    tracep->declBus(c+100,"RdD", false,-1, 4,0);
    tracep->declBus(c+76,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+78,"PCD", false,-1, 31,0);
    tracep->declBus(c+75,"PC_PlusD", false,-1, 31,0);
    tracep->declBit(c+15,"RegWriteE", false,-1);
    tracep->declBus(c+8,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+11,"MemWriteE", false,-1);
    tracep->declBit(c+33,"JumpE", false,-1);
    tracep->declBit(c+34,"BranchE", false,-1);
    tracep->declBus(c+18,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+13,"ALUSrcAE", false,-1);
    tracep->declBit(c+14,"ALUSrcBE", false,-1);
    tracep->declBit(c+19,"LdSrcE", false,-1);
    tracep->declBit(c+20,"StSrcE", false,-1);
    tracep->declBit(c+21,"JalSrcE", false,-1);
    tracep->declBus(c+25,"RD1E", false,-1, 31,0);
    tracep->declBus(c+26,"RD2E", false,-1, 31,0);
    tracep->declBus(c+35,"RdE", false,-1, 4,0);
    tracep->declBus(c+5,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+6,"PCE", false,-1, 31,0);
    tracep->declBus(c+2,"PC_PlusE", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage3 ");
    tracep->declBus(c+110,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+15,"RegWriteE", false,-1);
    tracep->declBus(c+8,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+11,"MemWriteE", false,-1);
    tracep->declBit(c+20,"StSrcE", false,-1);
    tracep->declBit(c+19,"LdSrcE", false,-1);
    tracep->declBus(c+30,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+26,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+35,"RdE", false,-1, 4,0);
    tracep->declBus(c+2,"PC_PlusE", false,-1, 31,0);
    tracep->declBit(c+16,"RegWriteM", false,-1);
    tracep->declBus(c+9,"ResultSrcM", false,-1, 1,0);
    tracep->declBit(c+12,"MemWriteM", false,-1);
    tracep->declBit(c+23,"StSrcM", false,-1);
    tracep->declBit(c+22,"LdSrcM", false,-1);
    tracep->declBus(c+31,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+28,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+36,"RdM", false,-1, 4,0);
    tracep->declBus(c+3,"PC_PlusM", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Stage4 ");
    tracep->declBus(c+110,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+16,"RegWriteM", false,-1);
    tracep->declBus(c+9,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+31,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+24,"RD", false,-1, 31,0);
    tracep->declBus(c+36,"RdM", false,-1, 4,0);
    tracep->declBus(c+3,"PC_PlusM", false,-1, 31,0);
    tracep->declBit(c+17,"RegWriteW", false,-1);
    tracep->declBus(c+10,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+32,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+29,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+37,"RdW", false,-1, 4,0);
    tracep->declBus(c+4,"PC_PlusW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DataMux ");
    tracep->declBus(c+10,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+32,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+29,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+4,"PC_PlusW", false,-1, 31,0);
    tracep->declBus(c+27,"ResultW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_InstrD_mem ");
    tracep->declBus(c+111,"A_length", false,-1, 31,0);
    tracep->declBus(c+112,"D_length", false,-1, 31,0);
    tracep->declBus(c+93,"A", false,-1, 11,0);
    tracep->declBus(c+96,"RDi", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_alu ");
    tracep->declBus(c+6,"PCE", false,-1, 31,0);
    tracep->declBus(c+25,"RD1E", false,-1, 31,0);
    tracep->declBus(c+26,"RD2E", false,-1, 31,0);
    tracep->declBus(c+5,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+18,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+13,"ALUSrcAE", false,-1);
    tracep->declBit(c+14,"ALUSrcBE", false,-1);
    tracep->declBus(c+30,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+7,"ZeroE", false,-1);
    tracep->declBus(c+38,"SrcA", false,-1, 31,0);
    tracep->declBus(c+39,"SrcB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_control_unit ");
    tracep->declBus(c+80,"opcode", false,-1, 6,0);
    tracep->declBus(c+81,"funct3", false,-1, 2,0);
    tracep->declBit(c+82,"func75", false,-1);
    tracep->declBit(c+88,"RegWriteD", false,-1);
    tracep->declBus(c+83,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+84,"MemWriteD", false,-1);
    tracep->declBit(c+98,"JumpD", false,-1);
    tracep->declBit(c+99,"BranchD", false,-1);
    tracep->declBus(c+89,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+85,"ALUSrcAD", false,-1);
    tracep->declBit(c+86,"ALUSrcBD", false,-1);
    tracep->declBus(c+87,"ImmSrcD", false,-1, 2,0);
    tracep->declBit(c+90,"LdSrcD", false,-1);
    tracep->declBit(c+91,"StSrcD", false,-1);
    tracep->declBit(c+92,"JalSrcD", false,-1);
    tracep->declBus(c+101,"ALUOpD", false,-1, 1,0);
    tracep->declBus(c+102,"ALUDecode", false,-1, 1,0);
    tracep->declBit(c+103,"op5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_data_memory ");
    tracep->declBus(c+110,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+12,"WE", false,-1);
    tracep->declBit(c+23,"StSrcM", false,-1);
    tracep->declBit(c+22,"LdSrcM", false,-1);
    tracep->declBus(c+31,"A", false,-1, 31,0);
    tracep->declBus(c+28,"WD", false,-1, 31,0);
    tracep->declBus(c+24,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_extend ");
    tracep->declBus(c+87,"ImmSrcD", false,-1, 2,0);
    tracep->declBus(c+97,"Imm", false,-1, 31,7);
    tracep->declBus(c+76,"ImmExtD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_pc ");
    tracep->declBus(c+110,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"rst", false,-1);
    tracep->declBit(c+1,"PCSrcE", false,-1);
    tracep->declBit(c+21,"JalSrcE", false,-1);
    tracep->declBus(c+5,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+6,"PCE", false,-1, 31,0);
    tracep->declBus(c+25,"RD1E", false,-1, 31,0);
    tracep->declBus(c+74,"PC_PlusF", false,-1, 31,0);
    tracep->declBus(c+77,"PCF", false,-1, 31,0);
    tracep->declBus(c+40,"PC_TargetE", false,-1, 31,0);
    tracep->declBus(c+41,"PC_Jump", false,-1, 31,0);
    tracep->declBus(c+109,"PCF_Next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_reg_file ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBus(c+94,"A1", false,-1, 4,0);
    tracep->declBus(c+95,"A2", false,-1, 4,0);
    tracep->declBus(c+37,"A3", false,-1, 4,0);
    tracep->declBus(c+27,"WD3", false,-1, 31,0);
    tracep->declBit(c+17,"WE3", false,-1);
    tracep->declBus(c+107,"RD1", false,-1, 31,0);
    tracep->declBus(c+108,"RD2", false,-1, 31,0);
    tracep->declBus(c+106,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+42+i*1,"mem", true,(i+0), 31,0);
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
    bufp->fullBit(oldp+1,(((IData)(vlSelf->top__DOT__JumpE) 
                           | ((IData)(vlSelf->top__DOT__BranchE) 
                              & (IData)(vlSelf->top__DOT__ZeroE)))));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__PC_PlusE),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__PC_PlusM),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__PC_PlusW),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__ImmExtE),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__PCE),32);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__ZeroE));
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__ResultSrcE),2);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__ResultSrcM),2);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__ResultSrcW),2);
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__MemWriteE));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__MemWriteM));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__ALUSrcAE));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__ALUSrcBE));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__RegWriteE));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__RegWriteM));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__RegWriteW));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__ALUControlE),3);
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__LdSrcE));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__StSrcE));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__JalSrcE));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__LdSrcM));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__StSrcM));
    bufp->fullIData(oldp+24,(((IData)(vlSelf->top__DOT__LdSrcM)
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
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__RD1E),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__RD2E),32);
    bufp->fullIData(oldp+27,(((0U == (IData)(vlSelf->top__DOT__ResultSrcW))
                               ? vlSelf->top__DOT__ALUResultW
                               : ((1U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                   ? vlSelf->top__DOT__ReadDataW
                                   : ((2U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                       ? vlSelf->top__DOT__PC_PlusW
                                       : 0U)))),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__WriteDataM),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__ReadDataW),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__ALUResult),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__ALUResultM),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__ALUResultW),32);
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__JumpE));
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__BranchE));
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__RdE),5);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__RdM),5);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__RdW),5);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__my_alu__DOT__SrcA),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__my_alu__DOT__SrcB),32);
    bufp->fullIData(oldp+40,(((IData)(vlSelf->top__DOT__JalSrcE)
                               ? (vlSelf->top__DOT__ImmExtE 
                                  + vlSelf->top__DOT__PCE)
                               : vlSelf->top__DOT__RD1E)),32);
    bufp->fullIData(oldp+41,((vlSelf->top__DOT__ImmExtE 
                              + vlSelf->top__DOT__PCE)),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__my_reg_file__DOT__mem[0]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__my_reg_file__DOT__mem[1]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__my_reg_file__DOT__mem[2]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__my_reg_file__DOT__mem[3]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__my_reg_file__DOT__mem[4]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__my_reg_file__DOT__mem[5]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__my_reg_file__DOT__mem[6]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__my_reg_file__DOT__mem[7]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__my_reg_file__DOT__mem[8]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__my_reg_file__DOT__mem[9]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__my_reg_file__DOT__mem[10]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__my_reg_file__DOT__mem[11]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__my_reg_file__DOT__mem[12]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__my_reg_file__DOT__mem[13]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__my_reg_file__DOT__mem[14]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__my_reg_file__DOT__mem[15]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__my_reg_file__DOT__mem[16]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__my_reg_file__DOT__mem[17]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__my_reg_file__DOT__mem[18]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__my_reg_file__DOT__mem[19]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__my_reg_file__DOT__mem[20]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__my_reg_file__DOT__mem[21]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__my_reg_file__DOT__mem[22]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__my_reg_file__DOT__mem[23]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__my_reg_file__DOT__mem[24]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__my_reg_file__DOT__mem[25]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__my_reg_file__DOT__mem[26]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__my_reg_file__DOT__mem[27]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__my_reg_file__DOT__mem[28]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__my_reg_file__DOT__mem[29]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__my_reg_file__DOT__mem[30]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__my_reg_file__DOT__mem[31]),32);
    bufp->fullIData(oldp+74,(((IData)(4U) + vlSelf->top__DOT__PCF)),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__PC_PlusD),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__ImmExtD),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__PCF),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__PCD),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__InstrD),32);
    bufp->fullCData(oldp+80,((0x7fU & vlSelf->top__DOT__InstrD)),7);
    bufp->fullCData(oldp+81,((7U & (vlSelf->top__DOT__InstrD 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+82,((1U & (vlSelf->top__DOT__InstrD 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__ResultSrcD),2);
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__MemWriteD));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__ALUSrcAD));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__ALUSrcBD));
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__ImmSrcD),3);
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__RegWriteD));
    bufp->fullCData(oldp+89,(((0U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
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
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__LdSrcD));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__StSrcD));
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__JalSrcD));
    bufp->fullSData(oldp+93,((0xfffU & vlSelf->top__DOT__PCF)),12);
    bufp->fullCData(oldp+94,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+95,((0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+96,(((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                               [(0xfffU & vlSelf->top__DOT__PCF)] 
                               << 0x18U) | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                             [(0xfffU 
                                               & ((IData)(1U) 
                                                  + vlSelf->top__DOT__PCF))] 
                                             << 0x10U) 
                                            | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                [(0xfffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->top__DOT__PCF))] 
                                                << 8U) 
                                               | vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                               [(0xfffU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->top__DOT__PCF))])))),32);
    bufp->fullIData(oldp+97,((vlSelf->top__DOT__InstrD 
                              >> 7U)),25);
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__JumpD));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__BranchD));
    bufp->fullCData(oldp+100,((0x1fU & (vlSelf->top__DOT__InstrD 
                                        >> 7U))),5);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD),2);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode),2);
    bufp->fullBit(oldp+103,((1U & (vlSelf->top__DOT__InstrD 
                                   >> 5U))));
    bufp->fullBit(oldp+104,(vlSelf->clk));
    bufp->fullBit(oldp+105,(vlSelf->rst));
    bufp->fullIData(oldp+106,(vlSelf->a0),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__my_reg_file__DOT__mem
                              [(0x1fU & (vlSelf->top__DOT__InstrD 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__my_reg_file__DOT__mem
                              [(0x1fU & (vlSelf->top__DOT__InstrD 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+109,((((IData)(vlSelf->top__DOT__JumpE) 
                                | ((IData)(vlSelf->top__DOT__BranchE) 
                                   & (IData)(vlSelf->top__DOT__ZeroE)))
                                ? ((IData)(vlSelf->top__DOT__JalSrcE)
                                    ? (vlSelf->top__DOT__ImmExtE 
                                       + vlSelf->top__DOT__PCE)
                                    : vlSelf->top__DOT__RD1E)
                                : ((IData)(4U) + vlSelf->top__DOT__PCF))),32);
    bufp->fullIData(oldp+110,(0x20U),32);
    bufp->fullIData(oldp+111,(0xcU),32);
    bufp->fullIData(oldp+112,(8U),32);
}
