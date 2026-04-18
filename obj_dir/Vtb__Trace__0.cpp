// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb__DOT__instr),32);
        bufp->chgCData(oldp+2,((((~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w)) 
                                 & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_we_w))
                                 ? (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w)
                                 : 0U)),5);
        bufp->chgIData(oldp+3,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w),32);
        bufp->chgBit(oldp+4,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w));
        bufp->chgIData(oldp+5,(((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__jalr_w)
                                 ? (0xfffffffeU & (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                                                   + vlSelfRef.tb__DOT__i_core_model__DOT__rs1_data_w))
                                 : (((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__branch_taken) 
                                     | (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__jump_w))
                                     ? (vlSelfRef.tb__DOT__i_core_model__DOT__imm_w 
                                        + vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg)
                                     : ((IData)(4U) 
                                        + vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg)))),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb__DOT__i_core_model__DOT__instr_w),32);
        bufp->chgCData(oldp+7,(vlSelfRef.tb__DOT__i_core_model__DOT__rs1_addr_w),5);
        bufp->chgCData(oldp+8,(vlSelfRef.tb__DOT__i_core_model__DOT__rs2_addr_w),5);
        bufp->chgCData(oldp+9,(vlSelfRef.tb__DOT__i_core_model__DOT__rd_addr_w),5);
        bufp->chgIData(oldp+10,(vlSelfRef.tb__DOT__i_core_model__DOT__imm_w),32);
        bufp->chgBit(oldp+11,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_we_w));
        bufp->chgBit(oldp+12,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_src_w));
        bufp->chgBit(oldp+13,(vlSelfRef.tb__DOT__i_core_model__DOT__pc_to_alu_w));
        bufp->chgBit(oldp+14,(vlSelfRef.tb__DOT__i_core_model__DOT__branch_w));
        bufp->chgBit(oldp+15,(vlSelfRef.tb__DOT__i_core_model__DOT__jump_w));
        bufp->chgBit(oldp+16,(vlSelfRef.tb__DOT__i_core_model__DOT__jalr_w));
        bufp->chgCData(oldp+17,(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w),2);
        bufp->chgCData(oldp+18,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_ctrl_w),4);
        bufp->chgCData(oldp+19,(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__funct3),3);
        bufp->chgCData(oldp+20,(vlSelfRef.tb__DOT__i_core_model__DOT__unused_branch_type),3);
        bufp->chgIData(oldp+21,(vlSelfRef.tb__DOT__i_core_model__DOT__rs1_data_w),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb__DOT__i_core_model__DOT__rs2_data_w),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_a_w),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_b_w),32);
        bufp->chgBit(oldp+25,((0U == vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w)));
        bufp->chgBit(oldp+26,(vlSelfRef.tb__DOT__i_core_model__DOT__branch_taken));
        bufp->chgCData(oldp+27,(vlSelfRef.tb__DOT__i_core_model__DOT__u_decoder__DOT__opcode),7);
        bufp->chgBit(oldp+28,(((~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w)) 
                               & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_we_w))));
        bufp->chgIData(oldp+29,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[0]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[1]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[2]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[3]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[4]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[5]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[6]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[7]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[8]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[9]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[10]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[11]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[12]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[13]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[14]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[15]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[16]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[17]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[18]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[19]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[20]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[21]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[22]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[23]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[24]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[25]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[26]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[27]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[28]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[29]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[30]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__registers[31]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb__DOT__i_core_model__DOT__u_regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+62,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_write_word),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_read_word),32);
        bufp->chgIData(oldp+64,(vlSelfRef.tb__DOT__i_core_model__DOT__load_data_w),32);
    }
    bufp->chgIData(oldp+65,(vlSelfRef.tb__DOT__addr),32);
    bufp->chgIData(oldp+66,(vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                            [(0x7ffU & (vlSelfRef.tb__DOT__addr 
                                        >> 2U))]),32);
    bufp->chgIData(oldp+67,(vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
                            [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg 
                                        >> 2U))]),32);
    bufp->chgIData(oldp+68,((((~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_we_w)) 
                              & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_we_w))
                              ? ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w))
                                  ? ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w))
                                      ? vlSelfRef.tb__DOT__i_core_model__DOT__imm_w
                                      : ((IData)(4U) 
                                         + vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg))
                                  : ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w))
                                      ? vlSelfRef.tb__DOT__i_core_model__DOT__load_data_w
                                      : vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))
                              : 0U)),32);
    bufp->chgBit(oldp+69,(vlSelfRef.tb__DOT__rstn));
    bufp->chgBit(oldp+70,(vlSelfRef.tb__DOT__clk));
    bufp->chgIData(oldp+71,(vlSelfRef.tb__DOT__file_pointer),32);
    bufp->chgIData(oldp+72,(((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w))
                              ? ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w))
                                  ? vlSelfRef.tb__DOT__i_core_model__DOT__imm_w
                                  : ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_reg))
                              : ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__wb_sel_w))
                                  ? vlSelfRef.tb__DOT__i_core_model__DOT__load_data_w
                                  : vlSelfRef.tb__DOT__i_core_model__DOT__alu_res_w))),32);
    bufp->chgIData(oldp+73,(vlSelfRef.tb__DOT__unnamedblk1__DOT__i),32);
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
