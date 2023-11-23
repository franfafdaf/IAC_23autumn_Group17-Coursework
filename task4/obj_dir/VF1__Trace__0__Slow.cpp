// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VF1__Syms.h"


VL_ATTR_COLD void VF1___024root__trace_init_sub__TOP__0(VF1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst_tick", false,-1);
    tracep->declBit(c+12,"rst_fsm", false,-1);
    tracep->declBit(c+13,"rst_delay", false,-1);
    tracep->declBit(c+14,"rst_lfsr", false,-1);
    tracep->declBit(c+15,"en_lfsr", false,-1);
    tracep->declBit(c+16,"trigger", false,-1);
    tracep->declBus(c+17,"N", false,-1, 15,0);
    tracep->declBus(c+18,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("F1 ");
    tracep->declBus(c+22,"WIDTH_N", false,-1, 31,0);
    tracep->declBus(c+23,"WIDTH_D", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst_tick", false,-1);
    tracep->declBit(c+12,"rst_fsm", false,-1);
    tracep->declBit(c+13,"rst_delay", false,-1);
    tracep->declBit(c+14,"rst_lfsr", false,-1);
    tracep->declBit(c+15,"en_lfsr", false,-1);
    tracep->declBit(c+16,"trigger", false,-1);
    tracep->declBus(c+17,"N", false,-1, 15,0);
    tracep->declBus(c+18,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"mux1_out", false,-1);
    tracep->declBit(c+2,"mux2_out", false,-1);
    tracep->declBit(c+6,"mux_out", false,-1);
    tracep->declBit(c+7,"cmd_seq", false,-1);
    tracep->declBit(c+8,"cmd_delay", false,-1);
    tracep->declBus(c+19,"no_delay", false,-1, 6,0);
    tracep->pushNamePrefix("clock_tick ");
    tracep->declBus(c+22,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+7,"en", false,-1);
    tracep->declBus(c+17,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+3,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fsm ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+16,"trigger", false,-1);
    tracep->declBus(c+18,"data_out", false,-1, 7,0);
    tracep->declBit(c+7,"cmd_seq", false,-1);
    tracep->declBit(c+8,"cmd_delay", false,-1);
    tracep->declBus(c+9,"current_state", false,-1, 31,0);
    tracep->declBus(c+20,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+14,"rst", false,-1);
    tracep->declBit(c+15,"en", false,-1);
    tracep->declBus(c+19,"data_out", false,-1, 7,1);
    tracep->declBus(c+19,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reset_delay ");
    tracep->declBus(c+23,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+8,"trigger", false,-1);
    tracep->declBus(c+19,"n", false,-1, 6,0);
    tracep->declBit(c+2,"time_out", false,-1);
    tracep->declBus(c+4,"count", false,-1, 6,0);
    tracep->declBus(c+5,"current_state", false,-1, 31,0);
    tracep->declBus(c+21,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VF1___024root__trace_init_top(VF1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root__trace_init_top\n"); );
    // Body
    VF1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VF1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VF1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VF1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VF1___024root__trace_register(VF1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VF1___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VF1___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VF1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VF1___024root__trace_full_sub_0(VF1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VF1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root__trace_full_top_0\n"); );
    // Init
    VF1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF1___024root*>(voidSelf);
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VF1___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VF1___024root__trace_full_sub_0(VF1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->F1__DOT__mux1_out));
    bufp->fullBit(oldp+2,(((0U != vlSelf->F1__DOT__reset_delay__DOT__current_state) 
                           & ((1U != vlSelf->F1__DOT__reset_delay__DOT__current_state) 
                              & (2U == vlSelf->F1__DOT__reset_delay__DOT__current_state)))));
    bufp->fullSData(oldp+3,(vlSelf->F1__DOT__clock_tick__DOT__count),16);
    bufp->fullCData(oldp+4,(vlSelf->F1__DOT__reset_delay__DOT__count),7);
    bufp->fullIData(oldp+5,(vlSelf->F1__DOT__reset_delay__DOT__current_state),32);
    bufp->fullBit(oldp+6,(vlSelf->F1__DOT__mux_out));
    bufp->fullBit(oldp+7,(vlSelf->F1__DOT__cmd_seq));
    bufp->fullBit(oldp+8,((8U == vlSelf->F1__DOT__fsm__DOT__current_state)));
    bufp->fullIData(oldp+9,(vlSelf->F1__DOT__fsm__DOT__current_state),32);
    bufp->fullBit(oldp+10,(vlSelf->clk));
    bufp->fullBit(oldp+11,(vlSelf->rst_tick));
    bufp->fullBit(oldp+12,(vlSelf->rst_fsm));
    bufp->fullBit(oldp+13,(vlSelf->rst_delay));
    bufp->fullBit(oldp+14,(vlSelf->rst_lfsr));
    bufp->fullBit(oldp+15,(vlSelf->en_lfsr));
    bufp->fullBit(oldp+16,(vlSelf->trigger));
    bufp->fullSData(oldp+17,(vlSelf->N),16);
    bufp->fullCData(oldp+18,(vlSelf->data_out),8);
    bufp->fullCData(oldp+19,(vlSelf->F1__DOT__register__DOT__sreg),7);
    bufp->fullIData(oldp+20,(vlSelf->F1__DOT__fsm__DOT__next_state),32);
    bufp->fullIData(oldp+21,(((0U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
                               ? ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)
                                   ? 1U : vlSelf->F1__DOT__reset_delay__DOT__current_state)
                               : ((1U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
                                   ? ((0U == (IData)(vlSelf->F1__DOT__reset_delay__DOT__count))
                                       ? 2U : vlSelf->F1__DOT__reset_delay__DOT__current_state)
                                   : ((2U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
                                       ? ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)
                                           ? 3U : 0U)
                                       : ((3U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
                                           ? ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)
                                               ? vlSelf->F1__DOT__reset_delay__DOT__current_state
                                               : 0U)
                                           : 0U))))),32);
    bufp->fullIData(oldp+22,(0x10U),32);
    bufp->fullIData(oldp+23,(7U),32);
}
