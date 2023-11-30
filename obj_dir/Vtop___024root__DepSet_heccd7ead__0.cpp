// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v4;
    // Body
    __Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 = 0U;
    __Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v4 = 0U;
    __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v1 = 0U;
    if (((IData)(vlSelf->top__DOT__MemWrite) & (~ (IData)(vlSelf->top__DOT__StSrc)))) {
        __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 
            = (0xffU & vlSelf->top__DOT__WriteData);
        __Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0 
            = (0x1ffffU & vlSelf->top__DOT__ALUResult);
        __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1 
            = (0xffU & (vlSelf->top__DOT__WriteData 
                        >> 8U));
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1 
            = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResult));
        __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2 
            = (0xffU & (vlSelf->top__DOT__WriteData 
                        >> 0x10U));
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2 
            = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResult));
        __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3 
            = (vlSelf->top__DOT__WriteData >> 0x18U);
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3 
            = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResult));
    } else if (((IData)(vlSelf->top__DOT__MemWrite) 
                & (IData)(vlSelf->top__DOT__StSrc))) {
        __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v4 
            = (0xffU & vlSelf->top__DOT__WriteData);
        __Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v4 = 1U;
        __Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v4 
            = (0x1ffffU & vlSelf->top__DOT__ALUResult);
    }
    if (vlSelf->top__DOT__RegWrite) {
        __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v1 
            = ((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                ? vlSelf->top__DOT__ALUResult : ((1U 
                                                  == (IData)(vlSelf->top__DOT__ResultSrc))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__LdSrc)
                                                   ? 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__my_data_memory__DOT__read_data_internal)
                                                   : vlSelf->top__DOT__my_data_memory__DOT__read_data_internal)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__ResultSrc))
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__PC)
                                                   : 0U)));
        __Vdlyvset__top__DOT__my_reg_file__DOT__mem__v1 = 1U;
        __Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v1 
            = (0x1fU & (vlSelf->top__DOT__Instr >> 7U));
    }
    if (__Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0) {
        vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v0;
        vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v1;
        vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v2;
        vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v3;
    }
    if (__Vdlyvset__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v4) {
        vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array[__Vdlyvdim0__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v4] 
            = __Vdlyvval__top__DOT__my_data_memory__DOT__my_mem__DOT__data_array__v4;
    }
    vlSelf->top__DOT__my_reg_file__DOT__mem[0U] = 0U;
    if (__Vdlyvset__top__DOT__my_reg_file__DOT__mem__v1) {
        vlSelf->top__DOT__my_reg_file__DOT__mem[__Vdlyvdim0__top__DOT__my_reg_file__DOT__mem__v1] 
            = __Vdlyvval__top__DOT__my_reg_file__DOT__mem__v1;
    }
    vlSelf->a0 = vlSelf->top__DOT__my_reg_file__DOT__mem
        [0xaU];
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
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_h9c696dfc_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    // Body
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__my_pc_top__DOT__PC_Next);
    vlSelf->top__DOT__Instr = ((vlSelf->top__DOT__my_instr_mem__DOT__rom_array
                                [(0xfffU & vlSelf->top__DOT__PC)] 
                                << 0x18U) | ((vlSelf->top__DOT__my_instr_mem__DOT__rom_array
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelf->top__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__my_instr_mem__DOT__rom_array
                                                 [(0xfffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__my_instr_mem__DOT__rom_array
                                                [(0xfffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->top__DOT__PC))])));
    vlSelf->top__DOT__WriteData = vlSelf->top__DOT__my_reg_file__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__Instr >> 0x14U))];
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__my_reg_file__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__Instr >> 0xfU))];
    __Vtableidx1 = ((0x380U & (vlSelf->top__DOT__Instr 
                               >> 5U)) | (0x7fU & vlSelf->top__DOT__Instr));
    vlSelf->top__DOT__my_control_unit__DOT__Branch 
        = Vtop__ConstPool__TABLE_hff092405_0[__Vtableidx1];
    vlSelf->top__DOT__my_control_unit__DOT__Jump = 
        Vtop__ConstPool__TABLE_hacf877fb_0[__Vtableidx1];
    vlSelf->top__DOT__ResultSrc = Vtop__ConstPool__TABLE_hf6daef67_0
        [__Vtableidx1];
    vlSelf->top__DOT__MemWrite = Vtop__ConstPool__TABLE_h45afa79b_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrcA = Vtop__ConstPool__TABLE_hbad56271_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUSrcB = Vtop__ConstPool__TABLE_h17877086_0
        [__Vtableidx1];
    vlSelf->top__DOT__ImmSrc = Vtop__ConstPool__TABLE_h2aa7613e_0
        [__Vtableidx1];
    vlSelf->top__DOT__RegWrite = Vtop__ConstPool__TABLE_h2b8877be_0
        [__Vtableidx1];
    vlSelf->top__DOT__my_control_unit__DOT__ALUOp = 
        Vtop__ConstPool__TABLE_h4191d61c_0[__Vtableidx1];
    vlSelf->top__DOT__LdSrc = Vtop__ConstPool__TABLE_h20175f08_0
        [__Vtableidx1];
    vlSelf->top__DOT__StSrc = Vtop__ConstPool__TABLE_h789adb00_0
        [__Vtableidx1];
    vlSelf->top__DOT__JalSrc = Vtop__ConstPool__TABLE_hf246a450_0
        [__Vtableidx1];
    vlSelf->top__DOT__my_alu_top__DOT__SrcA = ((IData)(vlSelf->top__DOT__ALUSrcA)
                                                ? vlSelf->top__DOT__PC
                                                : vlSelf->top__DOT__RD1);
    __Vtableidx2 = ((0x80U & (vlSelf->top__DOT__Instr 
                              << 2U)) | (((0x40U & 
                                           (vlSelf->top__DOT__Instr 
                                            << 1U)) 
                                          | (0x20U 
                                             & (vlSelf->top__DOT__Instr 
                                                >> 0x19U))) 
                                         | ((0x1cU 
                                             & (vlSelf->top__DOT__Instr 
                                                >> 0xaU)) 
                                            | (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__ALUControl = Vtop__ConstPool__TABLE_h9c696dfc_0
        [__Vtableidx2];
    vlSelf->top__DOT__ImmExt = ((4U & (IData)(vlSelf->top__DOT__ImmSrc))
                                 ? ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                     ? 0U : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                              ? 0U : 
                                             (0xfffff000U 
                                              & vlSelf->top__DOT__Instr)))
                                 : ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                     ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | ((0xff000U 
                                                & vlSelf->top__DOT__Instr) 
                                               | ((0x800U 
                                                   & (vlSelf->top__DOT__Instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->top__DOT__Instr 
                                                        >> 0x14U)))))
                                         : (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__Instr 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__Instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__Instr 
                                                        >> 7U))))))
                                     : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->top__DOT__Instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->top__DOT__Instr 
                                                     >> 7U))))
                                         : (((- (IData)(
                                                        (vlSelf->top__DOT__Instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->top__DOT__Instr 
                                               >> 0x14U)))));
    vlSelf->top__DOT__my_alu_top__DOT__SrcB = ((IData)(vlSelf->top__DOT__ALUSrcB)
                                                ? vlSelf->top__DOT__ImmExt
                                                : vlSelf->top__DOT__WriteData);
    vlSelf->top__DOT__ALUResult = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       + vlSelf->top__DOT__my_alu_top__DOT__SrcB);
    }
    if ((1U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       - vlSelf->top__DOT__my_alu_top__DOT__SrcB);
    }
    if ((2U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       & vlSelf->top__DOT__my_alu_top__DOT__SrcB);
    }
    if ((3U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       | vlSelf->top__DOT__my_alu_top__DOT__SrcB);
    }
    if ((4U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       >> (0x1fU & vlSelf->top__DOT__my_alu_top__DOT__SrcB));
    }
    if ((5U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = ((vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                        < vlSelf->top__DOT__my_alu_top__DOT__SrcB)
                                        ? 1U : 0U);
    }
    if ((6U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = vlSelf->top__DOT__my_alu_top__DOT__SrcB;
    }
    if ((7U == (IData)(vlSelf->top__DOT__ALUControl))) {
        vlSelf->top__DOT__ALUResult = (vlSelf->top__DOT__my_alu_top__DOT__SrcA 
                                       << (0x1fU & vlSelf->top__DOT__my_alu_top__DOT__SrcB));
    }
    vlSelf->top__DOT__Zero = (0U == vlSelf->top__DOT__ALUResult);
    vlSelf->top__DOT__my_data_memory__DOT__read_data_internal 
        = ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
            [(0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResult))] 
            << 0x18U) | ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                          [(0x1ffffU & ((IData)(2U) 
                                        + vlSelf->top__DOT__ALUResult))] 
                          << 0x10U) | ((vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + vlSelf->top__DOT__ALUResult))] 
                                        << 8U) | vlSelf->top__DOT__my_data_memory__DOT__my_mem__DOT__data_array
                                       [(0x1ffffU & vlSelf->top__DOT__ALUResult)])));
    vlSelf->top__DOT__my_pc_top__DOT__PC_Next = (((IData)(vlSelf->top__DOT__my_control_unit__DOT__Jump) 
                                                  | ((((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                                       & (IData)(vlSelf->top__DOT__Zero)) 
                                                      & (0U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->top__DOT__Instr))) 
                                                     | (((IData)(vlSelf->top__DOT__my_control_unit__DOT__Branch) 
                                                         & (~ (IData)(vlSelf->top__DOT__Zero))) 
                                                        & (0x1000U 
                                                           == 
                                                           (0x7000U 
                                                            & vlSelf->top__DOT__Instr)))))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__JalSrc)
                                                   ? 
                                                  (vlSelf->top__DOT__PC 
                                                   + vlSelf->top__DOT__ImmExt)
                                                   : vlSelf->top__DOT__RD1)
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
