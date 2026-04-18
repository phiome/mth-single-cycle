// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    VL_PRINTF_MT("-Info: tb/tb.sv:82: $dumpvar ignored, as Verilated without --trace\n");
    ++(vlSymsp->__Vcoverage[278]);
    VL_READMEM_N(true, 32, 2048, 0, std::string{"imem.mem"}
                 ,  &(vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem)
                 , 0U, 0x7ffU);
    VL_READMEM_N(true, 32, 2048, 0, std::string{"dmem.mem"}
                 ,  &(vlSelfRef.tb__DOT__i_core_model__DOT__data_mem)
                 , 0U, 0x7ffU);
    ++(vlSymsp->__Vcoverage[319]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.tb__DOT__data = vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
        [(0x7ffU & (vlSelfRef.tb__DOT__addr >> 2U))];
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

VL_ATTR_COLD void Vtb___024root___configure_coverage(Vtb___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___configure_coverage\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "tb/tb.sv", 3, 34, ".tb", "v_toggle/tb", "addr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tb/tb.sv", 4, 34, ".tb", "v_toggle/tb", "data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "tb/tb.sv", 5, 34, ".tb", "v_toggle/tb", "pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "tb/tb.sv", 6, 34, ".tb", "v_toggle/tb", "instr_[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "tb/tb.sv", 7, 34, ".tb", "v_toggle/tb", "instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "tb/tb.sv", 8, 34, ".tb", "v_toggle/tb", "reg_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "tb/tb.sv", 8, 34, ".tb", "v_toggle/tb", "reg_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "tb/tb.sv", 8, 34, ".tb", "v_toggle/tb", "reg_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "tb/tb.sv", 8, 34, ".tb", "v_toggle/tb", "reg_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "tb/tb.sv", 8, 34, ".tb", "v_toggle/tb", "reg_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "tb/tb.sv", 9, 34, ".tb", "v_toggle/tb", "reg_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "tb/tb.sv", 10, 34, ".tb", "v_toggle/tb", "mem_addr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "tb/tb.sv", 11, 34, ".tb", "v_toggle/tb", "mem_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "tb/tb.sv", 12, 34, ".tb", "v_toggle/tb", "update", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "tb/tb.sv", 13, 34, ".tb", "v_toggle/tb", "mem_wrt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "tb/tb.sv", 14, 12, ".tb", "v_toggle/tb", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "tb/tb.sv", 15, 12, ".tb", "v_toggle/tb", "rstn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "tb/tb.sv", 46, 11, ".tb", "v_branch/tb", "if", "46-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "tb/tb.sv", 46, 12, ".tb", "v_branch/tb", "else", "48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "tb/tb.sv", 43, 9, ".tb", "v_branch/tb", "if", "43-44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "tb/tb.sv", 43, 10, ".tb", "v_branch/tb", "else", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "tb/tb.sv", 52, 9, ".tb", "v_branch/tb", "if", "52-53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "tb/tb.sv", 52, 10, ".tb", "v_branch/tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "tb/tb.sv", 42, 7, ".tb", "v_branch/tb", "if", "42,55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "tb/tb.sv", 42, 8, ".tb", "v_branch/tb", "else", "57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "tb/tb.sv", 41, 5, ".tb", "v_line/tb", "block", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "tb/tb.sv", 38, 3, ".tb", "v_line/tb", "block", "38-40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "tb/tb.sv", 61, 5, ".tb", "v_line/tb", "block", "61-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "tb/tb.sv", 60, 3, ".tb", "v_line/tb", "block", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "tb/tb.sv", 72, 5, ".tb", "v_line/tb", "block", "72-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "tb/tb.sv", 67, 3, ".tb", "v_line/tb", "block", "67-72,76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "tb/tb.sv", 80, 3, ".tb", "v_line/tb", "block", "80-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "src/pkg/descrambler.sv", 4, 20, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "src/pkg/descrambler.sv", 5, 21, ".tb.i_descrambler", "v_toggle/descrambler", "instruction_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "src/pkg/descrambler.sv", 8, 2, ".tb.i_descrambler", "v_line/descrambler", "block", "8-9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "src/pkg/descrambler.sv", 29, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "src/pkg/descrambler.sv", 30, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "src/pkg/descrambler.sv", 31, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "src/pkg/descrambler.sv", 32, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "src/pkg/descrambler.sv", 33, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "src/pkg/descrambler.sv", 34, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "src/pkg/descrambler.sv", 35, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "src/pkg/descrambler.sv", 36, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "src/pkg/descrambler.sv", 37, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "src/pkg/descrambler.sv", 38, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "src/pkg/descrambler.sv", 39, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "src/pkg/descrambler.sv", 40, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "src/pkg/descrambler.sv", 41, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "src/pkg/descrambler.sv", 42, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "src/pkg/descrambler.sv", 43, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "src/pkg/descrambler.sv", 44, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "src/pkg/descrambler.sv", 45, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "src/pkg/descrambler.sv", 46, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "src/pkg/descrambler.sv", 47, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "src/pkg/descrambler.sv", 48, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "src/pkg/descrambler.sv", 49, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "src/pkg/descrambler.sv", 50, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "src/pkg/descrambler.sv", 51, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "src/pkg/descrambler.sv", 52, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "src/pkg/descrambler.sv", 53, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "src/pkg/descrambler.sv", 54, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "src/pkg/descrambler.sv", 55, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "src/pkg/descrambler.sv", 56, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "src/pkg/descrambler.sv", 57, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "src/pkg/descrambler.sv", 58, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "src/pkg/descrambler.sv", 59, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "src/pkg/descrambler.sv", 60, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "src/pkg/descrambler.sv", 61, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "src/pkg/descrambler.sv", 62, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "src/pkg/descrambler.sv", 63, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "src/pkg/descrambler.sv", 64, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "src/pkg/descrambler.sv", 65, 28, ".tb.i_descrambler", "v_line/descrambler", "case", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "src/pkg/descrambler.sv", 66, 4, ".tb.i_descrambler", "v_line/descrambler", "case", "66,68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "src/pkg/descrambler.sv", 12, 33, ".tb.i_descrambler", "v_line/descrambler", "block", "12-13,15-22,24-26,28,72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "src/riscv_singlecycle.sv", 7, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "src/riscv_singlecycle.sv", 8, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rstn_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "src/riscv_singlecycle.sv", 9, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "addr_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "src/riscv_singlecycle.sv", 10, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "update_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "src/riscv_singlecycle.sv", 11, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "data_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "src/riscv_singlecycle.sv", 12, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "src/riscv_singlecycle.sv", 13, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "src/riscv_singlecycle.sv", 14, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "src/riscv_singlecycle.sv", 14, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "src/riscv_singlecycle.sv", 14, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "src/riscv_singlecycle.sv", 14, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_addr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "src/riscv_singlecycle.sv", 14, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_addr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "src/riscv_singlecycle.sv", 15, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_data_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "src/riscv_singlecycle.sv", 16, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_addr_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "src/riscv_singlecycle.sv", 17, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_data_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "src/riscv_singlecycle.sv", 18, 31, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_wrt_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "src/riscv_singlecycle.sv", 29, 5, ".tb.i_core_model", "v_line/riscv_singlecycle", "block", "29-31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "src/riscv_singlecycle.sv", 40, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_reg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "src/riscv_singlecycle.sv", 41, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "next_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "src/riscv_singlecycle.sv", 42, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "instr_w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "src/riscv_singlecycle.sv", 46, 9, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "src/riscv_singlecycle.sv", 46, 10, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "src/riscv_singlecycle.sv", 46, 13, ".tb.i_core_model", "v_expr/riscv_singlecycle", "(rstn_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "src/riscv_singlecycle.sv", 46, 13, ".tb.i_core_model", "v_expr/riscv_singlecycle", "(rstn_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "src/riscv_singlecycle.sv", 45, 5, ".tb.i_core_model", "v_line/riscv_singlecycle", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "src/riscv_singlecycle.sv", 57, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_addr_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "src/riscv_singlecycle.sv", 57, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_addr_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "src/riscv_singlecycle.sv", 57, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_addr_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "src/riscv_singlecycle.sv", 57, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_addr_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "src/riscv_singlecycle.sv", 57, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_addr_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "src/riscv_singlecycle.sv", 57, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_addr_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "src/riscv_singlecycle.sv", 57, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_addr_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "src/riscv_singlecycle.sv", 57, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_addr_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "src/riscv_singlecycle.sv", 57, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_addr_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "src/riscv_singlecycle.sv", 57, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_addr_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "src/riscv_singlecycle.sv", 57, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rd_addr_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "src/riscv_singlecycle.sv", 57, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rd_addr_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "src/riscv_singlecycle.sv", 57, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rd_addr_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "src/riscv_singlecycle.sv", 57, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rd_addr_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "src/riscv_singlecycle.sv", 57, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rd_addr_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "src/riscv_singlecycle.sv", 58, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "imm_w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "src/riscv_singlecycle.sv", 59, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "reg_we_w", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "src/riscv_singlecycle.sv", 59, 28, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_src_w", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "src/riscv_singlecycle.sv", 59, 39, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "pc_to_alu_w", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "src/riscv_singlecycle.sv", 59, 52, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_we_w", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "src/riscv_singlecycle.sv", 59, 62, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "branch_w", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "src/riscv_singlecycle.sv", 59, 72, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "jump_w", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "src/riscv_singlecycle.sv", 59, 80, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "jalr_w", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "src/riscv_singlecycle.sv", 60, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_sel_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "src/riscv_singlecycle.sv", 60, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_sel_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "src/riscv_singlecycle.sv", 61, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_ctrl_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "src/riscv_singlecycle.sv", 61, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_ctrl_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "src/riscv_singlecycle.sv", 61, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_ctrl_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "src/riscv_singlecycle.sv", 61, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_ctrl_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "src/riscv_singlecycle.sv", 62, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "funct3_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "src/riscv_singlecycle.sv", 62, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "funct3_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "src/riscv_singlecycle.sv", 62, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "funct3_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "src/riscv_singlecycle.sv", 63, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "unused_branch_type[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "src/riscv_singlecycle.sv", 63, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "unused_branch_type[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "src/riscv_singlecycle.sv", 63, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "unused_branch_type[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "src/riscv_singlecycle.sv", 90, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs1_data_w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "src/riscv_singlecycle.sv", 90, 30, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "rs2_data_w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "src/riscv_singlecycle.sv", 90, 42, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "wb_data_w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "src/riscv_singlecycle.sv", 108, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_a_w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "src/riscv_singlecycle.sv", 108, 27, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_b_w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "src/riscv_singlecycle.sv", 108, 36, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_res_w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "src/riscv_singlecycle.sv", 109, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "alu_zero_w", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "src/riscv_singlecycle.sv", 128, 11, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "branch_taken", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "src/riscv_singlecycle.sv", 135, 23, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "src/riscv_singlecycle.sv", 136, 23, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "src/riscv_singlecycle.sv", 137, 23, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "137");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "src/riscv_singlecycle.sv", 138, 23, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "src/riscv_singlecycle.sv", 139, 23, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "src/riscv_singlecycle.sv", 140, 23, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[622]), first, "src/riscv_singlecycle.sv", 141, 17, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[623]), first, "src/riscv_singlecycle.sv", 133, 9, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "133-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[624]), first, "src/riscv_singlecycle.sv", 133, 10, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[625]), first, "src/riscv_singlecycle.sv", 131, 5, ".tb.i_core_model", "v_line/riscv_singlecycle", "block", "131-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "src/riscv_singlecycle.sv", 150, 14, ".tb.i_core_model", "v_line/riscv_singlecycle", "if", "150-151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "src/riscv_singlecycle.sv", 150, 15, ".tb.i_core_model", "v_line/riscv_singlecycle", "else", "153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[628]), first, "src/riscv_singlecycle.sv", 150, 25, ".tb.i_core_model", "v_expr/riscv_singlecycle", "(branch_taken==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[629]), first, "src/riscv_singlecycle.sv", 150, 25, ".tb.i_core_model", "v_expr/riscv_singlecycle", "(jump_w==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[630]), first, "src/riscv_singlecycle.sv", 150, 25, ".tb.i_core_model", "v_expr/riscv_singlecycle", "(jump_w==0 && branch_taken==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[631]), first, "src/riscv_singlecycle.sv", 148, 9, ".tb.i_core_model", "v_line/riscv_singlecycle", "elsif", "148-149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "src/riscv_singlecycle.sv", 147, 5, ".tb.i_core_model", "v_line/riscv_singlecycle", "block", "147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[633]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[635]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[636]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[637]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[638]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[639]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[640]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[641]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[642]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[643]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[644]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[645]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[646]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[647]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[648]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[650]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[651]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[652]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[653]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[654]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[655]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[656]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[657]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[658]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[659]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[660]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[661]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[662]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[663]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[664]), first, "src/riscv_singlecycle.sv", 160, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_read_word[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[665]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[666]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[667]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[668]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[669]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[670]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[671]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[672]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[673]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[674]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[675]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[676]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[678]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[679]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[680]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[681]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[682]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[683]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[684]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[685]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[686]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[687]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[688]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[689]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[690]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[691]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[692]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[693]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[694]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[695]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[696]), first, "src/riscv_singlecycle.sv", 161, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "load_data_w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[697]), first, "src/riscv_singlecycle.sv", 171, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[698]), first, "src/riscv_singlecycle.sv", 171, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[699]), first, "src/riscv_singlecycle.sv", 172, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[700]), first, "src/riscv_singlecycle.sv", 172, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[701]), first, "src/riscv_singlecycle.sv", 173, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[702]), first, "src/riscv_singlecycle.sv", 173, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[703]), first, "src/riscv_singlecycle.sv", 174, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[704]), first, "src/riscv_singlecycle.sv", 174, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[705]), first, "src/riscv_singlecycle.sv", 170, 19, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[706]), first, "src/riscv_singlecycle.sv", 177, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[707]), first, "src/riscv_singlecycle.sv", 177, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[708]), first, "src/riscv_singlecycle.sv", 178, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[709]), first, "src/riscv_singlecycle.sv", 178, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[710]), first, "src/riscv_singlecycle.sv", 179, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[711]), first, "src/riscv_singlecycle.sv", 179, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[712]), first, "src/riscv_singlecycle.sv", 180, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[713]), first, "src/riscv_singlecycle.sv", 180, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[714]), first, "src/riscv_singlecycle.sv", 176, 19, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "176");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[715]), first, "src/riscv_singlecycle.sv", 183, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[716]), first, "src/riscv_singlecycle.sv", 183, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[717]), first, "src/riscv_singlecycle.sv", 184, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "184");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[718]), first, "src/riscv_singlecycle.sv", 184, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[719]), first, "src/riscv_singlecycle.sv", 182, 19, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[720]), first, "src/riscv_singlecycle.sv", 187, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[721]), first, "src/riscv_singlecycle.sv", 187, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[722]), first, "src/riscv_singlecycle.sv", 188, 17, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[723]), first, "src/riscv_singlecycle.sv", 188, 18, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[724]), first, "src/riscv_singlecycle.sv", 186, 19, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[725]), first, "src/riscv_singlecycle.sv", 190, 13, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[726]), first, "src/riscv_singlecycle.sv", 167, 5, ".tb.i_core_model", "v_line/riscv_singlecycle", "block", "167-169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[727]), first, "src/riscv_singlecycle.sv", 197, 18, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[728]), first, "src/riscv_singlecycle.sv", 198, 18, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[729]), first, "src/riscv_singlecycle.sv", 199, 18, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[730]), first, "src/riscv_singlecycle.sv", 200, 18, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[731]), first, "src/riscv_singlecycle.sv", 201, 13, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[732]), first, "src/riscv_singlecycle.sv", 195, 5, ".tb.i_core_model", "v_line/riscv_singlecycle", "block", "195-196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "src/riscv_singlecycle.sv", 206, 18, ".tb.i_core_model", "v_toggle/riscv_singlecycle", "mem_write_word[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[733]), first, "src/riscv_singlecycle.sv", 213, 21, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[734]), first, "src/riscv_singlecycle.sv", 213, 22, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[735]), first, "src/riscv_singlecycle.sv", 214, 21, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[736]), first, "src/riscv_singlecycle.sv", 214, 22, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[737]), first, "src/riscv_singlecycle.sv", 215, 21, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[738]), first, "src/riscv_singlecycle.sv", 215, 22, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[739]), first, "src/riscv_singlecycle.sv", 216, 21, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[740]), first, "src/riscv_singlecycle.sv", 216, 22, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[741]), first, "src/riscv_singlecycle.sv", 212, 23, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[742]), first, "src/riscv_singlecycle.sv", 219, 21, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "219");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[743]), first, "src/riscv_singlecycle.sv", 219, 22, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[744]), first, "src/riscv_singlecycle.sv", 220, 21, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[745]), first, "src/riscv_singlecycle.sv", 220, 22, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[746]), first, "src/riscv_singlecycle.sv", 218, 23, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "src/riscv_singlecycle.sv", 222, 17, ".tb.i_core_model", "v_line/riscv_singlecycle", "case", "222");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "src/riscv_singlecycle.sv", 210, 9, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "210-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "src/riscv_singlecycle.sv", 210, 10, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "src/riscv_singlecycle.sv", 208, 5, ".tb.i_core_model", "v_line/riscv_singlecycle", "block", "208-209");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "src/riscv_singlecycle.sv", 229, 9, ".tb.i_core_model", "v_branch/riscv_singlecycle", "if", "229-230");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "src/riscv_singlecycle.sv", 229, 10, ".tb.i_core_model", "v_branch/riscv_singlecycle", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "src/riscv_singlecycle.sv", 228, 5, ".tb.i_core_model", "v_line/riscv_singlecycle", "block", "228");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "src/decoder.sv", 5, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "src/decoder.sv", 6, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "instr_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "src/decoder.sv", 9, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rs1_addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "src/decoder.sv", 9, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rs1_addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "src/decoder.sv", 9, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rs1_addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "src/decoder.sv", 9, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rs1_addr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "src/decoder.sv", 9, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rs1_addr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "src/decoder.sv", 10, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rs2_addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "src/decoder.sv", 10, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rs2_addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "src/decoder.sv", 10, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rs2_addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "src/decoder.sv", 10, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rs2_addr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "src/decoder.sv", 10, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rs2_addr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "src/decoder.sv", 11, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rd_addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "src/decoder.sv", 11, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rd_addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "src/decoder.sv", 11, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rd_addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "src/decoder.sv", 11, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rd_addr_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "src/decoder.sv", 11, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "rd_addr_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "src/decoder.sv", 12, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "imm_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "src/decoder.sv", 15, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "reg_we_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "src/decoder.sv", 16, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "alu_src_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "src/decoder.sv", 17, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "pc_to_alu_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "src/decoder.sv", 18, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "alu_ctrl_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "src/decoder.sv", 18, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "alu_ctrl_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "src/decoder.sv", 18, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "alu_ctrl_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "src/decoder.sv", 18, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "alu_ctrl_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "src/decoder.sv", 19, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "mem_we_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "src/decoder.sv", 20, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "wb_sel_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "src/decoder.sv", 20, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "wb_sel_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "src/decoder.sv", 21, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "branch_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "src/decoder.sv", 22, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "branch_type_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "src/decoder.sv", 22, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "branch_type_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "src/decoder.sv", 22, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "branch_type_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "src/decoder.sv", 23, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "jump_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "src/decoder.sv", 24, 25, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "jalr_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "src/decoder.sv", 28, 17, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "opcode[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "src/decoder.sv", 28, 17, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "opcode[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "src/decoder.sv", 28, 17, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "opcode[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "src/decoder.sv", 28, 17, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "opcode[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[758]), first, "src/decoder.sv", 28, 17, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "opcode[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[759]), first, "src/decoder.sv", 28, 17, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "opcode[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[760]), first, "src/decoder.sv", 28, 17, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "opcode[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "src/decoder.sv", 29, 17, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "funct3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "src/decoder.sv", 29, 17, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "funct3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "src/decoder.sv", 29, 17, ".tb.i_core_model.u_decoder", "v_toggle/decoder", "funct3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[761]), first, "src/decoder.sv", 56, 23, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "56-59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[762]), first, "src/decoder.sv", 63, 23, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "63-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "src/decoder.sv", 73, 23, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "73-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "src/decoder.sv", 81, 23, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "81-86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "src/decoder.sv", 90, 23, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "90-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "src/decoder.sv", 99, 23, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "99-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "src/decoder.sv", 108, 23, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "108-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "src/decoder.sv", 122, 17, ".tb.i_core_model.u_decoder", "v_branch/decoder", "if", "122-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "src/decoder.sv", 122, 18, ".tb.i_core_model.u_decoder", "v_branch/decoder", "else", "124-125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "src/decoder.sv", 122, 38, ".tb.i_core_model.u_decoder", "v_expr/decoder", "((funct3 == 3'h5)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "src/decoder.sv", 122, 38, ".tb.i_core_model.u_decoder", "v_expr/decoder", "((funct3 == 3'h1)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "src/decoder.sv", 122, 38, ".tb.i_core_model.u_decoder", "v_expr/decoder", "((funct3 == 3'h1)==0 && (funct3 == 3'h5)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "src/decoder.sv", 130, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "src/decoder.sv", 131, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "src/decoder.sv", 132, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "src/decoder.sv", 133, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "src/decoder.sv", 134, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "src/decoder.sv", 135, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "src/decoder.sv", 136, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "src/decoder.sv", 140, 30, ".tb.i_core_model.u_decoder", "v_branch/decoder", "if", "140-141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "src/decoder.sv", 140, 31, ".tb.i_core_model.u_decoder", "v_branch/decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "src/decoder.sv", 138, 25, ".tb.i_core_model.u_decoder", "v_line/decoder", "elsif", "138-139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "src/decoder.sv", 137, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "137");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "src/decoder.sv", 143, 21, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "src/decoder.sv", 116, 23, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "116-119,129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "src/decoder.sv", 156, 30, ".tb.i_core_model.u_decoder", "v_branch/decoder", "if", "156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "src/decoder.sv", 156, 31, ".tb.i_core_model.u_decoder", "v_branch/decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "src/decoder.sv", 155, 25, ".tb.i_core_model.u_decoder", "v_line/decoder", "elsif", "155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "src/decoder.sv", 154, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "src/decoder.sv", 158, 29, ".tb.i_core_model.u_decoder", "v_branch/decoder", "if", "158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "src/decoder.sv", 158, 30, ".tb.i_core_model.u_decoder", "v_branch/decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "src/decoder.sv", 158, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "src/decoder.sv", 159, 29, ".tb.i_core_model.u_decoder", "v_branch/decoder", "if", "159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "src/decoder.sv", 159, 30, ".tb.i_core_model.u_decoder", "v_branch/decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "src/decoder.sv", 159, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "src/decoder.sv", 160, 29, ".tb.i_core_model.u_decoder", "v_branch/decoder", "if", "160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "src/decoder.sv", 160, 30, ".tb.i_core_model.u_decoder", "v_branch/decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "src/decoder.sv", 160, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "src/decoder.sv", 161, 29, ".tb.i_core_model.u_decoder", "v_branch/decoder", "if", "161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "src/decoder.sv", 161, 30, ".tb.i_core_model.u_decoder", "v_branch/decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "src/decoder.sv", 161, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "src/decoder.sv", 164, 30, ".tb.i_core_model.u_decoder", "v_branch/decoder", "if", "164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "src/decoder.sv", 164, 31, ".tb.i_core_model.u_decoder", "v_branch/decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[804]), first, "src/decoder.sv", 163, 25, ".tb.i_core_model.u_decoder", "v_line/decoder", "elsif", "163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[805]), first, "src/decoder.sv", 162, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[806]), first, "src/decoder.sv", 166, 29, ".tb.i_core_model.u_decoder", "v_branch/decoder", "if", "166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[807]), first, "src/decoder.sv", 166, 30, ".tb.i_core_model.u_decoder", "v_branch/decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[808]), first, "src/decoder.sv", 166, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[809]), first, "src/decoder.sv", 167, 29, ".tb.i_core_model.u_decoder", "v_branch/decoder", "if", "167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[810]), first, "src/decoder.sv", 167, 30, ".tb.i_core_model.u_decoder", "v_branch/decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[811]), first, "src/decoder.sv", 167, 27, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[812]), first, "src/decoder.sv", 168, 21, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[813]), first, "src/decoder.sv", 148, 23, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "148-151,153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[814]), first, "src/decoder.sv", 172, 13, ".tb.i_core_model.u_decoder", "v_line/decoder", "case", "172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[815]), first, "src/decoder.sv", 38, 5, ".tb.i_core_model.u_decoder", "v_line/decoder", "block", "38,40-50,53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "src/register_file.sv", 4, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "src/register_file.sv", 5, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rstn_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[816]), first, "src/register_file.sv", 6, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "we_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "src/register_file.sv", 8, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "src/register_file.sv", 8, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "src/register_file.sv", 8, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "src/register_file.sv", 8, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_addr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "src/register_file.sv", 8, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_addr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "src/register_file.sv", 9, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "src/register_file.sv", 9, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "src/register_file.sv", 9, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "src/register_file.sv", 9, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_addr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "src/register_file.sv", 9, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_addr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "src/register_file.sv", 10, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_addr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "src/register_file.sv", 10, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_addr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "src/register_file.sv", 10, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_addr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "src/register_file.sv", 10, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_addr_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "src/register_file.sv", 10, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_addr_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "src/register_file.sv", 12, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rd_data_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "src/register_file.sv", 14, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs1_data_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "src/register_file.sv", 15, 30, ".tb.i_core_model.u_regfile", "v_toggle/register_file", "rs2_data_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[817]), first, "src/register_file.sv", 34, 13, ".tb.i_core_model.u_regfile", "v_line/register_file", "block", "34-35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[818]), first, "src/register_file.sv", 40, 13, ".tb.i_core_model.u_regfile", "v_branch/register_file", "if", "40-41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[819]), first, "src/register_file.sv", 40, 14, ".tb.i_core_model.u_regfile", "v_branch/register_file", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[820]), first, "src/register_file.sv", 40, 22, ".tb.i_core_model.u_regfile", "v_expr/register_file", "(we_i==1 && (rd_addr_i != 5'h0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[821]), first, "src/register_file.sv", 40, 22, ".tb.i_core_model.u_regfile", "v_expr/register_file", "((rd_addr_i != 5'h0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[822]), first, "src/register_file.sv", 40, 22, ".tb.i_core_model.u_regfile", "v_expr/register_file", "(we_i==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[823]), first, "src/register_file.sv", 32, 9, ".tb.i_core_model.u_regfile", "v_branch/register_file", "if", "32,34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[824]), first, "src/register_file.sv", 32, 10, ".tb.i_core_model.u_regfile", "v_branch/register_file", "else", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[825]), first, "src/register_file.sv", 32, 13, ".tb.i_core_model.u_regfile", "v_expr/register_file", "(rstn_i==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[826]), first, "src/register_file.sv", 32, 13, ".tb.i_core_model.u_regfile", "v_expr/register_file", "(rstn_i==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[827]), first, "src/register_file.sv", 31, 5, ".tb.i_core_model.u_regfile", "v_line/register_file", "block", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "src/alu.sv", 4, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "a_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "src/alu.sv", 5, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "b_i[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "src/alu.sv", 6, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "alu_ctrl_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "src/alu.sv", 6, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "alu_ctrl_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "src/alu.sv", 6, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "alu_ctrl_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "src/alu.sv", 6, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "alu_ctrl_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "src/alu.sv", 8, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "res_o[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "src/alu.sv", 9, 29, ".tb.i_core_model.u_alu", "v_toggle/alu", "zero_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[828]), first, "src/alu.sv", 17, 20, ".tb.i_core_model.u_alu", "v_line/alu", "case", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[829]), first, "src/alu.sv", 18, 20, ".tb.i_core_model.u_alu", "v_line/alu", "case", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[830]), first, "src/alu.sv", 21, 20, ".tb.i_core_model.u_alu", "v_line/alu", "case", "21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[831]), first, "src/alu.sv", 22, 20, ".tb.i_core_model.u_alu", "v_line/alu", "case", "22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "src/alu.sv", 23, 20, ".tb.i_core_model.u_alu", "v_line/alu", "case", "23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "src/alu.sv", 27, 20, ".tb.i_core_model.u_alu", "v_line/alu", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "src/alu.sv", 28, 20, ".tb.i_core_model.u_alu", "v_line/alu", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "src/alu.sv", 31, 20, ".tb.i_core_model.u_alu", "v_line/alu", "case", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "src/alu.sv", 32, 20, ".tb.i_core_model.u_alu", "v_line/alu", "case", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "src/alu.sv", 33, 20, ".tb.i_core_model.u_alu", "v_line/alu", "case", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "src/alu.sv", 36, 13, ".tb.i_core_model.u_alu", "v_line/alu", "case", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "src/alu.sv", 15, 5, ".tb.i_core_model.u_alu", "v_line/alu", "block", "15-16");
}
