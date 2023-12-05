// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
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
    CData/*1:0*/ top__DOT__my_control_unit__DOT__ALU_decode__DOT__decode;
    CData/*7:0*/ top__DOT__my_data_memory__DOT____VdfgTmp_hac5405b8__0;
    CData/*7:0*/ __VdfgTmp_h2214dd4b__0;
    CData/*7:0*/ __VdfgTmp_h23e32fae__0;
    CData/*7:0*/ __VdfgTmp_h95d868b5__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ __VdfgTmp_hbf3bde7e__0;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__ImmExt;
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__RD1;
    IData/*31:0*/ top__DOT__WriteData;
    IData/*24:0*/ top__DOT__Imm;
    IData/*31:0*/ top__DOT__ALUResult;
    IData/*31:0*/ top__DOT__my_pc_top__DOT__PC_Next;
    IData/*31:0*/ top__DOT__my_alu_top__DOT__SrcA;
    IData/*31:0*/ top__DOT__my_alu_top__DOT__SrcB;
    IData/*23:0*/ __VdfgTmp_hdd528194__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4096> top__DOT__my_instr_mem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__my_reg_file__DOT__mem;
    VlUnpacked<CData/*7:0*/, 131072> top__DOT__my_data_memory__DOT__data_array;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
