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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ top__DOT__PCSrcE;
        CData/*2:0*/ top__DOT__funct3E;
        CData/*0:0*/ top__DOT__ZeroE;
        CData/*1:0*/ top__DOT__ResultSrcD;
        CData/*1:0*/ top__DOT__ResultSrcE;
        CData/*1:0*/ top__DOT__ResultSrcM;
        CData/*1:0*/ top__DOT__ResultSrcW;
        CData/*0:0*/ top__DOT__MemWriteD;
        CData/*0:0*/ top__DOT__MemWriteE;
        CData/*0:0*/ top__DOT__MemWriteM;
        CData/*0:0*/ top__DOT__ALUSrcAD;
        CData/*0:0*/ top__DOT__ALUSrcBD;
        CData/*0:0*/ top__DOT__ALUSrcAE;
        CData/*0:0*/ top__DOT__ALUSrcBE;
        CData/*2:0*/ top__DOT__ImmSrcD;
        CData/*0:0*/ top__DOT__RegWriteD;
        CData/*0:0*/ top__DOT__RegWriteE;
        CData/*0:0*/ top__DOT__RegWriteM;
        CData/*0:0*/ top__DOT__RegWriteW;
        CData/*2:0*/ top__DOT__ALUControlD;
        CData/*2:0*/ top__DOT__ALUControlE;
        CData/*0:0*/ top__DOT__LdSrcD;
        CData/*0:0*/ top__DOT__StSrcD;
        CData/*0:0*/ top__DOT__JalSrcD;
        CData/*0:0*/ top__DOT__LdSrcE;
        CData/*0:0*/ top__DOT__StSrcE;
        CData/*0:0*/ top__DOT__JalSrcE;
        CData/*0:0*/ top__DOT__LdSrcM;
        CData/*0:0*/ top__DOT__StSrcM;
        CData/*0:0*/ top__DOT__JumpD;
        CData/*0:0*/ top__DOT__JumpE;
        CData/*0:0*/ top__DOT__BranchD;
        CData/*0:0*/ top__DOT__BranchE;
        CData/*4:0*/ top__DOT__RdE;
        CData/*4:0*/ top__DOT__RdM;
        CData/*4:0*/ top__DOT__RdW;
        CData/*4:0*/ top__DOT__Rs1E;
        CData/*4:0*/ top__DOT__Rs2E;
        CData/*0:0*/ top__DOT__FlushE;
        CData/*1:0*/ top__DOT__my_control_unit__DOT__ALUOpD;
        CData/*1:0*/ top__DOT__my_hazardunit__DOT__ForwardAE;
        CData/*1:0*/ top__DOT__my_hazardunit__DOT__ForwardBE;
        CData/*0:0*/ top__DOT__my_hazardunit__DOT__lwStall;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rst;
        VL_OUT(a0,31,0);
        IData/*31:0*/ top__DOT__PC_PlusD;
        IData/*31:0*/ top__DOT__PC_PlusE;
        IData/*31:0*/ top__DOT__PC_PlusM;
        IData/*31:0*/ top__DOT__PC_PlusW;
        IData/*31:0*/ top__DOT__ImmExtD;
        IData/*31:0*/ top__DOT__ImmExtE;
        IData/*31:0*/ top__DOT__PCF;
        IData/*31:0*/ top__DOT__PCD;
        IData/*31:0*/ top__DOT__PCE;
        IData/*31:0*/ top__DOT__InstrD;
        IData/*31:0*/ top__DOT__RD1E;
        IData/*31:0*/ top__DOT__RD2E;
        IData/*31:0*/ top__DOT__ResultW;
        IData/*31:0*/ top__DOT__WriteDataM;
        IData/*31:0*/ top__DOT__ReadDataW;
        IData/*31:0*/ top__DOT__ALUResult;
    };
    struct {
        IData/*31:0*/ top__DOT__ALUResultM;
        IData/*31:0*/ top__DOT__ALUResultW;
        IData/*31:0*/ top__DOT__SrcA0E;
        IData/*31:0*/ top__DOT__SrcB0E;
        IData/*31:0*/ top__DOT__my_pc__DOT__PCF_Next;
        IData/*31:0*/ top__DOT__my_alu__DOT__SrcAE;
        IData/*31:0*/ top__DOT__my_alu__DOT__SrcBE;
        VlUnpacked<CData/*7:0*/, 4096> top__DOT__my_InstrD_mem__DOT__rom_array;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__my_reg_file__DOT__mem;
        VlUnpacked<CData/*7:0*/, 131072> top__DOT__my_data_memory__DOT__data_array;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

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
