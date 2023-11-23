// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VF1.h for the primary calling header

#ifndef VERILATED_VF1___024ROOT_H_
#define VERILATED_VF1___024ROOT_H_  // guard

#include "verilated.h"

class VF1__Syms;

class VF1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_fsm,0,0);
    VL_IN8(rst_lfsr,0,0);
    VL_IN8(rst_tick,0,0);
    VL_IN8(rst_delay,0,0);
    VL_IN8(en_lfsr,0,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ F1__DOT__mux1_out;
    CData/*0:0*/ F1__DOT__mux_out;
    CData/*0:0*/ F1__DOT__cmd_seq;
    CData/*6:0*/ F1__DOT__register__DOT__sreg;
    CData/*6:0*/ F1__DOT__reset_delay__DOT__count;
    CData/*6:0*/ __Vdly__F1__DOT__register__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_lfsr;
    CData/*0:0*/ __Vclklast__TOP__rst_fsm;
    VL_IN16(N,15,0);
    SData/*15:0*/ F1__DOT__clock_tick__DOT__count;
    IData/*31:0*/ F1__DOT__reset_delay__DOT__current_state;
    IData/*31:0*/ F1__DOT__reset_delay__DOT__next_state;
    IData/*31:0*/ F1__DOT__fsm__DOT__current_state;
    IData/*31:0*/ F1__DOT__fsm__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VF1__Syms* const vlSymsp;

    // CONSTRUCTORS
    VF1___024root(VF1__Syms* symsp, const char* name);
    ~VF1___024root();
    VL_UNCOPYABLE(VF1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
