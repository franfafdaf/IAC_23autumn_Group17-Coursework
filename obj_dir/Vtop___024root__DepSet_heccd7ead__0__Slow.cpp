// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hfc8f3e90__0;
    VlWide<3>/*95:0*/ __Vtemp_h2553e7c1__0;
    // Body
    __Vtemp_hfc8f3e90__0[0U] = 0x2e6d656dU;
    __Vtemp_hfc8f3e90__0[1U] = 0x6d656d31U;
    __Vtemp_hfc8f3e90__0[2U] = 0x6e737472U;
    __Vtemp_hfc8f3e90__0[3U] = 0x69U;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hfc8f3e90__0)
                 ,  &(vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array)
                 , 0, ~0ULL);
    __Vtemp_h2553e7c1__0[0U] = 0x2e6d656dU;
    __Vtemp_h2553e7c1__0[1U] = 0x7369616eU;
    __Vtemp_h2553e7c1__0[2U] = 0x67617573U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h2553e7c1__0)
                 ,  &(vlSelf->top__DOT__my_data_memory__DOT__data_array)
                 , 0x10000U, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hff092405_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hacf877fb_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_hf6daef67_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h45afa79b_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hbad56271_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h17877086_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_h2aa7613e_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h2b8877be_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_h4191d61c_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h20175f08_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h789adb00_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hf246a450_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_hf7f745e5_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    // Body
    vlSelf->top__DOT__ResultW = ((0U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                  ? vlSelf->top__DOT__ALUResultW
                                  : ((1U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                      ? vlSelf->top__DOT__ReadDataW
                                      : ((2U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                          ? vlSelf->top__DOT__PC_PlusW
                                          : 0U)));
    vlSelf->a0 = vlSelf->top__DOT__my_reg_file__DOT__mem
        [0xaU];
    vlSelf->top__DOT__my_hazardunit__DOT__lwStall = 
        ((IData)(vlSelf->top__DOT__ResultSrcE) & ((
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSelf->top__DOT__RdE)) 
                                                  | ((0x1fU 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 0x14U)) 
                                                     == (IData)(vlSelf->top__DOT__RdE))));
    __Vtableidx1 = ((0x380U & (vlSelf->top__DOT__InstrD 
                               >> 5U)) | (0x7fU & vlSelf->top__DOT__InstrD));
    vlSelf->top__DOT__BranchD = Vtop__ConstPool__TABLE_hff092405_0
        [__Vtableidx1];
    vlSelf->top__DOT__JumpD = Vtop__ConstPool__TABLE_hacf877fb_0
        [__Vtableidx1];
    vlSelf->top__DOT__ResultSrcD = Vtop__ConstPool__TABLE_hf6daef67_0
        [__Vtableidx1];
    vlSelf->top__DOT__MemWriteD = Vtop__ConstPool__TABLE_h45afa79b_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrcAD = Vtop__ConstPool__TABLE_hbad56271_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrcBD = Vtop__ConstPool__TABLE_h17877086_0
        [__Vtableidx1];
    vlSelf->top__DOT__ImmSrcD = Vtop__ConstPool__TABLE_h2aa7613e_0
        [__Vtableidx1];
    vlSelf->top__DOT__RegWriteD = Vtop__ConstPool__TABLE_h2b8877be_0
        [__Vtableidx1];
    vlSelf->top__DOT__my_control_unit__DOT__ALUOpD 
        = Vtop__ConstPool__TABLE_h4191d61c_0[__Vtableidx1];
    vlSelf->top__DOT__LdSrcD = Vtop__ConstPool__TABLE_h20175f08_0
        [__Vtableidx1];
    vlSelf->top__DOT__StSrcD = Vtop__ConstPool__TABLE_h789adb00_0
        [__Vtableidx1];
    vlSelf->top__DOT__JalSrcD = Vtop__ConstPool__TABLE_hf246a450_0
        [__Vtableidx1];
    vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE 
        = (((((IData)(vlSelf->top__DOT__Rs1E) == (IData)(vlSelf->top__DOT__RdM)) 
             & (IData)(vlSelf->top__DOT__RegWriteM)) 
            & (0U != (IData)(vlSelf->top__DOT__Rs1E)))
            ? 2U : (((((IData)(vlSelf->top__DOT__Rs1E) 
                       == (IData)(vlSelf->top__DOT__RdW)) 
                      & (IData)(vlSelf->top__DOT__RegWriteW)) 
                     & (0U != (IData)(vlSelf->top__DOT__Rs1E)))
                     ? 1U : 0U));
    vlSelf->top__DOT__SrcA0E = ((0U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE))
                                 ? vlSelf->top__DOT__RD1E
                                 : ((1U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE))
                                     ? vlSelf->top__DOT__ResultW
                                     : ((2U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE))
                                         ? vlSelf->top__DOT__ALUResultM
                                         : 0U)));
    vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE 
        = (((((IData)(vlSelf->top__DOT__Rs2E) == (IData)(vlSelf->top__DOT__RdM)) 
             & (IData)(vlSelf->top__DOT__RegWriteM)) 
            & (0U != (IData)(vlSelf->top__DOT__Rs2E)))
            ? 2U : (((((IData)(vlSelf->top__DOT__Rs2E) 
                       == (IData)(vlSelf->top__DOT__RdW)) 
                      & (IData)(vlSelf->top__DOT__RegWriteW)) 
                     & (0U != (IData)(vlSelf->top__DOT__Rs2E)))
                     ? 1U : 0U));
    vlSelf->top__DOT__SrcB0E = ((0U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE))
                                 ? vlSelf->top__DOT__RD2E
                                 : ((1U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE))
                                     ? vlSelf->top__DOT__ResultW
                                     : ((2U == (IData)(vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE))
                                         ? vlSelf->top__DOT__ALUResultM
                                         : 0U)));
    vlSelf->top__DOT__ImmExtD = ((4U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                  ? ((2U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                      ? 0U : ((1U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                               ? 0U
                                               : (0xfffff000U 
                                                  & vlSelf->top__DOT__InstrD)))
                                  : ((2U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                      ? ((1U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->top__DOT__InstrD) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 0x14U)))))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__InstrD 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 7U))))))
                                      : ((1U & (IData)(vlSelf->top__DOT__ImmSrcD))
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->top__DOT__InstrD 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 7U))))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->top__DOT__InstrD 
                                                >> 0x14U)))));
    __Vtableidx2 = ((0x80U & (vlSelf->top__DOT__InstrD 
                              << 2U)) | (((0x40U & 
                                           (vlSelf->top__DOT__InstrD 
                                            << 1U)) 
                                          | (0x20U 
                                             & (vlSelf->top__DOT__InstrD 
                                                >> 0x19U))) 
                                         | ((0x1cU 
                                             & (vlSelf->top__DOT__InstrD 
                                                >> 0xaU)) 
                                            | (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))));
    vlSelf->top__DOT__ALUControlD = Vtop__ConstPool__TABLE_hf7f745e5_0
        [__Vtableidx2];
    vlSelf->top__DOT__my_alu__DOT__SrcAE = ((IData)(vlSelf->top__DOT__ALUSrcAE)
                                             ? vlSelf->top__DOT__PCE
                                             : vlSelf->top__DOT__SrcA0E);
    vlSelf->top__DOT__my_alu__DOT__SrcBE = ((IData)(vlSelf->top__DOT__ALUSrcBE)
                                             ? vlSelf->top__DOT__ImmExtE
                                             : vlSelf->top__DOT__SrcB0E);
    vlSelf->top__DOT__ALUResult = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       + vlSelf->top__DOT__my_alu__DOT__SrcBE);
    }
    if ((1U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       - vlSelf->top__DOT__my_alu__DOT__SrcBE);
    }
    if ((2U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       & vlSelf->top__DOT__my_alu__DOT__SrcBE);
    }
    if ((3U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       | vlSelf->top__DOT__my_alu__DOT__SrcBE);
    }
    if ((4U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       >> (0x1fU & vlSelf->top__DOT__my_alu__DOT__SrcBE));
    }
    if ((5U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       ^ vlSelf->top__DOT__my_alu__DOT__SrcBE);
    }
    if ((6U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = vlSelf->top__DOT__my_alu__DOT__SrcBE;
    }
    if ((7U == (IData)(vlSelf->top__DOT__ALUControlE))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu__DOT__SrcAE 
                                       << (0x1fU & vlSelf->top__DOT__my_alu__DOT__SrcBE));
    }
    vlSelf->top__DOT__ZeroE = (0U == vlSelf->top__DOT__ALUResult);
    vlSelf->top__DOT__PCSrcE = ((IData)(vlSelf->top__DOT__JumpE) 
                                | ((((IData)(vlSelf->top__DOT__BranchE) 
                                     & (IData)(vlSelf->top__DOT__ZeroE)) 
                                    & (0U == (IData)(vlSelf->top__DOT__funct3E))) 
                                   | (((IData)(vlSelf->top__DOT__BranchE) 
                                       & (~ (IData)(vlSelf->top__DOT__ZeroE))) 
                                      & (1U == (IData)(vlSelf->top__DOT__funct3E)))));
    vlSelf->top__DOT__FlushE = ((IData)(vlSelf->top__DOT__my_hazardunit__DOT__lwStall) 
                                | (IData)(vlSelf->top__DOT__PCSrcE));
    vlSelf->top__DOT__my_pc__DOT__PCF_Next = ((IData)(vlSelf->top__DOT__PCSrcE)
                                               ? ((IData)(vlSelf->top__DOT__JalSrcE)
                                                   ? 
                                                  (vlSelf->top__DOT__PCE 
                                                   + vlSelf->top__DOT__ImmExtE)
                                                   : vlSelf->top__DOT__RD1E)
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__PCF));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC_PlusD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_PlusE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_PlusM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_PlusW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmExtD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmExtE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__funct3E = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ZeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__MemWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcAD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcBD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcAE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcBE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ImmSrcD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUControlD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ALUControlE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__LdSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__StSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JalSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LdSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__StSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JalSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LdSrcM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__StSrcM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__FlushE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__SrcA0E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SrcB0E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_pc__DOT__PCF_Next = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__my_control_unit__DOT__ALUOpD = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__my_reg_file__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__my_alu__DOT__SrcAE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_alu__DOT__SrcBE = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__my_data_memory__DOT__data_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__my_hazardunit__DOT__lwStall = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
