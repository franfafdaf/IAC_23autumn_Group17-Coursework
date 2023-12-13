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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__my_cache__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__my_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__PCSrcE));
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__PC_PlusD),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__PC_PlusE),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__PC_PlusM),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__PC_PlusW),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__ImmExtD),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__ImmExtE),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__PCD),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__PCE),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__InstrD),32);
        bufp->chgCData(oldp+12,((0x7fU & vlSelf->top__DOT__InstrD)),7);
        bufp->chgCData(oldp+13,((7U & (vlSelf->top__DOT__InstrD 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__funct3E),3);
        bufp->chgBit(oldp+15,((1U & (vlSelf->top__DOT__InstrD 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__ZeroE));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__ResultSrcD),2);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__ResultSrcE),2);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__ResultSrcM),2);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__ResultSrcW),2);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__MemWriteD));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__MemWriteE));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__MemWriteM));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__ALUSrcAD));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__ALUSrcBD));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__ALUSrcAE));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__ALUSrcBE));
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__ImmSrcD),3);
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__RegWriteD));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__RegWriteE));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__RegWriteM));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__RegWriteW));
        bufp->chgCData(oldp+33,(((0U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                  ? ((1U == (7U & (vlSelf->top__DOT__InstrD 
                                                   >> 0xcU)))
                                      ? 7U : ((5U == 
                                               (7U 
                                                & (vlSelf->top__DOT__InstrD 
                                                   >> 0xcU)))
                                               ? 4U
                                               : ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 0U)))
                                  : ((1U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                      ? 1U : ((2U == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode))
                                                      ? 0U
                                                      : 1U)))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__InstrD 
                                                        >> 0xcU)))
                                                    ? 5U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 0xcU)))
                                                     ? 3U
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__InstrD 
                                                          >> 0xcU)))
                                                      ? 2U
                                                      : 0U))))
                                               : ((3U 
                                                   == (IData)(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD))
                                                   ? 
                                                  ((0x20U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 6U
                                                    : 0U)
                                                   : 0U))))),3);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__ALUControlE),3);
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__LdSrcD));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__StSrcD));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__JalSrcD));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__LdSrcE));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__StSrcE));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__JalSrcE));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__LdSrcM));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__StSrcM));
        bufp->chgCData(oldp+43,((0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+44,((0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+45,(((((vlSelf->top__DOT__ALUResultM 
                                    >> 5U) == ((0x1afU 
                                                >= 
                                                (0x1ffU 
                                                 & ((IData)(0x1bU) 
                                                    + 
                                                    ((IData)(0x36U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->top__DOT__ALUResultM 
                                                         >> 2U))))))
                                                ? (0x7ffffffU 
                                                   & (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x1bU) 
                                                            + 
                                                            ((IData)(0x36U) 
                                                             * 
                                                             (7U 
                                                              & (vlSelf->top__DOT__ALUResultM 
                                                                 >> 2U))))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->top__DOT__my_cache__DOT__tag[
                                                        (((IData)(0x1aU) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x1bU) 
                                                              + 
                                                              ((IData)(0x36U) 
                                                               * 
                                                               (7U 
                                                                & (vlSelf->top__DOT__ALUResultM 
                                                                   >> 2U)))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x1bU) 
                                                             + 
                                                             ((IData)(0x36U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->top__DOT__ALUResultM 
                                                                  >> 2U)))))))) 
                                                      | (vlSelf->top__DOT__my_cache__DOT__tag[
                                                         (0xfU 
                                                          & (((IData)(0x1bU) 
                                                              + 
                                                              ((IData)(0x36U) 
                                                               * 
                                                               (7U 
                                                                & (vlSelf->top__DOT__ALUResultM 
                                                                   >> 2U)))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x1bU) 
                                                             + 
                                                             ((IData)(0x36U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->top__DOT__ALUResultM 
                                                                  >> 2U))))))))
                                                : 0U)) 
                                  & ((IData)(vlSelf->top__DOT__my_cache__DOT__valid) 
                                     >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 (0xeU 
                                                  & (vlSelf->top__DOT__ALUResultM 
                                                     >> 1U))))))
                                  ? (((0U == (0x1fU 
                                              & ((0x1c0U 
                                                  & (vlSelf->top__DOT__ALUResultM 
                                                     << 4U)) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(vlSelf->top__DOT__my_cache__DOT__selectedWay) 
                                                     << 5U)))))
                                       ? 0U : (vlSelf->top__DOT__my_cache__DOT__data[
                                               (((IData)(0x1fU) 
                                                 + 
                                                 (0x1ffU 
                                                  & ((0x1c0U 
                                                      & (vlSelf->top__DOT__ALUResultM 
                                                         << 4U)) 
                                                     + 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->top__DOT__my_cache__DOT__selectedWay) 
                                                         << 5U))))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((0x1c0U 
                                                        & (vlSelf->top__DOT__ALUResultM 
                                                           << 4U)) 
                                                       + 
                                                       (0x3fU 
                                                        & ((IData)(vlSelf->top__DOT__my_cache__DOT__selectedWay) 
                                                           << 5U))))))) 
                                     | (vlSelf->top__DOT__my_cache__DOT__data[
                                        (0xfU & (((0x1c0U 
                                                   & (vlSelf->top__DOT__ALUResultM 
                                                      << 4U)) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(vlSelf->top__DOT__my_cache__DOT__selectedWay) 
                                                      << 5U))) 
                                                 >> 5U))] 
                                        >> (0x1fU & 
                                            ((0x1c0U 
                                              & (vlSelf->top__DOT__ALUResultM 
                                                 << 4U)) 
                                             + (0x3fU 
                                                & ((IData)(vlSelf->top__DOT__my_cache__DOT__selectedWay) 
                                                   << 5U))))))
                                  : ((IData)(vlSelf->top__DOT__LdSrcM)
                                      ? vlSelf->top__DOT__my_cache__DOT__data_array
                                     [(0x1ffffU & vlSelf->top__DOT__ALUResultM)]
                                      : ((vlSelf->top__DOT__my_cache__DOT__data_array
                                          [(0x1ffffU 
                                            & ((IData)(3U) 
                                               + vlSelf->top__DOT__ALUResultM))] 
                                          << 0x18U) 
                                         | ((vlSelf->top__DOT__my_cache__DOT__data_array
                                             [(0x1ffffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->top__DOT__ALUResultM))] 
                                             << 0x10U) 
                                            | ((vlSelf->top__DOT__my_cache__DOT__data_array
                                                [(0x1ffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->top__DOT__ALUResultM))] 
                                                << 8U) 
                                               | vlSelf->top__DOT__my_cache__DOT__data_array
                                               [(0x1ffffU 
                                                 & vlSelf->top__DOT__ALUResultM)])))))),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__RD1E),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__RD2E),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__ResultW),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__WriteDataM),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__ReadDataW),32);
        bufp->chgIData(oldp+51,((vlSelf->top__DOT__InstrD 
                                 >> 7U)),25);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__ALUResult),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__ALUResultM),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__ALUResultW),32);
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__JumpD));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__JumpE));
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__BranchD));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__BranchE));
        bufp->chgCData(oldp+59,((0x1fU & (vlSelf->top__DOT__InstrD 
                                          >> 7U))),5);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__RdE),5);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__RdM),5);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__RdW),5);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__Rs1E),5);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__Rs2E),5);
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__StallD));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__FlushE));
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__SrcA0E),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__SrcB0E),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__my_alu__DOT__SrcAE),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__my_alu__DOT__SrcBE),32);
        bufp->chgSData(oldp+71,(vlSelf->top__DOT__my_cache__DOT__valid),16);
        bufp->chgWData(oldp+72,(vlSelf->top__DOT__my_cache__DOT__tag),432);
        bufp->chgWData(oldp+86,(vlSelf->top__DOT__my_cache__DOT__data),512);
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__my_cache__DOT__lru),8);
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__my_cache__DOT__selectedWay));
        bufp->chgBit(oldp+104,((((vlSelf->top__DOT__ALUResultM 
                                  >> 5U) == ((0x1afU 
                                              >= (0x1ffU 
                                                  & ((IData)(0x1bU) 
                                                     + 
                                                     ((IData)(0x36U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->top__DOT__ALUResultM 
                                                          >> 2U))))))
                                              ? (0x7ffffffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x1bU) 
                                                          + 
                                                          ((IData)(0x36U) 
                                                           * 
                                                           (7U 
                                                            & (vlSelf->top__DOT__ALUResultM 
                                                               >> 2U))))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->top__DOT__my_cache__DOT__tag[
                                                      (((IData)(0x1aU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x1bU) 
                                                            + 
                                                            ((IData)(0x36U) 
                                                             * 
                                                             (7U 
                                                              & (vlSelf->top__DOT__ALUResultM 
                                                                 >> 2U)))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x1bU) 
                                                           + 
                                                           ((IData)(0x36U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->top__DOT__ALUResultM 
                                                                >> 2U)))))))) 
                                                    | (vlSelf->top__DOT__my_cache__DOT__tag[
                                                       (0xfU 
                                                        & (((IData)(0x1bU) 
                                                            + 
                                                            ((IData)(0x36U) 
                                                             * 
                                                             (7U 
                                                              & (vlSelf->top__DOT__ALUResultM 
                                                                 >> 2U)))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x1bU) 
                                                           + 
                                                           ((IData)(0x36U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->top__DOT__ALUResultM 
                                                                >> 2U))))))))
                                              : 0U)) 
                                & ((IData)(vlSelf->top__DOT__my_cache__DOT__valid) 
                                   >> (0xfU & ((IData)(1U) 
                                               + (0xeU 
                                                  & (vlSelf->top__DOT__ALUResultM 
                                                     >> 1U))))))));
        bufp->chgIData(oldp+105,((vlSelf->top__DOT__ALUResultM 
                                  >> 5U)),27);
        bufp->chgCData(oldp+106,((7U & (vlSelf->top__DOT__ALUResultM 
                                        >> 2U))),3);
        bufp->chgCData(oldp+107,(vlSelf->top__DOT__my_control_unit__DOT__ALUOpD),2);
        bufp->chgCData(oldp+108,(vlSelf->top__DOT__my_control_unit__DOT__ALUDecode),2);
        bufp->chgBit(oldp+109,((1U & (vlSelf->top__DOT__InstrD 
                                      >> 5U))));
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__my_hazardunit__DOT__ForwardAE),2);
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__my_hazardunit__DOT__ForwardBE),2);
        bufp->chgBit(oldp+112,((1U & (IData)(vlSelf->top__DOT__ResultSrcE))));
        bufp->chgIData(oldp+113,(((IData)(vlSelf->top__DOT__JalSrcE)
                                   ? (vlSelf->top__DOT__ImmExtE 
                                      + vlSelf->top__DOT__PCE)
                                   : vlSelf->top__DOT__RD1E)),32);
        bufp->chgIData(oldp+114,((vlSelf->top__DOT__ImmExtE 
                                  + vlSelf->top__DOT__PCE)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__my_reg_file__DOT__register[0]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__my_reg_file__DOT__register[1]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__my_reg_file__DOT__register[2]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__my_reg_file__DOT__register[3]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__my_reg_file__DOT__register[4]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__my_reg_file__DOT__register[5]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__my_reg_file__DOT__register[6]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__my_reg_file__DOT__register[7]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__my_reg_file__DOT__register[8]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__my_reg_file__DOT__register[9]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__my_reg_file__DOT__register[10]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__my_reg_file__DOT__register[11]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__my_reg_file__DOT__register[12]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__my_reg_file__DOT__register[13]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__my_reg_file__DOT__register[14]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__my_reg_file__DOT__register[15]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__my_reg_file__DOT__register[16]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__my_reg_file__DOT__register[17]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__my_reg_file__DOT__register[18]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__my_reg_file__DOT__register[19]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__my_reg_file__DOT__register[20]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__my_reg_file__DOT__register[21]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__my_reg_file__DOT__register[22]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__my_reg_file__DOT__register[23]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__my_reg_file__DOT__register[24]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__my_reg_file__DOT__register[25]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__my_reg_file__DOT__register[26]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__my_reg_file__DOT__register[27]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__my_reg_file__DOT__register[28]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__my_reg_file__DOT__register[29]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__my_reg_file__DOT__register[30]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__my_reg_file__DOT__register[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+147,(((IData)(4U) + vlSelf->top__DOT__PCF)),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__PCF),32);
        bufp->chgSData(oldp+149,((0xfffU & vlSelf->top__DOT__PCF)),12);
        bufp->chgIData(oldp+150,(((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                   [(0xfffU & ((IData)(3U) 
                                               + vlSelf->top__DOT__PCF))] 
                                   << 0x18U) | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                 [(0xfffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__PCF))] 
                                                 << 0x10U) 
                                                | ((vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                    [
                                                    (0xfffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->top__DOT__PCF))] 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__my_InstrD_mem__DOT__rom_array
                                                   [
                                                   (0xfffU 
                                                    & vlSelf->top__DOT__PCF)])))),32);
    }
    bufp->chgBit(oldp+151,(vlSelf->clk));
    bufp->chgBit(oldp+152,(vlSelf->rst));
    bufp->chgIData(oldp+153,(vlSelf->a0),32);
    bufp->chgIData(oldp+154,(vlSelf->top__DOT__my_reg_file__DOT__register
                             [(0x1fU & (vlSelf->top__DOT__InstrD 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+155,(vlSelf->top__DOT__my_reg_file__DOT__register
                             [(0x1fU & (vlSelf->top__DOT__InstrD 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+156,(((IData)(vlSelf->top__DOT__PCSrcE)
                               ? ((IData)(vlSelf->top__DOT__JalSrcE)
                                   ? (vlSelf->top__DOT__ImmExtE 
                                      + vlSelf->top__DOT__PCE)
                                   : vlSelf->top__DOT__RD1E)
                               : ((IData)(4U) + vlSelf->top__DOT__PCF))),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
