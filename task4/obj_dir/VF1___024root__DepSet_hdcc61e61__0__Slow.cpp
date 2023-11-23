// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF1.h for the primary calling header

#include "verilated.h"

#include "VF1___024root.h"

VL_ATTR_COLD void VF1___024root___initial__TOP__0(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->F1__DOT__reset_delay__DOT__count = 0U;
}

VL_ATTR_COLD void VF1___024root___settle__TOP__0(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->F1__DOT__cmd_seq = ((0U != vlSelf->F1__DOT__fsm__DOT__current_state) 
                                & ((8U != vlSelf->F1__DOT__fsm__DOT__current_state) 
                                   & (9U != vlSelf->F1__DOT__fsm__DOT__current_state)));
    vlSelf->F1__DOT__reset_delay__DOT__next_state = 
        ((0U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
          ? ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)
              ? 1U : vlSelf->F1__DOT__reset_delay__DOT__current_state)
          : ((1U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
              ? ((0U == (IData)(vlSelf->F1__DOT__reset_delay__DOT__count))
                  ? 2U : vlSelf->F1__DOT__reset_delay__DOT__current_state)
              : ((2U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
                  ? ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)
                      ? 3U : 0U) : ((3U == vlSelf->F1__DOT__reset_delay__DOT__current_state)
                                     ? ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)
                                         ? vlSelf->F1__DOT__reset_delay__DOT__current_state
                                         : 0U) : 0U))));
    vlSelf->F1__DOT__mux_out = ((IData)(vlSelf->F1__DOT__cmd_seq)
                                 ? (IData)(vlSelf->F1__DOT__mux1_out)
                                 : ((0U != vlSelf->F1__DOT__reset_delay__DOT__current_state) 
                                    & ((1U != vlSelf->F1__DOT__reset_delay__DOT__current_state) 
                                       & (2U == vlSelf->F1__DOT__reset_delay__DOT__current_state))));
    if (((((((((0U == vlSelf->F1__DOT__fsm__DOT__current_state) 
               | (1U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
              | (2U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
             | (3U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
            | (4U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
           | (5U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
          | (6U == vlSelf->F1__DOT__fsm__DOT__current_state)) 
         | (7U == vlSelf->F1__DOT__fsm__DOT__current_state))) {
        if ((0U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->F1__DOT__fsm__DOT__next_state = 
                ((IData)(vlSelf->trigger) ? 1U : 0U);
        } else if ((1U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->F1__DOT__fsm__DOT__next_state = 
                ((IData)(vlSelf->F1__DOT__mux_out) ? 2U
                  : 1U);
        } else if ((2U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->F1__DOT__fsm__DOT__next_state = 
                ((IData)(vlSelf->F1__DOT__mux_out) ? 3U
                  : 2U);
        } else if ((3U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->F1__DOT__fsm__DOT__next_state = 
                ((IData)(vlSelf->F1__DOT__mux_out) ? 4U
                  : 3U);
        } else if ((4U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->F1__DOT__fsm__DOT__next_state = 
                ((IData)(vlSelf->F1__DOT__mux_out) ? 5U
                  : 4U);
        } else if ((5U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->F1__DOT__fsm__DOT__next_state = 
                ((IData)(vlSelf->F1__DOT__mux_out) ? 6U
                  : 5U);
        } else if ((6U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->F1__DOT__fsm__DOT__next_state = 
                ((IData)(vlSelf->F1__DOT__mux_out) ? 7U
                  : 6U);
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->F1__DOT__fsm__DOT__next_state = 
                ((IData)(vlSelf->F1__DOT__mux_out) ? 8U
                  : 7U);
        }
    } else if ((8U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->F1__DOT__fsm__DOT__next_state = 9U;
    } else if ((9U == vlSelf->F1__DOT__fsm__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->F1__DOT__fsm__DOT__next_state = ((IData)(vlSelf->F1__DOT__mux_out)
                                                  ? 0U
                                                  : 9U);
    }
}

VL_ATTR_COLD void VF1___024root___eval_initial(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_lfsr = vlSelf->rst_lfsr;
    vlSelf->__Vclklast__TOP__rst_fsm = vlSelf->rst_fsm;
    VF1___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VF1___024root___eval_settle(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___eval_settle\n"); );
    // Body
    VF1___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VF1___024root___final(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___final\n"); );
}

VL_ATTR_COLD void VF1___024root___ctor_var_reset(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_tick = VL_RAND_RESET_I(1);
    vlSelf->rst_fsm = VL_RAND_RESET_I(1);
    vlSelf->rst_delay = VL_RAND_RESET_I(1);
    vlSelf->rst_lfsr = VL_RAND_RESET_I(1);
    vlSelf->en_lfsr = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->F1__DOT__mux1_out = VL_RAND_RESET_I(1);
    vlSelf->F1__DOT__mux_out = VL_RAND_RESET_I(1);
    vlSelf->F1__DOT__cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->F1__DOT__register__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->F1__DOT__clock_tick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->F1__DOT__reset_delay__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->F1__DOT__reset_delay__DOT__current_state = 0;
    vlSelf->F1__DOT__reset_delay__DOT__next_state = 0;
    vlSelf->F1__DOT__fsm__DOT__current_state = 0;
    vlSelf->F1__DOT__fsm__DOT__next_state = 0;
    vlSelf->__Vdly__F1__DOT__register__DOT__sreg = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
