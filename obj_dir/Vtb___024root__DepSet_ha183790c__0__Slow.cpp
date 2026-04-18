// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb.rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb.rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__reg_addr = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__reg_data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT____Vtogcov__addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT____Vtogcov__data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT____Vtogcov__pc = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT____Vtogcov__instr_ = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT____Vtogcov__instr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT____Vtogcov__reg_addr = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT____Vtogcov__reg_data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT____Vtogcov__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT____Vtogcov__mem_data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT____Vtogcov__update = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT____Vtogcov__mem_wrt = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb__DOT__i_core_model__DOT__instr_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb__DOT__i_core_model__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__i_core_model__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__rd_addr_w = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT__imm_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__mem_we_w = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__wb_sel_w = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__i_core_model__DOT__rs2_data_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__wb_data_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vcellinp__u_regfile__we_i = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__alu_res_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__mem_write_word = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__instr_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__imm_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__reg_we_w = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__alu_src_w = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__pc_to_alu_w = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__branch_w = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__jump_w = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__jalr_w = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__wb_sel_w = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__funct3_w = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__alu_zero_w = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT____Vtogcov__load_data_w = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__i_core_model__DOT__u_regfile__DOT____Vtogcov__we_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rstn__0 = VL_RAND_RESET_I(1);
}
