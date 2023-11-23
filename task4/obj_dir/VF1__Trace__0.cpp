// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VF1__Syms.h"


void VF1___024root__trace_chg_sub_0(VF1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VF1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root__trace_chg_top_0\n"); );
    // Init
    VF1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF1___024root*>(voidSelf);
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VF1___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VF1___024root__trace_chg_sub_0(VF1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->F1__DOT__mux1_out));
        bufp->chgBit(oldp+1,(((0U != vlSelf->F1__DOT__reset_delay__DOT__current_state) 
                              & ((1U != vlSelf->F1__DOT__reset_delay__DOT__current_state) 
                                 & (2U == vlSelf->F1__DOT__reset_delay__DOT__current_state)))));
        bufp->chgSData(oldp+2,(vlSelf->F1__DOT__clock_tick__DOT__count),16);
        bufp->chgCData(oldp+3,(vlSelf->F1__DOT__reset_delay__DOT__count),7);
        bufp->chgIData(oldp+4,(vlSelf->F1__DOT__reset_delay__DOT__current_state),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+5,(vlSelf->F1__DOT__mux_out));
        bufp->chgBit(oldp+6,(vlSelf->F1__DOT__cmd_seq));
        bufp->chgBit(oldp+7,((8U == vlSelf->F1__DOT__fsm__DOT__current_state)));
        bufp->chgIData(oldp+8,(vlSelf->F1__DOT__fsm__DOT__current_state),32);
    }
    bufp->chgBit(oldp+9,(vlSelf->clk));
    bufp->chgBit(oldp+10,(vlSelf->rst_tick));
    bufp->chgBit(oldp+11,(vlSelf->rst_fsm));
    bufp->chgBit(oldp+12,(vlSelf->rst_delay));
    bufp->chgBit(oldp+13,(vlSelf->rst_lfsr));
    bufp->chgBit(oldp+14,(vlSelf->en_lfsr));
    bufp->chgBit(oldp+15,(vlSelf->trigger));
    bufp->chgSData(oldp+16,(vlSelf->N),16);
    bufp->chgCData(oldp+17,(vlSelf->data_out),8);
    bufp->chgCData(oldp+18,(vlSelf->F1__DOT__register__DOT__sreg),7);
    bufp->chgIData(oldp+19,(vlSelf->F1__DOT__fsm__DOT__next_state),32);
    bufp->chgIData(oldp+20,(((0U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
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
}

void VF1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root__trace_cleanup\n"); );
    // Init
    VF1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VF1___024root*>(voidSelf);
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
