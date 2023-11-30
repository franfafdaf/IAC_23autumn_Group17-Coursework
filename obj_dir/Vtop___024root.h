// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ top__DOT__Zero;
    CData/*1:0*/ top__DOT__ResultSrc;
    CData/*0:0*/ top__DOT__MemWrite;
    CData/*0:0*/ top__DOT__ALUSrcA;
    CData/*0:0*/ top__DOT__ALUSrcB;
    CData/*2:0*/ top__DOT__ImmSrc;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*2:0*/ top__DOT__ALUControl;
    CData/*0:0*/ top__DOT__LdSrc;
    CData/*0:0*/ top__DOT__StSrc;
    CData/*0:0*/ top__DOT__JalSrc;
    CData/*1:0*/ top__DOT__my_control_unit__DOT__ALUOp;
    CData/*0:0*/ top__DOT__my_control_unit__DOT__Branch;
    CData/*0:0*/ top__DOT__my_control_unit__DOT__Jump;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__ImmExt;
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__Instr;
    IData/*31:0*/ top__DOT__RD1;
    IData/*31:0*/ top__DOT__WriteData;
    IData/*31:0*/ top__DOT__ALUResult;
    IData/*31:0*/ top__DOT__my_pc_top__DOT__PC_Next;
    IData/*31:0*/ top__DOT__my_alu_top__DOT__SrcA;
    IData/*31:0*/ top__DOT__my_alu_top__DOT__SrcB;
    IData/*31:0*/ top__DOT__my_data_memory__DOT__corrected_WD;
    IData/*31:0*/ top__DOT__my_data_memory__DOT__read_data_internal;
    VlUnpacked<CData/*7:0*/, 4096> top__DOT__my_instr_mem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__my_reg_file__DOT__mem;
    VlUnpacked<CData/*7:0*/, 131072> top__DOT__my_data_memory__DOT__my_mem__DOT__data_array;
    VlUnpacked<IData/*31:0*/, 32> __Vchglast__TOP__top__DOT__my_reg_file__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
