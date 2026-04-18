// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb__DOT__file_pointer;
    tb__DOT__file_pointer = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6c6f67U;
    __Vtemp_1[1U] = 0x6f64656cU;
    __Vtemp_1[2U] = 0x6dU;
    tb__DOT__file_pointer = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                                        , std::string{"w"});
    ;
    co_await vlSelfRef.__VdlySched.delay(0xfa0ULL, 
                                         nullptr, "tb/tb.sv", 
                                         40);
    while (1U) {
        if (VL_UNLIKELY((vlSelfRef.tb__DOT__rstn))) {
            if (VL_UNLIKELY(((0U == (IData)(vlSelfRef.tb__DOT__reg_addr))))) {
                VL_FWRITEF_NX(tb__DOT__file_pointer,"0x%8x (0x%8x)",0,
                              32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg,
                              32,vlSelfRef.tb__DOT__instr);
                ++(vlSymsp->__Vcoverage[266]);
            } else {
                if ((9U < (IData)(vlSelfRef.tb__DOT__reg_addr))) {
                    VL_FWRITEF_NX(tb__DOT__file_pointer,"0x%8x (0x%8x) x%0# 0x%8x",0,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg,
                                  32,vlSelfRef.tb__DOT__instr,
                                  5,(IData)(vlSelfRef.tb__DOT__reg_addr),
                                  32,vlSelfRef.tb__DOT__reg_data);
                    ++(vlSymsp->__Vcoverage[264]);
                } else {
                    VL_FWRITEF_NX(tb__DOT__file_pointer,"0x%8x (0x%8x) x%0#  0x%8x",0,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg,
                                  32,vlSelfRef.tb__DOT__instr,
                                  5,(IData)(vlSelfRef.tb__DOT__reg_addr),
                                  32,vlSelfRef.tb__DOT__reg_data);
                    ++(vlSymsp->__Vcoverage[265]);
                }
                ++(vlSymsp->__Vcoverage[267]);
            }
            if (VL_UNLIKELY((vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w))) {
                VL_FWRITEF_NX(tb__DOT__file_pointer," mem 0x%8x 0x%8x",0,
                              32,vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w,
                              32,vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word);
                ++(vlSymsp->__Vcoverage[268]);
            } else {
                ++(vlSymsp->__Vcoverage[269]);
            }
            VL_FWRITEF_NX(tb__DOT__file_pointer,"\n",0);
            co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                                 nullptr, 
                                                 "tb/tb.sv", 
                                                 56);
            ++(vlSymsp->__Vcoverage[270]);
        } else {
            co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                                 nullptr, 
                                                 "tb/tb.sv", 
                                                 57);
            ++(vlSymsp->__Vcoverage[271]);
        }
        ++(vlSymsp->__Vcoverage[272]);
    }
    ++(vlSymsp->__Vcoverage[273]);
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSelfRef.tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "tb/tb.sv", 
                                             63);
        vlSelfRef.tb__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "tb/tb.sv", 
                                             65);
        ++(vlSymsp->__Vcoverage[274]);
    }
    ++(vlSymsp->__Vcoverage[275]);
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__rstn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xfa0ULL, 
                                         nullptr, "tb/tb.sv", 
                                         69);
    vlSelfRef.tb__DOT__rstn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3d0900ULL, 
                                         nullptr, "tb/tb.sv", 
                                         71);
    vlSelfRef.tb__DOT__addr = 0U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    ++(vlSymsp->__Vcoverage[276]);
    vlSelfRef.tb__DOT__addr = 1U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    ++(vlSymsp->__Vcoverage[276]);
    vlSelfRef.tb__DOT__addr = 2U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    ++(vlSymsp->__Vcoverage[276]);
    vlSelfRef.tb__DOT__addr = 3U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    ++(vlSymsp->__Vcoverage[276]);
    vlSelfRef.tb__DOT__addr = 4U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    ++(vlSymsp->__Vcoverage[276]);
    vlSelfRef.tb__DOT__addr = 5U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    ++(vlSymsp->__Vcoverage[276]);
    vlSelfRef.tb__DOT__addr = 6U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    ++(vlSymsp->__Vcoverage[276]);
    vlSelfRef.tb__DOT__addr = 7U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    ++(vlSymsp->__Vcoverage[276]);
    vlSelfRef.tb__DOT__addr = 8U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    ++(vlSymsp->__Vcoverage[276]);
    vlSelfRef.tb__DOT__addr = 9U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    ++(vlSymsp->__Vcoverage[276]);
    VL_FINISH_MT("tb/tb.sv", 76, "");
    ++(vlSymsp->__Vcoverage[277]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb__DOT__rstn)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rstn__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rstn__0 
        = vlSelfRef.tb__DOT__rstn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb__DOT__rstn) ^ (IData)(vlSelfRef.tb__DOT____Vtogcov__update))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.tb__DOT____Vtogcov__update = vlSelfRef.tb__DOT__rstn;
    }
    if (((IData)(vlSelfRef.tb__DOT__clk) ^ (IData)(vlSelfRef.tb__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.tb__DOT____Vtogcov__clk = vlSelfRef.tb__DOT__clk;
    }
    if ((1U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffffeU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (1U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((2U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffffdU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (2U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((4U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffffbU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (4U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((8U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffff7U 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (8U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffffefU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x10U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffffdfU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x20U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffffbfU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x40U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffff7fU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x80U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffeffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x100U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffdffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x200U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffbffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x400U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffff7ffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x800U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffefffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x1000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffdfffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x2000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffbfffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x4000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffff7fffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x8000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffeffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x10000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffdffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x20000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffbffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x40000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfff7ffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x80000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffefffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x100000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffdfffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x200000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffbfffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x400000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xff7fffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x800000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfeffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x1000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfdffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x2000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfbffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x4000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xf7ffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x8000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xefffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x10000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xdfffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x20000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xbfffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x40000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if (((vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0x7fffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x80000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    vlSelfRef.tb__DOT__data = vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
        [(0x7ffU & (vlSelfRef.tb__DOT__addr >> 2U))];
    if ((1U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffffeU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (1U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((2U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffffdU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (2U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((4U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffffbU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (4U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((8U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffff7U 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (8U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffffefU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x10U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffffdfU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x20U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffffbfU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x40U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffff7fU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x80U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffeffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x100U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffdffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x200U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffbffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x400U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffff7ffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x800U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffefffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x1000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffdfffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x2000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffbfffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x4000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffff7fffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x8000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffeffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x10000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffdffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x20000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffbffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x40000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfff7ffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x80000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffefffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x100000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffdfffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x200000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffbfffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x400000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xff7fffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x800000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfeffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x1000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfdffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x2000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfbffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x4000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xf7ffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x8000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xefffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x10000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xdfffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x20000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xbfffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x40000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if (((vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0x7fffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x80000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb__DOT__i_core_model__DOT__data_mem__v0;
    __VdlyVal__tb__DOT__i_core_model__DOT__data_mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb__DOT__i_core_model__DOT__data_mem__v0;
    __VdlyDim0__tb__DOT__i_core_model__DOT__data_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__data_mem__v0;
    __VdlySet__tb__DOT__i_core_model__DOT__data_mem__v0 = 0;
    // Body
    __VdlySet__tb__DOT__i_core_model__DOT__data_mem__v0 = 0U;
    if (vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w) {
        ++(vlSymsp->__Vcoverage[751]);
        __VdlyVal__tb__DOT__i_core_model__DOT__data_mem__v0 
            = vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word;
        __VdlyDim0__tb__DOT__i_core_model__DOT__data_mem__v0 
            = (0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                         >> 2U));
        __VdlySet__tb__DOT__i_core_model__DOT__data_mem__v0 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[752]);
    }
    ++(vlSymsp->__Vcoverage[753]);
    if (__VdlySet__tb__DOT__i_core_model__DOT__data_mem__v0) {
        vlSelfRef.tb__DOT__i_core_model__DOT__data_mem[__VdlyDim0__tb__DOT__i_core_model__DOT__data_mem__v0] 
            = __VdlyVal__tb__DOT__i_core_model__DOT__data_mem__v0;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb__DOT__instr_;
    tb__DOT__instr_ = 0;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__instr_w;
    tb__DOT__i_core_model__DOT__instr_w = 0;
    CData/*4:0*/ tb__DOT__i_core_model__DOT__rs1_addr_w;
    tb__DOT__i_core_model__DOT__rs1_addr_w = 0;
    CData/*4:0*/ tb__DOT__i_core_model__DOT__rs2_addr_w;
    tb__DOT__i_core_model__DOT__rs2_addr_w = 0;
    CData/*0:0*/ tb__DOT__i_core_model__DOT__reg_we_w;
    tb__DOT__i_core_model__DOT__reg_we_w = 0;
    CData/*0:0*/ tb__DOT__i_core_model__DOT__alu_src_w;
    tb__DOT__i_core_model__DOT__alu_src_w = 0;
    CData/*0:0*/ tb__DOT__i_core_model__DOT__pc_to_alu_w;
    tb__DOT__i_core_model__DOT__pc_to_alu_w = 0;
    CData/*0:0*/ tb__DOT__i_core_model__DOT__branch_w;
    tb__DOT__i_core_model__DOT__branch_w = 0;
    CData/*0:0*/ tb__DOT__i_core_model__DOT__jump_w;
    tb__DOT__i_core_model__DOT__jump_w = 0;
    CData/*0:0*/ tb__DOT__i_core_model__DOT__jalr_w;
    tb__DOT__i_core_model__DOT__jalr_w = 0;
    CData/*3:0*/ tb__DOT__i_core_model__DOT__alu_ctrl_w;
    tb__DOT__i_core_model__DOT__alu_ctrl_w = 0;
    CData/*2:0*/ tb__DOT__i_core_model__DOT__unused_branch_type;
    tb__DOT__i_core_model__DOT__unused_branch_type = 0;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__rs1_data_w;
    tb__DOT__i_core_model__DOT__rs1_data_w = 0;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__alu_a_w;
    tb__DOT__i_core_model__DOT__alu_a_w = 0;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__alu_b_w;
    tb__DOT__i_core_model__DOT__alu_b_w = 0;
    CData/*0:0*/ tb__DOT__i_core_model__DOT__branch_taken;
    tb__DOT__i_core_model__DOT__branch_taken = 0;
    CData/*6:0*/ tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode;
    tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__Vfuncout;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction = 0;
    CData/*6:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode = 0;
    CData/*6:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7 = 0;
    CData/*2:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3 = 0;
    SData/*11:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I = 0;
    SData/*11:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_S;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_S = 0;
    SData/*11:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B = 0;
    IData/*19:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_U;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_U = 0;
    IData/*19:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_J;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_J = 0;
    CData/*4:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1 = 0;
    CData/*4:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2 = 0;
    CData/*4:0*/ __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0;
    __VdlyVal__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0;
    __VdlyDim0__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v1;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v1 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v2;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v2 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v3;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v3 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v4;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v4 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v5;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v5 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v6;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v6 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v7;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v7 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v8;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v8 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v9;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v9 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v10;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v10 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v11;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v11 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v12;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v12 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v13;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v13 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v14;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v14 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v15;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v15 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v16;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v16 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v17;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v17 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v18;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v18 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v19;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v19 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v20;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v20 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v21;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v21 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v22;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v22 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v23;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v23 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v24;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v24 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v25;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v25 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v26;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v26 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v27;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v27 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v28;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v28 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v29;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v29 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v30;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v30 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v31;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v31 = 0;
    // Body
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v1 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v2 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v3 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v4 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v5 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v6 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v7 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v8 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v9 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v10 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v11 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v12 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v13 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v14 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v15 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v16 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v17 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v18 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v19 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v20 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v21 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v22 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v23 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v24 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v25 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v26 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v27 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v28 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v29 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v30 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v31 = 0U;
    if (vlSelfRef.tb__DOT__rstn) {
        if (((IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vcellinp__u_regfile__we_i) 
             & (0U != (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w)))) {
            ++(vlSymsp->__Vcoverage[818]);
            __VdlyVal__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0 
                = vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w;
            __VdlyDim0__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0 
                = vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w;
            __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0 = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[819]);
        }
        if (((IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vcellinp__u_regfile__we_i) 
             & (0U != (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w)))) {
            ++(vlSymsp->__Vcoverage[820]);
        }
        if ((0U == (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w))) {
            ++(vlSymsp->__Vcoverage[821]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vcellinp__u_regfile__we_i)))) {
            ++(vlSymsp->__Vcoverage[822]);
        }
        ++(vlSymsp->__Vcoverage[824]);
    } else {
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v1 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v2 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v3 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v4 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v5 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v6 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v7 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v8 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v9 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v10 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v11 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v12 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v13 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v14 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v15 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v16 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v17 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v18 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v19 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v20 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v21 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v22 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v23 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v24 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v25 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v26 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v27 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v28 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v29 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v30 = 1U;
        ++(vlSymsp->__Vcoverage[817]);
        __VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v31 = 1U;
        ++(vlSymsp->__Vcoverage[823]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__rstn)))) {
        ++(vlSymsp->__Vcoverage[825]);
    }
    if (vlSelfRef.tb__DOT__rstn) {
        ++(vlSymsp->__Vcoverage[826]);
    }
    ++(vlSymsp->__Vcoverage[827]);
    if (vlSelfRef.tb__DOT__rstn) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
            = vlSelfRef.tb__DOT__i_core_model__DOT__next_pc;
    } else {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg = 0x80000000U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__rstn)))) {
        ++(vlSymsp->__Vcoverage[386]);
    }
    if (vlSelfRef.tb__DOT__rstn) {
        ++(vlSymsp->__Vcoverage[387]);
    }
    ++(vlSymsp->__Vcoverage[388]);
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[__VdlyDim0__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0] 
            = __VdlyVal__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v0;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v1) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[1U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v2) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[2U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v3) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[3U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v4) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[4U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v5) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[5U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v6) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[6U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v7) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[7U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v8) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[8U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v9) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[9U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v10) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0xaU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v11) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0xbU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v12) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0xcU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v13) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0xdU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v14) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0xeU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v15) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0xfU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v16) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x10U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v17) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x11U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v18) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x12U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v19) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x13U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v20) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x14U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v21) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x15U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v22) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x16U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v23) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x17U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v24) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x18U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v25) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x19U] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v26) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x1aU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v27) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x1bU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v28) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x1cU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v29) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x1dU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v30) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x1eU] = 0U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__u_regfile__DOT__registers__v31) {
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0x1fU] = 0U;
    }
    if ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
               ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffffffeU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (1U & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((2U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
               ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffffffdU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (2U & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((4U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
               ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffffffbU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (4U & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((8U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
               ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffffff7U 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (8U & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                  ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffffffefU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x10U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                  ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffffffdfU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x20U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                  ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffffffbfU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x40U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                  ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffffff7fU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x80U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                   ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffffeffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x100U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                   ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffffdffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x200U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                   ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffffbffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x400U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                   ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffff7ffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x800U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                    ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffffefffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x1000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                    ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffffdfffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x2000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                    ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffffbfffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x4000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                    ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffff7fffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x8000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                     ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffeffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x10000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                     ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffdffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x20000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                     ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfffbffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x40000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                     ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfff7ffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x80000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                      ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffefffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x100000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                      ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffdfffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x200000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                      ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xffbfffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x400000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                      ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xff7fffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x800000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                       ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfeffffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x1000000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                       ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfdffffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x2000000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                       ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xfbffffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x4000000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                       ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xf7ffffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x8000000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                        ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xefffffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x10000000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                        ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xdfffffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x20000000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                        ^ vlSelfRef.tb__DOT____Vtogcov__pc))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0xbfffffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x40000000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    if (((vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
          ^ vlSelfRef.tb__DOT____Vtogcov__pc) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.tb__DOT____Vtogcov__pc = ((0x7fffffffU 
                                             & vlSelfRef.tb__DOT____Vtogcov__pc) 
                                            | (0x80000000U 
                                               & vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg));
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w 
        = (0x1fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
           [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                       >> 2U))]);
    tb__DOT__instr_ = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
        [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                    >> 2U))];
    tb__DOT__i_core_model__DOT__rs2_addr_w = (0x1fU 
                                              & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
                                                 [(0x7ffU 
                                                   & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                                                      >> 2U))] 
                                                 >> 0x14U));
    tb__DOT__i_core_model__DOT__rs1_addr_w = (0x1fU 
                                              & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
                                                 [(0x7ffU 
                                                   & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                                                      >> 2U))] 
                                                 >> 8U));
    tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode 
        = (0x7fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
                    [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                                >> 2U))] >> 0xdU));
    tb__DOT__i_core_model__DOT__instr_w = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
        [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                    >> 2U))];
    vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3 
        = (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
                 [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                             >> 2U))] >> 5U));
    if ((1U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w)))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w 
            = ((0x1eU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w)) 
               | (1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w)));
    }
    if ((2U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w)))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w 
            = ((0x1dU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w)) 
               | (2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w)));
    }
    if ((4U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w)))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w 
            = ((0x1bU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w)) 
               | (4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w)));
    }
    if ((8U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w 
            = ((0x17U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w)) 
               | (8U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w) 
                  ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w 
            = ((0xfU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w)) 
               | (0x10U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w)));
    }
    if ((1U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffffffeU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (1U 
                                                   & tb__DOT__instr_));
    }
    if ((2U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffffffdU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (2U 
                                                   & tb__DOT__instr_));
    }
    if ((4U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffffffbU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (4U 
                                                   & tb__DOT__instr_));
    }
    if ((8U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffffff7U 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (8U 
                                                   & tb__DOT__instr_));
    }
    if ((0x10U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffffffefU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x10U 
                                                   & tb__DOT__instr_));
    }
    if ((0x20U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffffffdfU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x20U 
                                                   & tb__DOT__instr_));
    }
    if ((0x40U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffffffbfU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x40U 
                                                   & tb__DOT__instr_));
    }
    if ((0x80U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffffff7fU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x80U 
                                                   & tb__DOT__instr_));
    }
    if ((0x100U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffffeffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x100U 
                                                   & tb__DOT__instr_));
    }
    if ((0x200U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffffdffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x200U 
                                                   & tb__DOT__instr_));
    }
    if ((0x400U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffffbffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x400U 
                                                   & tb__DOT__instr_));
    }
    if ((0x800U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffff7ffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x800U 
                                                   & tb__DOT__instr_));
    }
    if ((0x1000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffffefffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x1000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x2000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffffdfffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x2000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x4000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffffbfffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x4000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x8000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffff7fffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x8000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x10000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffeffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x10000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x20000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffdffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x20000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x40000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfffbffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x40000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x80000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfff7ffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x80000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x100000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffefffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x100000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x200000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffdfffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x200000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x400000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xffbfffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x400000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x800000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xff7fffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x800000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x1000000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfeffffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x1000000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x2000000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfdffffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x2000000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x4000000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xfbffffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x4000000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x8000000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xf7ffffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x8000000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x10000000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xefffffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x10000000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x20000000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xdfffffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x20000000U 
                                                   & tb__DOT__instr_));
    }
    if ((0x40000000U & (tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0xbfffffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x40000000U 
                                                   & tb__DOT__instr_));
    }
    if (((tb__DOT__instr_ ^ vlSelfRef.tb__DOT____Vtogcov__instr_) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.tb__DOT____Vtogcov__instr_ = ((0x7fffffffU 
                                                 & vlSelfRef.tb__DOT____Vtogcov__instr_) 
                                                | (0x80000000U 
                                                   & tb__DOT__instr_));
    }
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
        = tb__DOT__instr_;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction = 0U;
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode 
        = (0x7fU & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                    >> 0xdU));
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7 
        = (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
           >> 0x19U);
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3 
        = (7U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                 >> 5U));
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I 
        = (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
           >> 0x14U);
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_S 
        = ((0xfe0U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                      >> 0x14U)) | (0x1fU & __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction));
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B 
        = (((0x800U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                       >> 0x14U)) | (0x400U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                                               << 0xaU))) 
           | ((0x3f0U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                         >> 0x15U)) | (0xfU & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                                               >> 1U))));
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_U 
        = ((0xfff00U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                        >> 0xcU)) | (0xffU & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                                              >> 5U)));
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_J 
        = ((0x80000U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                        >> 0xcU)) | ((0x7f800U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                                                  << 6U)) 
                                     | ((0x400U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                                            >> 0x15U)))));
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1 
        = (0x1fU & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                    >> 8U));
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2 
        = (0x1fU & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction 
                    >> 0x14U));
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd 
        = (0x1fU & __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__instruction);
    if (((((((((0x3a8U == (0x3f8U & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                      << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3)))) 
               | (0x3a0U == (0x3f8U & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                        << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
              | (0x378U == (0x3f8U & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                       << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
             | (0x338U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                      << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
            | (0x31cU == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                     << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
           | (0x31dU == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                    << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
          | (0x31bU == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                   << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
         | (0x31aU == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                  << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3)))))) {
        if ((0x3a8U == (0x3f8U & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                   << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x37U | ((__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_U 
                             << 0xcU) | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                         << 7U)));
            ++(vlSymsp->__Vcoverage[280]);
        } else if ((0x3a0U == (0x3f8U & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[281]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x17U | ((__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_U 
                             << 0xcU) | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                         << 7U)));
        } else if ((0x378U == (0x3f8U & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[282]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x6fU | (((0x80000000U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_J 
                                             << 0xcU)) 
                             | ((0x7fe00000U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_J 
                                                << 0x15U)) 
                                | (0x100000U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_J 
                                                << 0xaU)))) 
                            | ((0xff000U & (__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_J 
                                            << 1U)) 
                               | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                  << 7U))));
        } else if ((0x338U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[283]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x67U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                             << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                           << 0xfU) 
                                          | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                             << 7U))));
        } else if ((0x31cU == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[284]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x63U | (((0x80000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                             << 0x14U)) 
                             | ((0x7e000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                << 0x15U)) 
                                | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                   << 0x14U))) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                                   << 0xfU) 
                                                  | ((0xf00U 
                                                      & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                         << 8U)) 
                                                     | (0x80U 
                                                        & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                           >> 3U))))));
        } else if ((0x31dU == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[285]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x1063U | (((0x80000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                               << 0x14U)) 
                               | ((0x7e000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                  << 0x15U)) 
                                  | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                     << 0x14U))) | 
                              (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                << 0xfU) | ((0xf00U 
                                             & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                << 8U)) 
                                            | (0x80U 
                                               & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                  >> 3U))))));
        } else if ((0x31bU == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[286]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x4063U | (((0x80000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                               << 0x14U)) 
                               | ((0x7e000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                  << 0x15U)) 
                                  | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                     << 0x14U))) | 
                              (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                << 0xfU) | ((0xf00U 
                                             & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                << 8U)) 
                                            | (0x80U 
                                               & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                  >> 3U))))));
        } else {
            ++(vlSymsp->__Vcoverage[287]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x5063U | (((0x80000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                               << 0x14U)) 
                               | ((0x7e000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                  << 0x15U)) 
                                  | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                     << 0x14U))) | 
                              (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                << 0xfU) | ((0xf00U 
                                             & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                << 8U)) 
                                            | (0x80U 
                                               & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                  >> 3U))))));
        }
    } else if (((((((((0x319U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3)))) 
                      | (0x318U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                               << 3U) 
                                              | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                     | (0x304U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                              << 3U) 
                                             | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                    | (0x305U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                   | (0x306U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                            << 3U) 
                                           | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                  | (0x300U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                           << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                 | (0x301U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                | (0x308U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                         << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3)))))) {
        if ((0x319U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                   << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[288]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x6063U | (((0x80000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                               << 0x14U)) 
                               | ((0x7e000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                  << 0x15U)) 
                                  | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                     << 0x14U))) | 
                              (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                << 0xfU) | ((0xf00U 
                                             & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                << 8U)) 
                                            | (0x80U 
                                               & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                  >> 3U))))));
        } else if ((0x318U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[289]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x7063U | (((0x80000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                               << 0x14U)) 
                               | ((0x7e000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                  << 0x15U)) 
                                  | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                     << 0x14U))) | 
                              (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                << 0xfU) | ((0xf00U 
                                             & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                << 8U)) 
                                            | (0x80U 
                                               & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_B) 
                                                  >> 3U))))));
        } else if ((0x304U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[290]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (3U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                          << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                        << 0xfU) | 
                                       ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                        << 7U))));
        } else if ((0x305U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[291]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x1003U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else if ((0x306U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[292]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x2003U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else if ((0x300U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[293]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x4003U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else if ((0x301U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[294]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x5003U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else {
            ++(vlSymsp->__Vcoverage[295]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x23U | (((0xfe000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_S) 
                                             << 0x14U)) 
                             | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                << 0x14U)) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                               << 0xfU) 
                                              | (0xf80U 
                                                 & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_S) 
                                                    << 7U)))));
        }
    } else if (((((((((0x309U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3)))) 
                      | (0x30aU == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                               << 3U) 
                                              | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                     | (0x320U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                              << 3U) 
                                             | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                    | (0x322U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                   | (0x323U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                            << 3U) 
                                           | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                  | (0x324U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                           << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                 | (0x326U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                | (0x327U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                         << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3)))))) {
        if ((0x309U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                   << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[296]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x1023U | (((0xfe000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_S) 
                                               << 0x14U)) 
                               | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                  << 0x14U)) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                                 << 0xfU) 
                                                | (0xf80U 
                                                   & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_S) 
                                                      << 7U)))));
        } else if ((0x30aU == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[297]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x2023U | (((0xfe000000U & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_S) 
                                               << 0x14U)) 
                               | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                  << 0x14U)) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                                 << 0xfU) 
                                                | (0xf80U 
                                                   & ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_S) 
                                                      << 7U)))));
        } else if ((0x320U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[298]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x13U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                             << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                           << 0xfU) 
                                          | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                             << 7U))));
        } else if ((0x322U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[299]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x2013U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else if ((0x323U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[300]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x3013U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else if ((0x324U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[301]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x6013U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else if ((0x326U == (0x3ffU & (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                          << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[302]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x4013U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else {
            ++(vlSymsp->__Vcoverage[303]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x7013U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__imm_I) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        }
    } else if (((((((((0x321U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                   << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                                << 3U) 
                                               | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3)))) 
                      | (0x325U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                     << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                                  << 3U) 
                                                 | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                     | (0xb25U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                    << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                                 << 3U) 
                                                | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                    | (0x388U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                   << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                                << 3U) 
                                               | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                   | (0xb88U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                  << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                               << 3U) 
                                              | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                  | (0x389U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                 << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                              << 3U) 
                                             | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                 | (0x38aU == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) 
                | (0x38bU == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                               << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                            << 3U) 
                                           | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3)))))) {
        if ((0x321U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                         << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                      << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[304]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x1013U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else if ((0x325U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[305]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x5013U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else if ((0xb25U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[306]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x40005013U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                   << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                                 << 0xfU) 
                                                | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                                   << 7U))));
        } else if ((0x388U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[307]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x33U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                             << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                           << 0xfU) 
                                          | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                             << 7U))));
        } else if ((0xb88U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[308]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x40000033U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                                   << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                                 << 0xfU) 
                                                | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                                   << 7U))));
        } else if ((0x389U == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[309]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x1033U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else if ((0x38aU == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                                << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                             << 3U) 
                                            | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
            ++(vlSymsp->__Vcoverage[310]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x2033U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        } else {
            ++(vlSymsp->__Vcoverage[311]);
            __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
                = (0x3033U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
        }
    } else if ((0x38cU == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                            << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                         << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
        ++(vlSymsp->__Vcoverage[312]);
        __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
            = (0x4033U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                           << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                         << 0xfU) | 
                                        ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                         << 7U))));
    } else if ((0x38dU == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                            << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                         << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
        ++(vlSymsp->__Vcoverage[313]);
        __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
            = (0x5033U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                           << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                         << 0xfU) | 
                                        ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                         << 7U))));
    } else if ((0xb8dU == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                            << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                         << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
        ++(vlSymsp->__Vcoverage[314]);
        __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
            = (0x40005033U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                               << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                             << 0xfU) 
                                            | ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                               << 7U))));
    } else if ((0x38eU == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                            << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                         << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
        ++(vlSymsp->__Vcoverage[315]);
        __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
            = (0x6033U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                           << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                         << 0xfU) | 
                                        ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                         << 7U))));
    } else if ((0x38fU == (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct7) 
                            << 0xaU) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__opcode) 
                                         << 3U) | (IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__funct3))))) {
        ++(vlSymsp->__Vcoverage[316]);
        __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction 
            = (0x7033U | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs2) 
                           << 0x14U) | (((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rs1) 
                                         << 0xfU) | 
                                        ((IData)(__Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__rd) 
                                         << 7U))));
    } else {
        ++(vlSymsp->__Vcoverage[317]);
        __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction = 0U;
    }
    __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__Vfuncout 
        = __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__descrambled_instruction;
    ++(vlSymsp->__Vcoverage[318]);
    vlSelfRef.tb__DOT__instr = __Vfunc_tb__DOT__i_descrambler__DOT__descramble_instruction__0__Vfuncout;
    ++(vlSymsp->__Vcoverage[279]);
    if ((1U & ((IData)(tb__DOT__i_core_model__DOT__rs2_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w)))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w 
            = ((0x1eU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w)) 
               | (1U & (IData)(tb__DOT__i_core_model__DOT__rs2_addr_w)));
    }
    if ((2U & ((IData)(tb__DOT__i_core_model__DOT__rs2_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w)))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w 
            = ((0x1dU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w)) 
               | (2U & (IData)(tb__DOT__i_core_model__DOT__rs2_addr_w)));
    }
    if ((4U & ((IData)(tb__DOT__i_core_model__DOT__rs2_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w)))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w 
            = ((0x1bU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w)) 
               | (4U & (IData)(tb__DOT__i_core_model__DOT__rs2_addr_w)));
    }
    if ((8U & ((IData)(tb__DOT__i_core_model__DOT__rs2_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w)))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w 
            = ((0x17U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w)) 
               | (8U & (IData)(tb__DOT__i_core_model__DOT__rs2_addr_w)));
    }
    if ((0x10U & ((IData)(tb__DOT__i_core_model__DOT__rs2_addr_w) 
                  ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w)))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w 
            = ((0xfU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w)) 
               | (0x10U & (IData)(tb__DOT__i_core_model__DOT__rs2_addr_w)));
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
        = ((0U == (IData)(tb__DOT__i_core_model__DOT__rs2_addr_w))
            ? 0U : vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers
           [tb__DOT__i_core_model__DOT__rs2_addr_w]);
    if ((1U & ((IData)(tb__DOT__i_core_model__DOT__rs1_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w)))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w 
            = ((0x1eU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w)) 
               | (1U & (IData)(tb__DOT__i_core_model__DOT__rs1_addr_w)));
    }
    if ((2U & ((IData)(tb__DOT__i_core_model__DOT__rs1_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w)))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w 
            = ((0x1dU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w)) 
               | (2U & (IData)(tb__DOT__i_core_model__DOT__rs1_addr_w)));
    }
    if ((4U & ((IData)(tb__DOT__i_core_model__DOT__rs1_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w)))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w 
            = ((0x1bU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w)) 
               | (4U & (IData)(tb__DOT__i_core_model__DOT__rs1_addr_w)));
    }
    if ((8U & ((IData)(tb__DOT__i_core_model__DOT__rs1_addr_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w)))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w 
            = ((0x17U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w)) 
               | (8U & (IData)(tb__DOT__i_core_model__DOT__rs1_addr_w)));
    }
    if ((0x10U & ((IData)(tb__DOT__i_core_model__DOT__rs1_addr_w) 
                  ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w)))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w 
            = ((0xfU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w)) 
               | (0x10U & (IData)(tb__DOT__i_core_model__DOT__rs1_addr_w)));
    }
    tb__DOT__i_core_model__DOT__rs1_data_w = ((0U == (IData)(tb__DOT__i_core_model__DOT__rs1_addr_w))
                                               ? 0U
                                               : vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers
                                              [tb__DOT__i_core_model__DOT__rs1_addr_w]);
    if ((1U & ((IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode 
            = ((0x7eU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)) 
               | (1U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode)));
    }
    if ((2U & ((IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode 
            = ((0x7dU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)) 
               | (2U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode)));
    }
    if ((4U & ((IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode 
            = ((0x7bU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)) 
               | (4U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode)));
    }
    if ((8U & ((IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode 
            = ((0x77U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)) 
               | (8U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode)));
    }
    if ((0x10U & ((IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode) 
                  ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode 
            = ((0x6fU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)) 
               | (0x10U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode)));
    }
    if ((0x20U & ((IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode) 
                  ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode 
            = ((0x5fU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)) 
               | (0x20U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode)));
    }
    if ((0x40U & ((IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode) 
                  ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode 
            = ((0x3fU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode)) 
               | (0x40U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode)));
    }
    if ((1U & (tb__DOT__i_core_model__DOT__instr_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (1U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((2U & (tb__DOT__i_core_model__DOT__instr_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (2U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((4U & (tb__DOT__i_core_model__DOT__instr_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffffffbU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (4U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((8U & (tb__DOT__i_core_model__DOT__instr_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffffff7U & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (8U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x10U & (tb__DOT__i_core_model__DOT__instr_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffffffefU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x10U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x20U & (tb__DOT__i_core_model__DOT__instr_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffffffdfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x20U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x40U & (tb__DOT__i_core_model__DOT__instr_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffffffbfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x40U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x80U & (tb__DOT__i_core_model__DOT__instr_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffffff7fU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x80U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x100U & (tb__DOT__i_core_model__DOT__instr_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffffeffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x100U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x200U & (tb__DOT__i_core_model__DOT__instr_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffffdffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x200U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x400U & (tb__DOT__i_core_model__DOT__instr_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffffbffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x400U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x800U & (tb__DOT__i_core_model__DOT__instr_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffff7ffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x800U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x1000U & (tb__DOT__i_core_model__DOT__instr_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffffefffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x1000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x2000U & (tb__DOT__i_core_model__DOT__instr_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffffdfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x2000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x4000U & (tb__DOT__i_core_model__DOT__instr_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffffbfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x4000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x8000U & (tb__DOT__i_core_model__DOT__instr_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffff7fffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x8000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x10000U & (tb__DOT__i_core_model__DOT__instr_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffeffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x10000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x20000U & (tb__DOT__i_core_model__DOT__instr_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffdffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x20000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x40000U & (tb__DOT__i_core_model__DOT__instr_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfffbffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x40000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x80000U & (tb__DOT__i_core_model__DOT__instr_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfff7ffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x80000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x100000U & (tb__DOT__i_core_model__DOT__instr_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffefffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x100000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x200000U & (tb__DOT__i_core_model__DOT__instr_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffdfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x200000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x400000U & (tb__DOT__i_core_model__DOT__instr_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xffbfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x400000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x800000U & (tb__DOT__i_core_model__DOT__instr_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xff7fffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x800000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x1000000U & (tb__DOT__i_core_model__DOT__instr_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfeffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x1000000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x2000000U & (tb__DOT__i_core_model__DOT__instr_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfdffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x2000000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x4000000U & (tb__DOT__i_core_model__DOT__instr_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xfbffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x4000000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x8000000U & (tb__DOT__i_core_model__DOT__instr_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xf7ffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x8000000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x10000000U & (tb__DOT__i_core_model__DOT__instr_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xefffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x10000000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x20000000U & (tb__DOT__i_core_model__DOT__instr_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xdfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x20000000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((0x40000000U & (tb__DOT__i_core_model__DOT__instr_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0xbfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x40000000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if (((tb__DOT__i_core_model__DOT__instr_w ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__instr_w) 
               | (0x80000000U & tb__DOT__i_core_model__DOT__instr_w));
    }
    if ((1U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__funct3_w)))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__funct3_w 
            = ((6U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__funct3_w)) 
               | (1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3)));
    }
    if ((2U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__funct3_w)))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__funct3_w 
            = ((5U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__funct3_w)) 
               | (2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3)));
    }
    if ((4U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__funct3_w)))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__funct3_w 
            = ((3U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__funct3_w)) 
               | (4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3)));
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__imm_w = 0U;
    tb__DOT__i_core_model__DOT__reg_we_w = 0U;
    tb__DOT__i_core_model__DOT__alu_src_w = 0U;
    tb__DOT__i_core_model__DOT__pc_to_alu_w = 0U;
    tb__DOT__i_core_model__DOT__alu_ctrl_w = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w = 0U;
    tb__DOT__i_core_model__DOT__branch_w = 0U;
    tb__DOT__i_core_model__DOT__unused_branch_type = 0U;
    tb__DOT__i_core_model__DOT__jump_w = 0U;
    tb__DOT__i_core_model__DOT__jalr_w = 0U;
    if ((0x40U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
        if ((0x20U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
            if ((0x10U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                if ((8U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[814]);
                } else if ((4U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                    if ((2U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                        ++(vlSymsp->__Vcoverage[814]);
                    } else if ((1U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                        ++(vlSymsp->__Vcoverage[761]);
                        tb__DOT__i_core_model__DOT__reg_we_w = 1U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w = 3U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                            = ((0xfff00000U & tb__DOT__i_core_model__DOT__instr_w) 
                               | (0xff000U & (tb__DOT__i_core_model__DOT__instr_w 
                                              << 7U)));
                    } else {
                        ++(vlSymsp->__Vcoverage[762]);
                        tb__DOT__i_core_model__DOT__reg_we_w = 1U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w = 0U;
                        tb__DOT__i_core_model__DOT__pc_to_alu_w = 1U;
                        tb__DOT__i_core_model__DOT__alu_src_w = 1U;
                        tb__DOT__i_core_model__DOT__alu_ctrl_w = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                            = ((0xfff00000U & tb__DOT__i_core_model__DOT__instr_w) 
                               | (0xff000U & (tb__DOT__i_core_model__DOT__instr_w 
                                              << 7U)));
                    }
                } else if ((2U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[814]);
                } else if ((1U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                    tb__DOT__i_core_model__DOT__reg_we_w = 1U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w = 0U;
                    tb__DOT__i_core_model__DOT__alu_src_w = 0U;
                    if ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                        if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                            if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                                if ((0U == (tb__DOT__i_core_model__DOT__instr_w 
                                            >> 0x19U))) {
                                    ++(vlSymsp->__Vcoverage[809]);
                                    tb__DOT__i_core_model__DOT__alu_ctrl_w = 7U;
                                } else {
                                    ++(vlSymsp->__Vcoverage[810]);
                                }
                                ++(vlSymsp->__Vcoverage[811]);
                            } else {
                                if ((0U == (tb__DOT__i_core_model__DOT__instr_w 
                                            >> 0x19U))) {
                                    ++(vlSymsp->__Vcoverage[806]);
                                    tb__DOT__i_core_model__DOT__alu_ctrl_w = 6U;
                                } else {
                                    ++(vlSymsp->__Vcoverage[807]);
                                }
                                ++(vlSymsp->__Vcoverage[808]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                            if ((0U == (tb__DOT__i_core_model__DOT__instr_w 
                                        >> 0x19U))) {
                                ++(vlSymsp->__Vcoverage[804]);
                                tb__DOT__i_core_model__DOT__alu_ctrl_w = 5U;
                            } else if ((2U == (tb__DOT__i_core_model__DOT__instr_w 
                                               >> 0x19U))) {
                                ++(vlSymsp->__Vcoverage[802]);
                                tb__DOT__i_core_model__DOT__alu_ctrl_w = 0xdU;
                            } else {
                                ++(vlSymsp->__Vcoverage[803]);
                            }
                            ++(vlSymsp->__Vcoverage[805]);
                        } else {
                            if ((0U == (tb__DOT__i_core_model__DOT__instr_w 
                                        >> 0x19U))) {
                                ++(vlSymsp->__Vcoverage[799]);
                                tb__DOT__i_core_model__DOT__alu_ctrl_w = 4U;
                            } else {
                                ++(vlSymsp->__Vcoverage[800]);
                            }
                            ++(vlSymsp->__Vcoverage[801]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                        if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                            if ((0U == (tb__DOT__i_core_model__DOT__instr_w 
                                        >> 0x19U))) {
                                ++(vlSymsp->__Vcoverage[796]);
                                tb__DOT__i_core_model__DOT__alu_ctrl_w = 3U;
                            } else {
                                ++(vlSymsp->__Vcoverage[797]);
                            }
                            ++(vlSymsp->__Vcoverage[798]);
                        } else {
                            if ((0U == (tb__DOT__i_core_model__DOT__instr_w 
                                        >> 0x19U))) {
                                ++(vlSymsp->__Vcoverage[793]);
                                tb__DOT__i_core_model__DOT__alu_ctrl_w = 2U;
                            } else {
                                ++(vlSymsp->__Vcoverage[794]);
                            }
                            ++(vlSymsp->__Vcoverage[795]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                        if ((0U == (tb__DOT__i_core_model__DOT__instr_w 
                                    >> 0x19U))) {
                            ++(vlSymsp->__Vcoverage[790]);
                            tb__DOT__i_core_model__DOT__alu_ctrl_w = 1U;
                        } else {
                            ++(vlSymsp->__Vcoverage[791]);
                        }
                        ++(vlSymsp->__Vcoverage[792]);
                    } else {
                        if ((0U == (tb__DOT__i_core_model__DOT__instr_w 
                                    >> 0x19U))) {
                            ++(vlSymsp->__Vcoverage[788]);
                            tb__DOT__i_core_model__DOT__alu_ctrl_w = 0U;
                        } else if ((2U == (tb__DOT__i_core_model__DOT__instr_w 
                                           >> 0x19U))) {
                            ++(vlSymsp->__Vcoverage[786]);
                            tb__DOT__i_core_model__DOT__alu_ctrl_w = 8U;
                        } else {
                            ++(vlSymsp->__Vcoverage[787]);
                        }
                        ++(vlSymsp->__Vcoverage[789]);
                    }
                    ++(vlSymsp->__Vcoverage[813]);
                } else {
                    ++(vlSymsp->__Vcoverage[814]);
                }
            } else if ((8U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                if ((4U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                    if ((2U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                        if ((1U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                            ++(vlSymsp->__Vcoverage[763]);
                            tb__DOT__i_core_model__DOT__reg_we_w = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w = 2U;
                            tb__DOT__i_core_model__DOT__jump_w = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                                = ((((- (IData)((tb__DOT__i_core_model__DOT__instr_w 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (tb__DOT__i_core_model__DOT__instr_w 
                                                     >> 0xbU))) 
                                   | (((0xff000U & 
                                        (tb__DOT__i_core_model__DOT__instr_w 
                                         << 7U)) | 
                                       (0x800U & (tb__DOT__i_core_model__DOT__instr_w 
                                                  >> 9U))) 
                                      | (0x7feU & (tb__DOT__i_core_model__DOT__instr_w 
                                                   >> 0x14U))));
                        } else {
                            ++(vlSymsp->__Vcoverage[814]);
                        }
                    } else {
                        ++(vlSymsp->__Vcoverage[814]);
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[814]);
                }
            } else if ((4U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                if ((2U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                    if ((1U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                        ++(vlSymsp->__Vcoverage[764]);
                        tb__DOT__i_core_model__DOT__reg_we_w = 1U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w = 2U;
                        tb__DOT__i_core_model__DOT__jump_w = 1U;
                        tb__DOT__i_core_model__DOT__jalr_w = 1U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                            = (((- (IData)((tb__DOT__i_core_model__DOT__instr_w 
                                            >> 0x1fU))) 
                                << 0xcU) | (tb__DOT__i_core_model__DOT__instr_w 
                                            >> 0x14U));
                    } else {
                        ++(vlSymsp->__Vcoverage[814]);
                    }
                } else if ((1U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[814]);
                } else {
                    tb__DOT__i_core_model__DOT__reg_we_w = 1U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w = 0U;
                    tb__DOT__i_core_model__DOT__alu_src_w = 1U;
                    if (((1U == (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3)) 
                         | (5U == (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3)))) {
                        ++(vlSymsp->__Vcoverage[768]);
                        vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                            = (0x1fU & (tb__DOT__i_core_model__DOT__instr_w 
                                        >> 0x14U));
                    } else {
                        ++(vlSymsp->__Vcoverage[769]);
                        vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                            = (((- (IData)((tb__DOT__i_core_model__DOT__instr_w 
                                            >> 0x1fU))) 
                                << 0xcU) | (tb__DOT__i_core_model__DOT__instr_w 
                                            >> 0x14U));
                    }
                    if ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                        if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                            if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                                ++(vlSymsp->__Vcoverage[778]);
                                tb__DOT__i_core_model__DOT__alu_ctrl_w = 7U;
                            } else {
                                ++(vlSymsp->__Vcoverage[777]);
                                tb__DOT__i_core_model__DOT__alu_ctrl_w = 4U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                            if ((0U == (tb__DOT__i_core_model__DOT__instr_w 
                                        >> 0x19U))) {
                                ++(vlSymsp->__Vcoverage[782]);
                                tb__DOT__i_core_model__DOT__alu_ctrl_w = 5U;
                            } else if ((2U == (tb__DOT__i_core_model__DOT__instr_w 
                                               >> 0x19U))) {
                                ++(vlSymsp->__Vcoverage[780]);
                                tb__DOT__i_core_model__DOT__alu_ctrl_w = 0xdU;
                            } else {
                                ++(vlSymsp->__Vcoverage[781]);
                            }
                            ++(vlSymsp->__Vcoverage[783]);
                        } else {
                            ++(vlSymsp->__Vcoverage[776]);
                            tb__DOT__i_core_model__DOT__alu_ctrl_w = 6U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                        if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                            ++(vlSymsp->__Vcoverage[775]);
                            tb__DOT__i_core_model__DOT__alu_ctrl_w = 3U;
                        } else {
                            ++(vlSymsp->__Vcoverage[774]);
                            tb__DOT__i_core_model__DOT__alu_ctrl_w = 2U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                        ++(vlSymsp->__Vcoverage[779]);
                        tb__DOT__i_core_model__DOT__alu_ctrl_w = 1U;
                    } else {
                        ++(vlSymsp->__Vcoverage[773]);
                        tb__DOT__i_core_model__DOT__alu_ctrl_w = 0U;
                    }
                    ++(vlSymsp->__Vcoverage[785]);
                }
            } else if ((2U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                if ((1U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                    ++(vlSymsp->__Vcoverage[765]);
                    tb__DOT__i_core_model__DOT__branch_w = 1U;
                    tb__DOT__i_core_model__DOT__unused_branch_type 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3;
                    tb__DOT__i_core_model__DOT__alu_src_w = 0U;
                    tb__DOT__i_core_model__DOT__alu_ctrl_w = 8U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                        = (((- (IData)((tb__DOT__i_core_model__DOT__instr_w 
                                        >> 0x1fU))) 
                            << 0xdU) | (((0x1000U & 
                                          (tb__DOT__i_core_model__DOT__instr_w 
                                           >> 0x13U)) 
                                         | (0x800U 
                                            & (tb__DOT__i_core_model__DOT__instr_w 
                                               << 0xbU))) 
                                        | ((0x7e0U 
                                            & (tb__DOT__i_core_model__DOT__instr_w 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & tb__DOT__i_core_model__DOT__instr_w))));
                } else {
                    ++(vlSymsp->__Vcoverage[814]);
                }
            } else if ((1U & (IData)(tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode))) {
                ++(vlSymsp->__Vcoverage[767]);
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w = 1U;
                tb__DOT__i_core_model__DOT__alu_src_w = 1U;
                tb__DOT__i_core_model__DOT__alu_ctrl_w = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                    = (((- (IData)((tb__DOT__i_core_model__DOT__instr_w 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (tb__DOT__i_core_model__DOT__instr_w 
                                     >> 0x14U)) | (0x1fU 
                                                   & tb__DOT__i_core_model__DOT__instr_w)));
            } else {
                ++(vlSymsp->__Vcoverage[766]);
                tb__DOT__i_core_model__DOT__reg_we_w = 1U;
                vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w = 1U;
                tb__DOT__i_core_model__DOT__alu_src_w = 1U;
                tb__DOT__i_core_model__DOT__alu_ctrl_w = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                    = (((- (IData)((tb__DOT__i_core_model__DOT__instr_w 
                                    >> 0x1fU))) << 0xcU) 
                       | (tb__DOT__i_core_model__DOT__instr_w 
                          >> 0x14U));
            }
        } else {
            ++(vlSymsp->__Vcoverage[814]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[814]);
    }
    if ((5U == (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
        ++(vlSymsp->__Vcoverage[770]);
    }
    if ((1U == (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
        ++(vlSymsp->__Vcoverage[771]);
    }
    if (((1U != (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3)) 
         & (5U != (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3)))) {
        ++(vlSymsp->__Vcoverage[772]);
    }
    ++(vlSymsp->__Vcoverage[815]);
    if ((1U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffffffeU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (1U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((2U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffffffdU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (2U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((4U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffffffbU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (4U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((8U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffffff7U 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (8U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffffffefU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x10U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffffffdfU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x20U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffffffbfU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x40U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffffff7fU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x80U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffffeffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x100U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffffdffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x200U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffffbffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x400U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffff7ffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x800U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffffefffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x1000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffffdfffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x2000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffffbfffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x4000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffff7fffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x8000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffeffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x10000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffdffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x20000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfffbffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x40000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfff7ffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x80000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffefffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x100000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffdfffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x200000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xffbfffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x400000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xff7fffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x800000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfeffffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x1000000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfdffffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x2000000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xfbffffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x4000000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xf7ffffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x8000000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xefffffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x10000000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xdfffffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x20000000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0xbfffffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x40000000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if (((vlSelfRef.tb__DOT__instr ^ vlSelfRef.tb__DOT____Vtogcov__instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.tb__DOT____Vtogcov__instr = ((0x7fffffffU 
                                                & vlSelfRef.tb__DOT____Vtogcov__instr) 
                                               | (0x80000000U 
                                                  & vlSelfRef.tb__DOT__instr));
    }
    if ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (1U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((2U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (2U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((4U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffffffbU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (4U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((8U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffffff7U & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (8U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffffffefU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffffffdfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffffffbfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x40U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffffff7fU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x80U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffffeffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x100U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffffdffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x200U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffffbffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x400U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffff7ffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x800U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffffefffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffffdfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffffbfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffff7fffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x8000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffeffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x10000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffdffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x20000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfffbffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x40000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfff7ffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x80000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffefffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x100000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffdfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x200000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xffbfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x400000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xff7fffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x800000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfeffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x1000000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfdffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x2000000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xfbffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x4000000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xf7ffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x8000000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xefffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x10000000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xdfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x20000000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0xbfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x40000000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if (((vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
          ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w) 
               | (0x80000000U & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
    }
    if ((1U & (tb__DOT__i_core_model__DOT__rs1_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (1U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((2U & (tb__DOT__i_core_model__DOT__rs1_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (2U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((4U & (tb__DOT__i_core_model__DOT__rs1_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffffffbU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (4U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((8U & (tb__DOT__i_core_model__DOT__rs1_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffffff7U & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (8U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x10U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffffffefU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x10U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x20U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffffffdfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x20U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x40U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffffffbfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x40U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x80U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffffff7fU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x80U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x100U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffffeffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x100U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x200U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffffdffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x200U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x400U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffffbffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x400U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x800U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffff7ffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x800U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x1000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffffefffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x1000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x2000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffffdfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x2000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x4000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffffbfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x4000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x8000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffff7fffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x8000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x10000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffeffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x10000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x20000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffdffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x20000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x40000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfffbffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x40000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x80000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfff7ffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x80000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x100000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffefffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x100000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x200000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffdfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x200000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x400000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xffbfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x400000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x800000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xff7fffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x800000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x1000000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfeffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x1000000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x2000000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfdffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x2000000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x4000000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xfbffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x4000000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x8000000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xf7ffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x8000000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x10000000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xefffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x10000000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x20000000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xdfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x20000000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((0x40000000U & (tb__DOT__i_core_model__DOT__rs1_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0xbfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x40000000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if (((tb__DOT__i_core_model__DOT__rs1_data_w ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w) 
               | (0x80000000U & tb__DOT__i_core_model__DOT__rs1_data_w));
    }
    if ((1U & ((IData)(tb__DOT__i_core_model__DOT__unused_branch_type) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type)))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type 
            = ((6U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type)) 
               | (1U & (IData)(tb__DOT__i_core_model__DOT__unused_branch_type)));
    }
    if ((2U & ((IData)(tb__DOT__i_core_model__DOT__unused_branch_type) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type)))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type 
            = ((5U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type)) 
               | (2U & (IData)(tb__DOT__i_core_model__DOT__unused_branch_type)));
    }
    if ((4U & ((IData)(tb__DOT__i_core_model__DOT__unused_branch_type) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type)))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type 
            = ((3U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type)) 
               | (4U & (IData)(tb__DOT__i_core_model__DOT__unused_branch_type)));
    }
    if (((IData)(tb__DOT__i_core_model__DOT__jump_w) 
         ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__jump_w))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__jump_w 
            = tb__DOT__i_core_model__DOT__jump_w;
    }
    if (((IData)(tb__DOT__i_core_model__DOT__jalr_w) 
         ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__jalr_w))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__jalr_w 
            = tb__DOT__i_core_model__DOT__jalr_w;
    }
    if (((IData)(tb__DOT__i_core_model__DOT__branch_w) 
         ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__branch_w))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__branch_w 
            = tb__DOT__i_core_model__DOT__branch_w;
    }
    tb__DOT__i_core_model__DOT__branch_taken = 0U;
    if (tb__DOT__i_core_model__DOT__branch_w) {
        if ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
            if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                tb__DOT__i_core_model__DOT__branch_taken = 0U;
                ++(vlSymsp->__Vcoverage[622]);
            } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                ++(vlSymsp->__Vcoverage[617]);
                tb__DOT__i_core_model__DOT__branch_taken 
                    = (tb__DOT__i_core_model__DOT__rs1_data_w 
                       != vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w);
            } else {
                ++(vlSymsp->__Vcoverage[616]);
                tb__DOT__i_core_model__DOT__branch_taken 
                    = (tb__DOT__i_core_model__DOT__rs1_data_w 
                       == vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w);
            }
        } else if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
            if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
                ++(vlSymsp->__Vcoverage[621]);
                tb__DOT__i_core_model__DOT__branch_taken 
                    = VL_LTS_III(32, tb__DOT__i_core_model__DOT__rs1_data_w, vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w);
            } else {
                ++(vlSymsp->__Vcoverage[620]);
                tb__DOT__i_core_model__DOT__branch_taken 
                    = VL_GTES_III(32, tb__DOT__i_core_model__DOT__rs1_data_w, vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w);
            }
        } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
            ++(vlSymsp->__Vcoverage[619]);
            tb__DOT__i_core_model__DOT__branch_taken 
                = (tb__DOT__i_core_model__DOT__rs1_data_w 
                   < vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w);
        } else {
            ++(vlSymsp->__Vcoverage[618]);
            tb__DOT__i_core_model__DOT__branch_taken 
                = (tb__DOT__i_core_model__DOT__rs1_data_w 
                   >= vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w);
        }
        ++(vlSymsp->__Vcoverage[623]);
    } else {
        ++(vlSymsp->__Vcoverage[624]);
    }
    ++(vlSymsp->__Vcoverage[625]);
    if (((IData)(tb__DOT__i_core_model__DOT__reg_we_w) 
         ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__reg_we_w))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__reg_we_w 
            = tb__DOT__i_core_model__DOT__reg_we_w;
    }
    if ((1U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_sel_w)))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_sel_w 
            = ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_sel_w)) 
               | (1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w)));
    }
    if ((2U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_sel_w)))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_sel_w 
            = ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_sel_w)) 
               | (2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w)));
    }
    if (((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w) 
         ^ (IData)(vlSelfRef.tb__DOT____Vtogcov__mem_wrt))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.tb__DOT____Vtogcov__mem_wrt = vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w;
    }
    vlSelfRef.tb__DOT__i_core_model__DOT____Vcellinp__u_regfile__we_i 
        = ((~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w)) 
           & (IData)(tb__DOT__i_core_model__DOT__reg_we_w));
    if ((1U & ((IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w)))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w 
            = ((0xeU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w)) 
               | (1U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w)));
    }
    if ((2U & ((IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w)))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w 
            = ((0xdU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w)) 
               | (2U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w)));
    }
    if ((4U & ((IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w)))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w 
            = ((0xbU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w)) 
               | (4U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w)));
    }
    if ((8U & ((IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w) 
               ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w)))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w 
            = ((7U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w)) 
               | (8U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w)));
    }
    if (((IData)(tb__DOT__i_core_model__DOT__alu_src_w) 
         ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_src_w))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_src_w 
            = tb__DOT__i_core_model__DOT__alu_src_w;
    }
    if (((IData)(tb__DOT__i_core_model__DOT__pc_to_alu_w) 
         ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__pc_to_alu_w))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__pc_to_alu_w 
            = tb__DOT__i_core_model__DOT__pc_to_alu_w;
    }
    tb__DOT__i_core_model__DOT__alu_a_w = ((IData)(tb__DOT__i_core_model__DOT__pc_to_alu_w)
                                            ? vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg
                                            : tb__DOT__i_core_model__DOT__rs1_data_w);
    if ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (1U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((2U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (2U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((4U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffffffbU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (4U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((8U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffffff7U & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (8U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffffffefU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffffffdfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffffffbfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x40U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffffff7fU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x80U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffffeffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x100U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffffdffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x200U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffffbffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x400U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffff7ffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x800U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffffefffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffffdfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffffbfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffff7fffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x8000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffeffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x10000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffdffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x20000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfffbffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x40000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfff7ffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x80000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffefffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x100000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffdfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x200000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xffbfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x400000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xff7fffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x800000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfeffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x1000000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfdffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x2000000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xfbffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x4000000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xf7ffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x8000000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xefffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x10000000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xdfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x20000000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0xbfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x40000000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    if (((vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
          ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__imm_w) 
               | (0x80000000U & vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
    }
    tb__DOT__i_core_model__DOT__alu_b_w = ((IData)(tb__DOT__i_core_model__DOT__alu_src_w)
                                            ? vlSelfRef.tb__DOT__i_core_model__DOT__imm_w
                                            : vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w);
    if (((IData)(tb__DOT__i_core_model__DOT__branch_taken) 
         ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__branch_taken))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__branch_taken 
            = tb__DOT__i_core_model__DOT__branch_taken;
    }
    if (tb__DOT__i_core_model__DOT__jalr_w) {
        vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
            = (0xfffffffeU & (tb__DOT__i_core_model__DOT__rs1_data_w 
                              + vlSelfRef.tb__DOT__i_core_model__DOT__imm_w));
        ++(vlSymsp->__Vcoverage[631]);
    } else {
        if (((IData)(tb__DOT__i_core_model__DOT__jump_w) 
             | (IData)(tb__DOT__i_core_model__DOT__branch_taken))) {
            ++(vlSymsp->__Vcoverage[626]);
            vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                   + vlSelfRef.tb__DOT__i_core_model__DOT__imm_w);
        } else {
            ++(vlSymsp->__Vcoverage[627]);
            vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                = ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg);
        }
        if (tb__DOT__i_core_model__DOT__branch_taken) {
            ++(vlSymsp->__Vcoverage[628]);
        }
        if (tb__DOT__i_core_model__DOT__jump_w) {
            ++(vlSymsp->__Vcoverage[629]);
        }
        if ((1U & ((~ (IData)(tb__DOT__i_core_model__DOT__jump_w)) 
                   & (~ (IData)(tb__DOT__i_core_model__DOT__branch_taken))))) {
            ++(vlSymsp->__Vcoverage[630]);
        }
    }
    ++(vlSymsp->__Vcoverage[632]);
    if (((IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vcellinp__u_regfile__we_i) 
         ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT____Vtogcov__we_i))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT____Vtogcov__we_i 
            = vlSelfRef.tb__DOT__i_core_model__DOT____Vcellinp__u_regfile__we_i;
    }
    vlSelfRef.tb__DOT__reg_addr = ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vcellinp__u_regfile__we_i)
                                    ? (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w)
                                    : 0U);
    if ((1U & (tb__DOT__i_core_model__DOT__alu_a_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (1U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((2U & (tb__DOT__i_core_model__DOT__alu_a_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (2U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((4U & (tb__DOT__i_core_model__DOT__alu_a_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffffffbU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (4U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((8U & (tb__DOT__i_core_model__DOT__alu_a_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffffff7U & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (8U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x10U & (tb__DOT__i_core_model__DOT__alu_a_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffffffefU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x10U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x20U & (tb__DOT__i_core_model__DOT__alu_a_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffffffdfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x20U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x40U & (tb__DOT__i_core_model__DOT__alu_a_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffffffbfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x40U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x80U & (tb__DOT__i_core_model__DOT__alu_a_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffffff7fU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x80U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x100U & (tb__DOT__i_core_model__DOT__alu_a_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffffeffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x100U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x200U & (tb__DOT__i_core_model__DOT__alu_a_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffffdffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x200U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x400U & (tb__DOT__i_core_model__DOT__alu_a_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffffbffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x400U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x800U & (tb__DOT__i_core_model__DOT__alu_a_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffff7ffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x800U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x1000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffffefffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x1000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x2000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffffdfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x2000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x4000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffffbfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x4000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x8000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffff7fffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x8000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x10000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffeffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x10000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x20000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffdffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x20000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x40000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfffbffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x40000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x80000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfff7ffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x80000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x100000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffefffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x100000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x200000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffdfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x200000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x400000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xffbfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x400000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x800000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xff7fffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x800000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x1000000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfeffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x1000000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x2000000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfdffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x2000000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x4000000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xfbffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x4000000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x8000000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xf7ffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x8000000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x10000000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xefffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x10000000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x20000000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xdfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x20000000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((0x40000000U & (tb__DOT__i_core_model__DOT__alu_a_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0xbfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x40000000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if (((tb__DOT__i_core_model__DOT__alu_a_w ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w) 
               | (0x80000000U & tb__DOT__i_core_model__DOT__alu_a_w));
    }
    if ((1U & (tb__DOT__i_core_model__DOT__alu_b_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (1U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((2U & (tb__DOT__i_core_model__DOT__alu_b_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (2U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((4U & (tb__DOT__i_core_model__DOT__alu_b_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffffffbU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (4U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((8U & (tb__DOT__i_core_model__DOT__alu_b_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffffff7U & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (8U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x10U & (tb__DOT__i_core_model__DOT__alu_b_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffffffefU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x10U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x20U & (tb__DOT__i_core_model__DOT__alu_b_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffffffdfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x20U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x40U & (tb__DOT__i_core_model__DOT__alu_b_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffffffbfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x40U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x80U & (tb__DOT__i_core_model__DOT__alu_b_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffffff7fU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x80U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x100U & (tb__DOT__i_core_model__DOT__alu_b_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffffeffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x100U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x200U & (tb__DOT__i_core_model__DOT__alu_b_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffffdffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x200U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x400U & (tb__DOT__i_core_model__DOT__alu_b_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffffbffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x400U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x800U & (tb__DOT__i_core_model__DOT__alu_b_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffff7ffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x800U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x1000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffffefffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x1000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x2000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffffdfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x2000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x4000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffffbfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x4000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x8000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffff7fffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x8000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x10000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffeffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x10000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x20000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffdffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x20000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x40000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfffbffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x40000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x80000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfff7ffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x80000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x100000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffefffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x100000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x200000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffdfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x200000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x400000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xffbfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x400000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x800000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xff7fffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x800000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x1000000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfeffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x1000000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x2000000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfdffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x2000000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x4000000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xfbffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x4000000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x8000000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xf7ffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x8000000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x10000000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xefffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x10000000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x20000000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xdfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x20000000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((0x40000000U & (tb__DOT__i_core_model__DOT__alu_b_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0xbfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x40000000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if (((tb__DOT__i_core_model__DOT__alu_b_w ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w) 
               | (0x80000000U & tb__DOT__i_core_model__DOT__alu_b_w));
    }
    if ((8U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
        if ((4U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
            if ((2U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
                vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w = 0U;
                ++(vlSymsp->__Vcoverage[838]);
            } else if ((1U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
                ++(vlSymsp->__Vcoverage[832]);
                vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                    = VL_SHIFTRS_III(32,32,5, tb__DOT__i_core_model__DOT__alu_a_w, 
                                     (0x1fU & tb__DOT__i_core_model__DOT__alu_b_w));
            } else {
                ++(vlSymsp->__Vcoverage[838]);
                vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w = 0U;
            }
        } else if ((2U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
            ++(vlSymsp->__Vcoverage[838]);
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w = 0U;
        } else if ((1U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
            ++(vlSymsp->__Vcoverage[838]);
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[829]);
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                = (tb__DOT__i_core_model__DOT__alu_a_w 
                   - tb__DOT__i_core_model__DOT__alu_b_w);
        }
    } else if ((4U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
        if ((2U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
            if ((1U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
                ++(vlSymsp->__Vcoverage[837]);
                vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                    = (tb__DOT__i_core_model__DOT__alu_a_w 
                       & tb__DOT__i_core_model__DOT__alu_b_w);
            } else {
                ++(vlSymsp->__Vcoverage[836]);
                vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                    = (tb__DOT__i_core_model__DOT__alu_a_w 
                       | tb__DOT__i_core_model__DOT__alu_b_w);
            }
        } else if ((1U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
            ++(vlSymsp->__Vcoverage[831]);
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                = (tb__DOT__i_core_model__DOT__alu_a_w 
                   >> (0x1fU & tb__DOT__i_core_model__DOT__alu_b_w));
        } else {
            ++(vlSymsp->__Vcoverage[835]);
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                = (tb__DOT__i_core_model__DOT__alu_a_w 
                   ^ tb__DOT__i_core_model__DOT__alu_b_w);
        }
    } else if ((2U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
        if ((1U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
            ++(vlSymsp->__Vcoverage[834]);
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                = (tb__DOT__i_core_model__DOT__alu_a_w 
                   < tb__DOT__i_core_model__DOT__alu_b_w);
        } else {
            ++(vlSymsp->__Vcoverage[833]);
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                = VL_LTS_III(32, tb__DOT__i_core_model__DOT__alu_a_w, tb__DOT__i_core_model__DOT__alu_b_w);
        }
    } else if ((1U & (IData)(tb__DOT__i_core_model__DOT__alu_ctrl_w))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
            = (tb__DOT__i_core_model__DOT__alu_a_w 
               << (0x1fU & tb__DOT__i_core_model__DOT__alu_b_w));
    } else {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
            = (tb__DOT__i_core_model__DOT__alu_a_w 
               + tb__DOT__i_core_model__DOT__alu_b_w);
    }
    ++(vlSymsp->__Vcoverage[839]);
    if ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (1U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((2U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (2U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((4U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffffffbU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (4U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((8U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffffff7U & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (8U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffffffefU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffffffdfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffffffbfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x40U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffffff7fU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x80U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffffeffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x100U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffffdffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x200U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffffbffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x400U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffff7ffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x800U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffffefffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffffdfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffffbfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffff7fffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x8000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffeffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x10000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffdffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x20000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfffbffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x40000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfff7ffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x80000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffefffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x100000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffdfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x200000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xffbfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x400000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xff7fffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x800000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfeffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x1000000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfdffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x2000000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xfbffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x4000000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xf7ffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x8000000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xefffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x10000000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xdfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x20000000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0xbfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x40000000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if (((vlSelfRef.tb__DOT__i_core_model__DOT__next_pc 
          ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__next_pc) 
               | (0x80000000U & vlSelfRef.tb__DOT__i_core_model__DOT__next_pc));
    }
    if ((1U & ((IData)(vlSelfRef.tb__DOT__reg_addr) 
               ^ (IData)(vlSelfRef.tb__DOT____Vtogcov__reg_addr)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.tb__DOT____Vtogcov__reg_addr = ((0x1eU 
                                                   & (IData)(vlSelfRef.tb__DOT____Vtogcov__reg_addr)) 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.tb__DOT__reg_addr)));
    }
    if ((2U & ((IData)(vlSelfRef.tb__DOT__reg_addr) 
               ^ (IData)(vlSelfRef.tb__DOT____Vtogcov__reg_addr)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.tb__DOT____Vtogcov__reg_addr = ((0x1dU 
                                                   & (IData)(vlSelfRef.tb__DOT____Vtogcov__reg_addr)) 
                                                  | (2U 
                                                     & (IData)(vlSelfRef.tb__DOT__reg_addr)));
    }
    if ((4U & ((IData)(vlSelfRef.tb__DOT__reg_addr) 
               ^ (IData)(vlSelfRef.tb__DOT____Vtogcov__reg_addr)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.tb__DOT____Vtogcov__reg_addr = ((0x1bU 
                                                   & (IData)(vlSelfRef.tb__DOT____Vtogcov__reg_addr)) 
                                                  | (4U 
                                                     & (IData)(vlSelfRef.tb__DOT__reg_addr)));
    }
    if ((8U & ((IData)(vlSelfRef.tb__DOT__reg_addr) 
               ^ (IData)(vlSelfRef.tb__DOT____Vtogcov__reg_addr)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.tb__DOT____Vtogcov__reg_addr = ((0x17U 
                                                   & (IData)(vlSelfRef.tb__DOT____Vtogcov__reg_addr)) 
                                                  | (8U 
                                                     & (IData)(vlSelfRef.tb__DOT__reg_addr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tb__DOT__reg_addr) 
                  ^ (IData)(vlSelfRef.tb__DOT____Vtogcov__reg_addr)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.tb__DOT____Vtogcov__reg_addr = ((0xfU 
                                                   & (IData)(vlSelfRef.tb__DOT____Vtogcov__reg_addr)) 
                                                  | (0x10U 
                                                     & (IData)(vlSelfRef.tb__DOT__reg_addr)));
    }
    if (((0U == vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w) 
         ^ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_zero_w))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__alu_zero_w 
            = (0U == vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w);
    }
    if ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
               ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffffffeU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (1U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((2U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
               ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffffffdU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (2U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((4U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
               ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffffffbU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (4U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((8U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
               ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffffff7U 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (8U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                  ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffffffefU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x10U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                  ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffffffdfU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x20U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                  ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffffffbfU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x40U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                  ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffffff7fU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x80U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                   ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffffeffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x100U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                   ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffffdffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x200U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                   ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffffbffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x400U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                   ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffff7ffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x800U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                    ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffffefffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x1000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                    ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffffdfffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x2000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                    ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffffbfffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x4000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                    ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffff7fffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x8000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                     ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffeffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x10000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                     ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffdffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x20000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                     ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfffbffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x40000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                     ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfff7ffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x80000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                      ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffefffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x100000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                      ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffdfffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x200000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                      ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xffbfffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x400000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                      ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xff7fffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x800000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                       ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfeffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x1000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                       ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfdffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x2000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                       ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xfbffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x4000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                       ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xf7ffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x8000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                        ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xefffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x10000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                        ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xdfffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x20000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                        ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0xbfffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x40000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
    if (((vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
          ^ vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.tb__DOT____Vtogcov__mem_addr = ((0x7fffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_addr) 
                                                  | (0x80000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w));
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb__DOT__rstn) ^ (IData)(vlSelfRef.tb__DOT____Vtogcov__update))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.tb__DOT____Vtogcov__update = vlSelfRef.tb__DOT__rstn;
    }
    if (((IData)(vlSelfRef.tb__DOT__clk) ^ (IData)(vlSelfRef.tb__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.tb__DOT____Vtogcov__clk = vlSelfRef.tb__DOT__clk;
    }
    if ((1U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffffeU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (1U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((2U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffffdU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (2U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((4U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffffbU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (4U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((8U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffff7U 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (8U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffffefU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x10U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffffdfU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x20U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffffbfU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x40U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffff7fU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x80U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffeffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x100U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffdffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x200U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffffbffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x400U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffff7ffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x800U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffefffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x1000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffdfffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x2000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffffbfffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x4000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffff7fffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x8000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffeffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x10000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffdffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x20000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfffbffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x40000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfff7ffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x80000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffefffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x100000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffdfffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x200000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xffbfffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x400000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xff7fffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x800000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfeffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x1000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfdffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x2000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xfbffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x4000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xf7ffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x8000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xefffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x10000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xdfffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x20000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0xbfffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x40000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
    if (((vlSelfRef.tb__DOT__addr ^ vlSelfRef.tb__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.tb__DOT____Vtogcov__addr = ((0x7fffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__addr) 
                                              | (0x80000000U 
                                                 & vlSelfRef.tb__DOT__addr));
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__data = vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
        [(0x7ffU & (vlSelfRef.tb__DOT__addr >> 2U))];
    if ((1U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffffeU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (1U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((2U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffffdU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (2U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((4U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffffbU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (4U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((8U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffff7U 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (8U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffffefU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x10U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffffdfU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x20U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffffbfU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x40U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffff7fU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x80U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffeffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x100U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffdffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x200U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffffbffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x400U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffff7ffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x800U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffefffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x1000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffdfffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x2000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffffbfffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x4000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffff7fffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x8000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffeffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x10000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffdffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x20000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfffbffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x40000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfff7ffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x80000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffefffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x100000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffdfffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x200000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xffbfffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x400000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xff7fffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x800000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfeffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x1000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfdffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x2000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xfbffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x4000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xf7ffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x8000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xefffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x10000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xdfffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x20000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0xbfffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x40000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
    if (((vlSelfRef.tb__DOT__data ^ vlSelfRef.tb__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.tb__DOT____Vtogcov__data = ((0x7fffffffU 
                                               & vlSelfRef.tb__DOT____Vtogcov__data) 
                                              | (0x80000000U 
                                                 & vlSelfRef.tb__DOT__data));
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb__DOT__i_core_model__DOT__mem_read_word;
    tb__DOT__i_core_model__DOT__mem_read_word = 0;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__load_data_w;
    tb__DOT__i_core_model__DOT__load_data_w = 0;
    CData/*7:0*/ tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_0;
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_0 = 0;
    CData/*7:0*/ tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_1;
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_1 = 0;
    CData/*7:0*/ tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_2;
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_2 = 0;
    CData/*0:0*/ tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_3;
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_3 = 0;
    CData/*0:0*/ tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_4;
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_4 = 0;
    SData/*15:0*/ tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_5;
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_5 = 0;
    // Body
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_0 
        = (0xffU & vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
           [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                       >> 2U))]);
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_1 
        = (0xffU & (vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                    [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                                >> 2U))] >> 8U));
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_2 
        = (0xffU & (vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                    [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                                >> 2U))] >> 0x10U));
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_3 
        = (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                 [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                             >> 2U))] >> 0xfU));
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_4 
        = (vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
           [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                       >> 2U))] >> 0x1fU);
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_5 
        = (0xffffU & vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
           [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                       >> 2U))]);
    tb__DOT__i_core_model__DOT__mem_read_word = vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
        [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                    >> 2U))];
    if ((1U & (tb__DOT__i_core_model__DOT__mem_read_word 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (1U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((2U & (tb__DOT__i_core_model__DOT__mem_read_word 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (2U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((4U & (tb__DOT__i_core_model__DOT__mem_read_word 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffffffbU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (4U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((8U & (tb__DOT__i_core_model__DOT__mem_read_word 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffffff7U & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (8U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x10U & (tb__DOT__i_core_model__DOT__mem_read_word 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffffffefU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x10U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x20U & (tb__DOT__i_core_model__DOT__mem_read_word 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffffffdfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x20U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x40U & (tb__DOT__i_core_model__DOT__mem_read_word 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffffffbfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x40U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x80U & (tb__DOT__i_core_model__DOT__mem_read_word 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffffff7fU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x80U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x100U & (tb__DOT__i_core_model__DOT__mem_read_word 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffffeffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x100U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x200U & (tb__DOT__i_core_model__DOT__mem_read_word 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffffdffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x200U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x400U & (tb__DOT__i_core_model__DOT__mem_read_word 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffffbffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x400U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x800U & (tb__DOT__i_core_model__DOT__mem_read_word 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffff7ffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x800U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x1000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffffefffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x1000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x2000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffffdfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x2000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x4000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffffbfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x4000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x8000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffff7fffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x8000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x10000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffeffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x10000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x20000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffdffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x20000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x40000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfffbffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x40000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x80000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfff7ffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x80000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x100000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffefffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x100000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x200000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffdfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x200000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x400000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xffbfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x400000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x800000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xff7fffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x800000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x1000000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfeffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x1000000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x2000000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfdffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x2000000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x4000000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xfbffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x4000000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x8000000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xf7ffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x8000000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x10000000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xefffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x10000000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x20000000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xdfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x20000000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if ((0x40000000U & (tb__DOT__i_core_model__DOT__mem_read_word 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0xbfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x40000000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    if (((tb__DOT__i_core_model__DOT__mem_read_word 
          ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word) 
               | (0x80000000U & tb__DOT__i_core_model__DOT__mem_read_word));
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
        = tb__DOT__i_core_model__DOT__mem_read_word;
    if (vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w) {
        if ((0U == (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
            if ((0U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                    = ((0xffffff00U & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word) 
                       | (0xffU & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
                ++(vlSymsp->__Vcoverage[733]);
            } else {
                ++(vlSymsp->__Vcoverage[734]);
            }
            if ((1U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
                ++(vlSymsp->__Vcoverage[735]);
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                    = ((0xffff00ffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word) 
                       | (0xff00U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                                     << 8U)));
            } else {
                ++(vlSymsp->__Vcoverage[736]);
            }
            if ((2U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
                ++(vlSymsp->__Vcoverage[737]);
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                    = ((0xff00ffffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word) 
                       | (0xff0000U & (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                                       << 0x10U)));
            } else {
                ++(vlSymsp->__Vcoverage[738]);
            }
            if ((3U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
                ++(vlSymsp->__Vcoverage[739]);
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                    = ((0xffffffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word) 
                       | (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                          << 0x18U));
            } else {
                ++(vlSymsp->__Vcoverage[740]);
            }
            ++(vlSymsp->__Vcoverage[741]);
        } else if ((1U == (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
            if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w)) {
                ++(vlSymsp->__Vcoverage[743]);
            } else {
                ++(vlSymsp->__Vcoverage[742]);
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                    = ((0xffff0000U & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word) 
                       | (0xffffU & vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w));
            }
            if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w)) {
                ++(vlSymsp->__Vcoverage[744]);
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                    = ((0xffffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word) 
                       | (vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w 
                          << 0x10U));
            } else {
                ++(vlSymsp->__Vcoverage[745]);
            }
            ++(vlSymsp->__Vcoverage[746]);
        } else {
            ++(vlSymsp->__Vcoverage[747]);
            vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                = vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w;
        }
        ++(vlSymsp->__Vcoverage[748]);
    } else {
        ++(vlSymsp->__Vcoverage[749]);
    }
    ++(vlSymsp->__Vcoverage[750]);
    tb__DOT__i_core_model__DOT__load_data_w = tb__DOT__i_core_model__DOT__mem_read_word;
    if ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
        if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
            tb__DOT__i_core_model__DOT__load_data_w 
                = tb__DOT__i_core_model__DOT__mem_read_word;
            ++(vlSymsp->__Vcoverage[725]);
        } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
            if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w)) {
                ++(vlSymsp->__Vcoverage[721]);
            } else {
                ++(vlSymsp->__Vcoverage[720]);
                tb__DOT__i_core_model__DOT__load_data_w 
                    = (((- (IData)((IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_3))) 
                        << 0x10U) | (IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_5));
            }
            if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w)) {
                ++(vlSymsp->__Vcoverage[722]);
                tb__DOT__i_core_model__DOT__load_data_w 
                    = (((- (IData)((IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_4))) 
                        << 0x10U) | (vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                     [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                                                 >> 2U))] 
                                     >> 0x10U));
            } else {
                ++(vlSymsp->__Vcoverage[723]);
            }
            ++(vlSymsp->__Vcoverage[724]);
        } else {
            if ((0U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
                ++(vlSymsp->__Vcoverage[706]);
                tb__DOT__i_core_model__DOT__load_data_w 
                    = (((- (IData)((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                          [(0x7ffU 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                                               >> 2U))] 
                                          >> 7U)))) 
                        << 8U) | (IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_0));
            } else {
                ++(vlSymsp->__Vcoverage[707]);
            }
            if ((1U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
                ++(vlSymsp->__Vcoverage[708]);
                tb__DOT__i_core_model__DOT__load_data_w 
                    = (((- (IData)((IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_3))) 
                        << 8U) | (IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_1));
            } else {
                ++(vlSymsp->__Vcoverage[709]);
            }
            if ((2U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
                ++(vlSymsp->__Vcoverage[710]);
                tb__DOT__i_core_model__DOT__load_data_w 
                    = (((- (IData)((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                          [(0x7ffU 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                                               >> 2U))] 
                                          >> 0x17U)))) 
                        << 8U) | (IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_2));
            } else {
                ++(vlSymsp->__Vcoverage[711]);
            }
            if ((3U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
                ++(vlSymsp->__Vcoverage[712]);
                tb__DOT__i_core_model__DOT__load_data_w 
                    = (((- (IData)((IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_4))) 
                        << 8U) | (vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                  [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                                              >> 2U))] 
                                  >> 0x18U));
            } else {
                ++(vlSymsp->__Vcoverage[713]);
            }
            ++(vlSymsp->__Vcoverage[714]);
        }
    } else if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
        ++(vlSymsp->__Vcoverage[725]);
        tb__DOT__i_core_model__DOT__load_data_w = tb__DOT__i_core_model__DOT__mem_read_word;
    } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3))) {
        if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w)) {
            ++(vlSymsp->__Vcoverage[716]);
        } else {
            ++(vlSymsp->__Vcoverage[715]);
            tb__DOT__i_core_model__DOT__load_data_w 
                = tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_5;
        }
        if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w)) {
            ++(vlSymsp->__Vcoverage[717]);
            tb__DOT__i_core_model__DOT__load_data_w 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                                            >> 2U))], 0x10U);
        } else {
            ++(vlSymsp->__Vcoverage[718]);
        }
        ++(vlSymsp->__Vcoverage[719]);
    } else {
        if ((0U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
            ++(vlSymsp->__Vcoverage[697]);
            tb__DOT__i_core_model__DOT__load_data_w 
                = tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_0;
        } else {
            ++(vlSymsp->__Vcoverage[698]);
        }
        if ((1U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
            ++(vlSymsp->__Vcoverage[699]);
            tb__DOT__i_core_model__DOT__load_data_w 
                = tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_1;
        } else {
            ++(vlSymsp->__Vcoverage[700]);
        }
        if ((2U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
            ++(vlSymsp->__Vcoverage[701]);
            tb__DOT__i_core_model__DOT__load_data_w 
                = tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_0_2;
        } else {
            ++(vlSymsp->__Vcoverage[702]);
        }
        if ((3U == (3U & vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))) {
            ++(vlSymsp->__Vcoverage[703]);
            tb__DOT__i_core_model__DOT__load_data_w 
                = VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w 
                                            >> 2U))], 0x18U);
        } else {
            ++(vlSymsp->__Vcoverage[704]);
        }
        ++(vlSymsp->__Vcoverage[705]);
    }
    ++(vlSymsp->__Vcoverage[726]);
    if ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
               ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffffffeU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (1U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((2U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
               ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffffffdU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (2U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((4U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
               ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffffffbU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (4U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((8U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
               ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffffff7U 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (8U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                  ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffffffefU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x10U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                  ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffffffdfU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x20U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                  ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffffffbfU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x40U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                  ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffffff7fU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x80U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                   ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffffeffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x100U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                   ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffffdffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x200U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                   ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffffbffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x400U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                   ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffff7ffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x800U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                    ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffffefffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x1000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                    ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffffdfffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x2000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                    ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffffbfffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x4000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                    ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffff7fffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x8000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                     ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffeffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x10000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                     ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffdffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x20000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                     ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfffbffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x40000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                     ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfff7ffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x80000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                      ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffefffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x100000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                      ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffdfffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x200000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                      ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xffbfffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x400000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                      ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xff7fffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x800000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                       ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfeffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x1000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                       ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfdffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x2000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                       ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xfbffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x4000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                       ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xf7ffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x8000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                        ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xefffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x10000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                        ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xdfffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x20000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
                        ^ vlSelfRef.tb__DOT____Vtogcov__mem_data))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0xbfffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x40000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if (((vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word 
          ^ vlSelfRef.tb__DOT____Vtogcov__mem_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.tb__DOT____Vtogcov__mem_data = ((0x7fffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__mem_data) 
                                                  | (0x80000000U 
                                                     & vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word));
    }
    if ((1U & (tb__DOT__i_core_model__DOT__load_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (1U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((2U & (tb__DOT__i_core_model__DOT__load_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (2U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((4U & (tb__DOT__i_core_model__DOT__load_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffffffbU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (4U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((8U & (tb__DOT__i_core_model__DOT__load_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffffff7U & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (8U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x10U & (tb__DOT__i_core_model__DOT__load_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffffffefU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x10U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x20U & (tb__DOT__i_core_model__DOT__load_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffffffdfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x20U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x40U & (tb__DOT__i_core_model__DOT__load_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffffffbfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x40U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x80U & (tb__DOT__i_core_model__DOT__load_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffffff7fU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x80U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x100U & (tb__DOT__i_core_model__DOT__load_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffffeffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x100U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x200U & (tb__DOT__i_core_model__DOT__load_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffffdffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x200U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x400U & (tb__DOT__i_core_model__DOT__load_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffffbffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x400U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x800U & (tb__DOT__i_core_model__DOT__load_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffff7ffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x800U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x1000U & (tb__DOT__i_core_model__DOT__load_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffffefffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x1000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x2000U & (tb__DOT__i_core_model__DOT__load_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffffdfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x2000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x4000U & (tb__DOT__i_core_model__DOT__load_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffffbfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x4000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x8000U & (tb__DOT__i_core_model__DOT__load_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffff7fffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x8000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x10000U & (tb__DOT__i_core_model__DOT__load_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffeffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x10000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x20000U & (tb__DOT__i_core_model__DOT__load_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffdffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x20000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x40000U & (tb__DOT__i_core_model__DOT__load_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfffbffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x40000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x80000U & (tb__DOT__i_core_model__DOT__load_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfff7ffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x80000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x100000U & (tb__DOT__i_core_model__DOT__load_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffefffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x100000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x200000U & (tb__DOT__i_core_model__DOT__load_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffdfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x200000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x400000U & (tb__DOT__i_core_model__DOT__load_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xffbfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x400000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x800000U & (tb__DOT__i_core_model__DOT__load_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xff7fffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x800000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x1000000U & (tb__DOT__i_core_model__DOT__load_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfeffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x1000000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x2000000U & (tb__DOT__i_core_model__DOT__load_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfdffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x2000000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x4000000U & (tb__DOT__i_core_model__DOT__load_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xfbffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x4000000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x8000000U & (tb__DOT__i_core_model__DOT__load_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xf7ffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x8000000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x10000000U & (tb__DOT__i_core_model__DOT__load_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xefffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x10000000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x20000000U & (tb__DOT__i_core_model__DOT__load_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xdfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x20000000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((0x40000000U & (tb__DOT__i_core_model__DOT__load_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0xbfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x40000000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if (((tb__DOT__i_core_model__DOT__load_data_w ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__load_data_w) 
               | (0x80000000U & tb__DOT__i_core_model__DOT__load_data_w));
    }
    if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w))) {
        if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                = vlSelfRef.tb__DOT__i_core_model__DOT__imm_w;
            ++(vlSymsp->__Vcoverage[730]);
        } else {
            ++(vlSymsp->__Vcoverage[729]);
            vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                = ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg);
        }
    } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
            = tb__DOT__i_core_model__DOT__load_data_w;
    } else {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
            = vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w;
    }
    ++(vlSymsp->__Vcoverage[732]);
    if ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffffffeU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (1U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((2U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffffffdU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (2U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((4U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffffffbU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (4U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((8U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
               ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffffff7U & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (8U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffffffefU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffffffdfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffffffbfU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x40U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                  ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffffff7fU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x80U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffffeffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x100U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffffdffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x200U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffffbffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x400U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                   ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffff7ffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x800U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffffefffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffffdfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffffbfffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                    ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffff7fffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x8000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffeffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x10000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffdffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x20000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfffbffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x40000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                     ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfff7ffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x80000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffefffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x100000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffdfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x200000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xffbfffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x400000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                      ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xff7fffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x800000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfeffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x1000000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfdffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x2000000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xfbffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x4000000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                       ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xf7ffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x8000000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xefffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x10000000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xdfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x20000000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
                        ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0xbfffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x40000000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    if (((vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w 
          ^ vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w 
            = ((0x7fffffffU & vlSelfRef.tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w) 
               | (0x80000000U & vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w));
    }
    vlSelfRef.tb__DOT__reg_data = ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT____Vcellinp__u_regfile__we_i)
                                    ? vlSelfRef.tb__DOT__i_core_model__DOT__wb_data_w
                                    : 0U);
    if ((1U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffffffeU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (1U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((2U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffffffdU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (2U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((4U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffffffbU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (4U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((8U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffffff7U 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (8U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x10U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffffffefU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x10U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x20U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffffffdfU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x20U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x40U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffffffbfU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x40U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x80U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffffff7fU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x80U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x100U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffffeffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x100U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x200U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffffdffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x200U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x400U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffffbffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x400U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x800U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffff7ffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x800U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x1000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffffefffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x1000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x2000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffffdfffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x2000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x4000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffffbfffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x4000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x8000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffff7fffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x8000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x10000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffeffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x10000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x20000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffdffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x20000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x40000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfffbffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x40000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x80000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfff7ffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x80000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x100000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffefffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x100000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x200000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffdfffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x200000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x400000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xffbfffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x400000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x800000U & (vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xff7fffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x800000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x1000000U & (vlSelfRef.tb__DOT__reg_data 
                       ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfeffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x1000000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x2000000U & (vlSelfRef.tb__DOT__reg_data 
                       ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfdffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x2000000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x4000000U & (vlSelfRef.tb__DOT__reg_data 
                       ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xfbffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x4000000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x8000000U & (vlSelfRef.tb__DOT__reg_data 
                       ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xf7ffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x8000000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x10000000U & (vlSelfRef.tb__DOT__reg_data 
                        ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xefffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x10000000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x20000000U & (vlSelfRef.tb__DOT__reg_data 
                        ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xdfffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x20000000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if ((0x40000000U & (vlSelfRef.tb__DOT__reg_data 
                        ^ vlSelfRef.tb__DOT____Vtogcov__reg_data))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0xbfffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x40000000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
    if (((vlSelfRef.tb__DOT__reg_data ^ vlSelfRef.tb__DOT____Vtogcov__reg_data) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.tb__DOT____Vtogcov__reg_data = ((0x7fffffffU 
                                                   & vlSelfRef.tb__DOT____Vtogcov__reg_data) 
                                                  | (0x80000000U 
                                                     & vlSelfRef.tb__DOT__reg_data));
    }
}
