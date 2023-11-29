// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__my_reg_file__DOT__mem[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__my_reg_file__DOT__mem[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__my_reg_file__DOT__mem[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__my_reg_file__DOT__mem[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__my_reg_file__DOT__mem[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__my_reg_file__DOT__mem[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__my_reg_file__DOT__mem[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__my_reg_file__DOT__mem[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__my_reg_file__DOT__mem[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__my_reg_file__DOT__mem[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__my_reg_file__DOT__mem[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__my_reg_file__DOT__mem[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__my_reg_file__DOT__mem[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__my_reg_file__DOT__mem[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__my_reg_file__DOT__mem[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__my_reg_file__DOT__mem[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__my_reg_file__DOT__mem[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__my_reg_file__DOT__mem[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__my_reg_file__DOT__mem[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__my_reg_file__DOT__mem[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__my_reg_file__DOT__mem[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__my_reg_file__DOT__mem[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__my_reg_file__DOT__mem[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__my_reg_file__DOT__mem[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__my_reg_file__DOT__mem[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__my_reg_file__DOT__mem[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__my_reg_file__DOT__mem[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__my_reg_file__DOT__mem[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__my_reg_file__DOT__mem[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__my_reg_file__DOT__mem[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__my_reg_file__DOT__mem[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__my_reg_file__DOT__mem[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+32,(((IData)(vlSelf->top__DOT__my_control_unit__DOT__Jump) 
                               | ((((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                    & (IData)(vlSelf->top__DOT__Zero)) 
                                   & (0U == (0x7000U 
                                             & vlSelf->top__DOT__Instr))) 
                                  | (((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                      & (~ (IData)(vlSelf->top__DOT__Zero))) 
                                     & (0x1000U == 
                                        (0x7000U & vlSelf->top__DOT__Instr)))))));
        bufp->chgIData(oldp+33,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__ImmExt),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__Instr),32);
        bufp->chgCData(oldp+37,((0x7fU & vlSelf->top__DOT__Instr)),7);
        bufp->chgCData(oldp+38,((7U & (vlSelf->top__DOT__Instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+39,((1U & (vlSelf->top__DOT__Instr 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__Zero));
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__ResultSrc),2);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__MemWrite));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__ALUSrcA));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__ALUSrcB));
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__ImmSrc),3);
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__RegWrite));
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__ALUControl),3);
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__LdSrc));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__StSrc));
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__JalSrc));
        bufp->chgSData(oldp+51,((0xfffU & vlSelf->top__DOT__PC)),12);
        bufp->chgCData(oldp+52,((0x1fU & (vlSelf->top__DOT__Instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelf->top__DOT__Instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+54,((0x1fU & (vlSelf->top__DOT__Instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__RD1),32);
        bufp->chgIData(oldp+56,(((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                                  ? vlSelf->top__DOT__ALUResult
                                  : ((1U == (IData)(vlSelf->top__DOT__ResultSrc))
                                      ? ((IData)(vlSelf->top__DOT__LdSrc)
                                          ? (0xffU 
                                             & vlSelf->top__DOT__my_data_memory__DOT__read_data_internal)
                                          : vlSelf->top__DOT__my_data_memory__DOT__read_data_internal)
                                      : ((2U == (IData)(vlSelf->top__DOT__ResultSrc))
                                          ? ((IData)(4U) 
                                             + vlSelf->top__DOT__PC)
                                          : 0U)))),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__WriteData),32);
        bufp->chgIData(oldp+58,(((IData)(vlSelf->top__DOT__LdSrc)
                                  ? (0xffU & vlSelf->top__DOT__my_data_memory__DOT__read_data_internal)
                                  : vlSelf->top__DOT__my_data_memory__DOT__read_data_internal)),32);
        bufp->chgIData(oldp+59,((vlSelf->top__DOT__Instr 
                                 >> 7U)),25);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__ALUResult),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__my_alu_top__DOT__SrcA),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__my_alu_top__DOT__SrcB),32);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__my_control_unit__DOT__ALUOp),2);
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__my_control_unit__DOT__Branch));
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__my_control_unit__DOT__Jump));
        bufp->chgBit(oldp+66,((1U & (vlSelf->top__DOT__Instr 
                                     >> 5U))));
        bufp->chgCData(oldp+67,(((2U & (vlSelf->top__DOT__Instr 
                                        >> 4U)) | (1U 
                                                   & (vlSelf->top__DOT__Instr 
                                                      >> 0x1eU)))),2);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__my_data_memory__DOT__corrected_WD),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__my_data_memory__DOT__read_data_internal),32);
        bufp->chgIData(oldp+70,(((IData)(vlSelf->top__DOT__JalSrc)
                                  ? (vlSelf->top__DOT__PC 
                                     + vlSelf->top__DOT__ImmExt)
                                  : vlSelf->top__DOT__RD1)),32);
        bufp->chgIData(oldp+71,((vlSelf->top__DOT__PC 
                                 + vlSelf->top__DOT__ImmExt)),32);
        bufp->chgIData(oldp+72,((((IData)(vlSelf->top__DOT__my_control_unit__DOT__Jump) 
                                  | ((((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                       & (IData)(vlSelf->top__DOT__Zero)) 
                                      & (0U == (0x7000U 
                                                & vlSelf->top__DOT__Instr))) 
                                     | (((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                         & (~ (IData)(vlSelf->top__DOT__Zero))) 
                                        & (0x1000U 
                                           == (0x7000U 
                                               & vlSelf->top__DOT__Instr)))))
                                  ? ((IData)(vlSelf->top__DOT__JalSrc)
                                      ? (vlSelf->top__DOT__PC 
                                         + vlSelf->top__DOT__ImmExt)
                                      : vlSelf->top__DOT__RD1)
                                  : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
    }
    bufp->chgBit(oldp+73,(vlSelf->clk));
    bufp->chgBit(oldp+74,(vlSelf->rst));
    bufp->chgIData(oldp+75,(vlSelf->a0),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
