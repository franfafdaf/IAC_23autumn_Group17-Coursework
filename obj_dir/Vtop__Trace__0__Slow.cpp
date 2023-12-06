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
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBus(c+68,"trigger", false,-1, 31,0);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+70,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBus(c+68,"trigger", false,-1, 31,0);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+70,"a0", false,-1, 31,0);
    tracep->declBit(c+71,"PCSrc", false,-1);
    tracep->declBus(c+39,"PC_Plus", false,-1, 31,0);
    tracep->declBus(c+40,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+41,"PC", false,-1, 31,0);
    tracep->declBus(c+42,"Instr", false,-1, 31,0);
    tracep->declBus(c+43,"opcode", false,-1, 6,0);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBit(c+45,"func75", false,-1);
    tracep->declBit(c+1,"Zero", false,-1);
    tracep->declBus(c+46,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+47,"MemWrite", false,-1);
    tracep->declBit(c+48,"ALUSrcA", false,-1);
    tracep->declBit(c+49,"ALUSrcB", false,-1);
    tracep->declBus(c+50,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+51,"RegWrite", false,-1);
    tracep->declBus(c+52,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+53,"LdSrc", false,-1);
    tracep->declBit(c+54,"StSrc", false,-1);
    tracep->declBit(c+55,"JalSrc", false,-1);
    tracep->declBus(c+56,"A", false,-1, 11,0);
    tracep->declBus(c+57,"A1", false,-1, 4,0);
    tracep->declBus(c+58,"A2", false,-1, 4,0);
    tracep->declBus(c+59,"A3", false,-1, 4,0);
    tracep->declBus(c+2,"RD1", false,-1, 31,0);
    tracep->declBus(c+72,"Result", false,-1, 31,0);
    tracep->declBus(c+3,"WriteData", false,-1, 31,0);
    tracep->declBus(c+73,"ReadData", false,-1, 31,0);
    tracep->declBus(c+60,"Imm", false,-1, 24,0);
    tracep->declBus(c+4,"ALUResult", false,-1, 31,0);
    tracep->pushNamePrefix("my_DataMux ");
    tracep->declBus(c+46,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+4,"ALUResult", false,-1, 31,0);
    tracep->declBus(c+73,"RD", false,-1, 31,0);
    tracep->declBus(c+39,"PCPlus", false,-1, 31,0);
    tracep->declBus(c+72,"Result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_alu_top ");
    tracep->declBus(c+41,"PC", false,-1, 31,0);
    tracep->declBus(c+2,"RD1", false,-1, 31,0);
    tracep->declBus(c+3,"RD2", false,-1, 31,0);
    tracep->declBus(c+40,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+52,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+48,"ALUSrcA", false,-1);
    tracep->declBit(c+49,"ALUSrcB", false,-1);
    tracep->declBus(c+4,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+1,"Zero", false,-1);
    tracep->declBus(c+5,"SrcA", false,-1, 31,0);
    tracep->declBus(c+6,"SrcB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_control_unit ");
    tracep->declBus(c+43,"opcode", false,-1, 6,0);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBit(c+45,"func75", false,-1);
    tracep->declBit(c+1,"Zero", false,-1);
    tracep->declBit(c+71,"PCSrc", false,-1);
    tracep->declBus(c+46,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+47,"MemWrite", false,-1);
    tracep->declBit(c+48,"ALUSrcA", false,-1);
    tracep->declBit(c+49,"ALUSrcB", false,-1);
    tracep->declBus(c+50,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+51,"RegWrite", false,-1);
    tracep->declBus(c+52,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+53,"LdSrc", false,-1);
    tracep->declBit(c+54,"StSrc", false,-1);
    tracep->declBit(c+55,"JalSrc", false,-1);
    tracep->declBus(c+61,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+62,"Branch", false,-1);
    tracep->declBit(c+63,"Jump", false,-1);
    tracep->declBit(c+64,"op5", false,-1);
    tracep->pushNamePrefix("ALU_decode ");
    tracep->declBit(c+64,"op5", false,-1);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBit(c+45,"func75", false,-1);
    tracep->declBus(c+61,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+52,"ALUControl", false,-1, 2,0);
    tracep->declBus(c+65,"decode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCSrc_decode ");
    tracep->declBit(c+1,"Zero", false,-1);
    tracep->declBit(c+62,"Branch", false,-1);
    tracep->declBit(c+63,"Jump", false,-1);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBit(c+71,"PCSrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("main_decode ");
    tracep->declBus(c+43,"opcode", false,-1, 6,0);
    tracep->declBus(c+44,"funct3", false,-1, 2,0);
    tracep->declBit(c+62,"Branch", false,-1);
    tracep->declBit(c+63,"Jump", false,-1);
    tracep->declBus(c+46,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+47,"MemWrite", false,-1);
    tracep->declBit(c+48,"ALUSrcA", false,-1);
    tracep->declBit(c+49,"ALUSrcB", false,-1);
    tracep->declBus(c+50,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+51,"RegWrite", false,-1);
    tracep->declBus(c+61,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+53,"LdSrc", false,-1);
    tracep->declBit(c+54,"StSrc", false,-1);
    tracep->declBit(c+55,"JalSrc", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_data_memory ");
    tracep->declBus(c+76,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+47,"WE", false,-1);
    tracep->declBit(c+54,"StSrc", false,-1);
    tracep->declBit(c+53,"LdSrc", false,-1);
    tracep->declBus(c+4,"A", false,-1, 31,0);
    tracep->declBus(c+3,"WD", false,-1, 31,0);
    tracep->declBus(c+73,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_extend ");
    tracep->declBus(c+50,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+60,"Imm", false,-1, 31,7);
    tracep->declBus(c+40,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_instr_mem ");
    tracep->declBus(c+77,"A_length", false,-1, 31,0);
    tracep->declBus(c+78,"D_length", false,-1, 31,0);
    tracep->declBus(c+56,"A", false,-1, 11,0);
    tracep->declBus(c+42,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_pc_top ");
    tracep->declBus(c+76,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBit(c+71,"PCSrc", false,-1);
    tracep->declBit(c+55,"JalSrc", false,-1);
    tracep->declBus(c+40,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+2,"RD1", false,-1, 31,0);
    tracep->declBus(c+39,"PC_Plus", false,-1, 31,0);
    tracep->declBus(c+41,"PC", false,-1, 31,0);
    tracep->declBus(c+74,"PC_Target", false,-1, 31,0);
    tracep->declBus(c+66,"PC_Jump", false,-1, 31,0);
    tracep->declBus(c+75,"PC_Next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_reg_file ");
    tracep->declBit(c+67,"clk", false,-1);
    tracep->declBus(c+57,"A1", false,-1, 4,0);
    tracep->declBus(c+58,"A2", false,-1, 4,0);
    tracep->declBus(c+59,"A3", false,-1, 4,0);
    tracep->declBus(c+72,"WD3", false,-1, 31,0);
    tracep->declBit(c+51,"WE3", false,-1);
    tracep->declBus(c+2,"RD1", false,-1, 31,0);
    tracep->declBus(c+3,"RD2", false,-1, 31,0);
    tracep->declBus(c+70,"a0", false,-1, 31,0);
    tracep->declBus(c+68,"trigger", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+7+i*1,"register", true,(i+0), 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__Zero));
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__RD1),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__WriteData),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__ALUResult),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__my_alu_top__DOT__SrcA),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__my_alu_top__DOT__SrcB),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__my_reg_file__DOT__register[0]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__my_reg_file__DOT__register[1]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__my_reg_file__DOT__register[2]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__my_reg_file__DOT__register[3]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__my_reg_file__DOT__register[4]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__my_reg_file__DOT__register[5]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__my_reg_file__DOT__register[6]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__my_reg_file__DOT__register[7]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__my_reg_file__DOT__register[8]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__my_reg_file__DOT__register[9]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__my_reg_file__DOT__register[10]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__my_reg_file__DOT__register[11]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__my_reg_file__DOT__register[12]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__my_reg_file__DOT__register[13]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__my_reg_file__DOT__register[14]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__my_reg_file__DOT__register[15]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__my_reg_file__DOT__register[16]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__my_reg_file__DOT__register[17]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__my_reg_file__DOT__register[18]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__my_reg_file__DOT__register[19]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__my_reg_file__DOT__register[20]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__my_reg_file__DOT__register[21]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__my_reg_file__DOT__register[22]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__my_reg_file__DOT__register[23]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__my_reg_file__DOT__register[24]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__my_reg_file__DOT__register[25]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__my_reg_file__DOT__register[26]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__my_reg_file__DOT__register[27]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__my_reg_file__DOT__register[28]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__my_reg_file__DOT__register[29]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__my_reg_file__DOT__register[30]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__my_reg_file__DOT__register[31]),32);
    bufp->fullIData(oldp+39,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__ImmExt),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__Instr),32);
    bufp->fullCData(oldp+43,((0x7fU & vlSelf->top__DOT__Instr)),7);
    bufp->fullCData(oldp+44,((7U & (vlSelf->top__DOT__Instr 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+45,((1U & (vlSelf->top__DOT__Instr 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__ResultSrc),2);
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__MemWrite));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__ALUSrcA));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__ALUSrcB));
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__ImmSrc),3);
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__RegWrite));
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__ALUControl),3);
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__LdSrc));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__StSrc));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__JalSrc));
    bufp->fullSData(oldp+56,((0xfffU & vlSelf->top__DOT__PC)),12);
    bufp->fullCData(oldp+57,((0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->top__DOT__Instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+60,((vlSelf->top__DOT__Instr 
                              >> 7U)),25);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__my_control_unit__DOT__ALUOp),2);
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__my_control_unit__DOT__Branch));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__my_control_unit__DOT__Jump));
    bufp->fullBit(oldp+64,((1U & (vlSelf->top__DOT__Instr 
                                  >> 5U))));
    bufp->fullCData(oldp+65,(((2U & (vlSelf->top__DOT__Instr 
                                     >> 4U)) | (1U 
                                                & (vlSelf->top__DOT__Instr 
                                                   >> 0x1eU)))),2);
    bufp->fullIData(oldp+66,((vlSelf->top__DOT__PC 
                              + vlSelf->top__DOT__ImmExt)),32);
    bufp->fullBit(oldp+67,(vlSelf->clk));
    bufp->fullIData(oldp+68,(vlSelf->trigger),32);
    bufp->fullBit(oldp+69,(vlSelf->rst));
    bufp->fullIData(oldp+70,(vlSelf->a0),32);
    bufp->fullBit(oldp+71,(((IData)(vlSelf->top__DOT__my_control_unit__DOT__Jump) 
                            | ((((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                 & (IData)(vlSelf->top__DOT__Zero)) 
                                & (0U == (0x7000U & vlSelf->top__DOT__Instr))) 
                               | (((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                   & (~ (IData)(vlSelf->top__DOT__Zero))) 
                                  & (0x1000U == (0x7000U 
                                                 & vlSelf->top__DOT__Instr)))))));
    bufp->fullIData(oldp+72,(((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                               ? vlSelf->top__DOT__ALUResult
                               : ((1U == (IData)(vlSelf->top__DOT__ResultSrc))
                                   ? ((IData)(vlSelf->top__DOT__LdSrc)
                                       ? vlSelf->top__DOT__my_data_memory__DOT__data_array
                                      [(0x1ffffU & vlSelf->top__DOT__ALUResult)]
                                       : ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                           [(0x1ffffU 
                                             & ((IData)(3U) 
                                                + vlSelf->top__DOT__ALUResult))] 
                                           << 0x18U) 
                                          | ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                              [(0x1ffffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->top__DOT__ALUResult))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                                 [(0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__ALUResult))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__my_data_memory__DOT__data_array
                                                [(0x1ffffU 
                                                  & vlSelf->top__DOT__ALUResult)]))))
                                   : ((2U == (IData)(vlSelf->top__DOT__ResultSrc))
                                       ? ((IData)(4U) 
                                          + vlSelf->top__DOT__PC)
                                       : 0U)))),32);
    bufp->fullIData(oldp+73,(((IData)(vlSelf->top__DOT__LdSrc)
                               ? vlSelf->top__DOT__my_data_memory__DOT__data_array
                              [(0x1ffffU & vlSelf->top__DOT__ALUResult)]
                               : ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                   [(0x1ffffU & ((IData)(3U) 
                                                 + vlSelf->top__DOT__ALUResult))] 
                                   << 0x18U) | ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                                 [(0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__ALUResult))] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__my_data_memory__DOT__data_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->top__DOT__ALUResult))] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__my_data_memory__DOT__data_array
                                                   [
                                                   (0x1ffffU 
                                                    & vlSelf->top__DOT__ALUResult)]))))),32);
    bufp->fullIData(oldp+74,(((IData)(vlSelf->top__DOT__JalSrc)
                               ? (vlSelf->top__DOT__PC 
                                  + vlSelf->top__DOT__ImmExt)
                               : vlSelf->top__DOT__RD1)),32);
    bufp->fullIData(oldp+75,((((IData)(vlSelf->top__DOT__my_control_unit__DOT__Jump) 
                               | ((((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                    & (IData)(vlSelf->top__DOT__Zero)) 
                                   & (0U == (0x7000U 
                                             & vlSelf->top__DOT__Instr))) 
                                  | (((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                      & (~ (IData)(vlSelf->top__DOT__Zero))) 
                                     & (0x1000U == 
                                        (0x7000U & vlSelf->top__DOT__Instr)))))
                               ? ((IData)(vlSelf->top__DOT__JalSrc)
                                   ? (vlSelf->top__DOT__PC 
                                      + vlSelf->top__DOT__ImmExt)
                                   : vlSelf->top__DOT__RD1)
                               : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
    bufp->fullIData(oldp+76,(0x20U),32);
    bufp->fullIData(oldp+77,(0xcU),32);
    bufp->fullIData(oldp+78,(8U),32);
}
