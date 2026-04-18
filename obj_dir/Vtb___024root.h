// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb__DOT__clk;
        CData/*0:0*/ tb__DOT__rstn;
        CData/*4:0*/ tb__DOT__reg_addr;
        CData/*4:0*/ tb__DOT____Vtogcov__reg_addr;
        CData/*0:0*/ tb__DOT____Vtogcov__update;
        CData/*0:0*/ tb__DOT____Vtogcov__mem_wrt;
        CData/*0:0*/ tb__DOT____Vtogcov__clk;
        CData/*4:0*/ tb__DOT__i_core_model__DOT__rd_addr_w;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__mem_we_w;
        CData/*1:0*/ tb__DOT__i_core_model__DOT__wb_sel_w;
        CData/*0:0*/ tb__DOT__i_core_model__DOT____Vcellinp__u_regfile__we_i;
        CData/*4:0*/ tb__DOT__i_core_model__DOT____Vtogcov__rs1_addr_w;
        CData/*4:0*/ tb__DOT__i_core_model__DOT____Vtogcov__rs2_addr_w;
        CData/*4:0*/ tb__DOT__i_core_model__DOT____Vtogcov__rd_addr_w;
        CData/*0:0*/ tb__DOT__i_core_model__DOT____Vtogcov__reg_we_w;
        CData/*0:0*/ tb__DOT__i_core_model__DOT____Vtogcov__alu_src_w;
        CData/*0:0*/ tb__DOT__i_core_model__DOT____Vtogcov__pc_to_alu_w;
        CData/*0:0*/ tb__DOT__i_core_model__DOT____Vtogcov__branch_w;
        CData/*0:0*/ tb__DOT__i_core_model__DOT____Vtogcov__jump_w;
        CData/*0:0*/ tb__DOT__i_core_model__DOT____Vtogcov__jalr_w;
        CData/*1:0*/ tb__DOT__i_core_model__DOT____Vtogcov__wb_sel_w;
        CData/*3:0*/ tb__DOT__i_core_model__DOT____Vtogcov__alu_ctrl_w;
        CData/*2:0*/ tb__DOT__i_core_model__DOT____Vtogcov__funct3_w;
        CData/*2:0*/ tb__DOT__i_core_model__DOT____Vtogcov__unused_branch_type;
        CData/*0:0*/ tb__DOT__i_core_model__DOT____Vtogcov__alu_zero_w;
        CData/*0:0*/ tb__DOT__i_core_model__DOT____Vtogcov__branch_taken;
        CData/*2:0*/ tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3;
        CData/*6:0*/ tb__DOT__i_core_model__DOT__u_decoder__DOT____Vtogcov__opcode;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__u_regfile__DOT____Vtogcov__we_i;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rstn__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb__DOT__addr;
        IData/*31:0*/ tb__DOT__data;
        IData/*31:0*/ tb__DOT__instr;
        IData/*31:0*/ tb__DOT__reg_data;
        IData/*31:0*/ tb__DOT____Vtogcov__addr;
        IData/*31:0*/ tb__DOT____Vtogcov__data;
        IData/*31:0*/ tb__DOT____Vtogcov__pc;
        IData/*31:0*/ tb__DOT____Vtogcov__instr_;
        IData/*31:0*/ tb__DOT____Vtogcov__instr;
        IData/*31:0*/ tb__DOT____Vtogcov__reg_data;
        IData/*31:0*/ tb__DOT____Vtogcov__mem_addr;
        IData/*31:0*/ tb__DOT____Vtogcov__mem_data;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__pc_reg;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__next_pc;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__imm_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__rs2_data_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__wb_data_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__alu_res_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__mem_write_word;
        IData/*31:0*/ tb__DOT__i_core_model__DOT____Vtogcov__next_pc;
        IData/*31:0*/ tb__DOT__i_core_model__DOT____Vtogcov__instr_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT____Vtogcov__imm_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT____Vtogcov__rs1_data_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT____Vtogcov__rs2_data_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT____Vtogcov__wb_data_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT____Vtogcov__alu_a_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT____Vtogcov__alu_b_w;
        IData/*31:0*/ tb__DOT__i_core_model__DOT____Vtogcov__mem_read_word;
        IData/*31:0*/ tb__DOT__i_core_model__DOT____Vtogcov__load_data_w;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 2048> tb__DOT__i_core_model__DOT__instr_mem;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 2048> tb__DOT__i_core_model__DOT__data_mem;
        VlUnpacked<IData/*31:0*/, 32> tb__DOT__i_core_model__DOT__u_regfile__DOT__registers;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
