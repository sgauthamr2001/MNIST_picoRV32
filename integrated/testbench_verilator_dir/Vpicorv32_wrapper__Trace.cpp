// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpicorv32_wrapper__Syms.h"


//======================

void Vpicorv32_wrapper::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vpicorv32_wrapper* t = (Vpicorv32_wrapper*)userthis;
    Vpicorv32_wrapper__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vpicorv32_wrapper::traceChgThis(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vpicorv32_wrapper::traceChgThis__2(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgArray(c+1,(vlSymsp->TOP__picorv32_wrapper.__PVT__firmware_file),1024);
        vcdp->chgBit(c+257,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose));
        vcdp->chgBus(c+265,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__i),32);
    }
}

void Vpicorv32_wrapper::traceChgThis__3(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+273,(vlSymsp->TOP__picorv32_wrapper.__PVT__count_cycle),16);
        vcdp->chgBus(c+281,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_opcode),32);
        vcdp->chgBus(c+289,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs1),5);
        vcdp->chgQuad(c+297,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1),64);
        vcdp->chgQuad(c+313,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2),64);
        vcdp->chgQuad(c+329,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2),64);
        vcdp->chgQuad(c+345,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd),64);
        vcdp->chgQuad(c+361,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx),64);
        vcdp->chgQuad(c+377,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt),64);
    }
}

void Vpicorv32_wrapper::traceChgThis__4(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*25087:0*/ __Vtemp4[784];
    WData/*25087:0*/ __Vtemp5[784];
    IData/*31:0*/ __Vilp;
    // Body
    {
        __Vilp = 0U;
        while ((__Vilp <= 0x30fU)) {
            __Vtemp4[__Vilp] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__in_image[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_SHIFTL_WWI(25088,25088,32, __Vtemp5, __Vtemp4, vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__counter1);
        vcdp->chgBus(c+393,(__Vtemp5[0U]),32);
    }
}

void Vpicorv32_wrapper::traceChgThis__5(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+401,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en));
        vcdp->chgBit(c+409,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en));
        vcdp->chgBit(c+417,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en));
    }
}

void Vpicorv32_wrapper::traceChgThis__6(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+425,(vlSymsp->TOP__picorv32_wrapper.__PVT__irq),32);
        vcdp->chgBit(c+433,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid));
        vcdp->chgBit(c+441,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid));
        vcdp->chgBit(c+449,(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid));
        vcdp->chgBus(c+457,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wdata),32);
        vcdp->chgBus(c+465,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_wstrb),4);
        vcdp->chgBus(c+473,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc),32);
        vcdp->chgBit(c+481,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_wr));
        vcdp->chgBus(c+489,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_rd),32);
        vcdp->chgBit(c+497,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_int_ready));
        vcdp->chgBit(c+505,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword));
        vcdp->chgBit(c+513,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_trap));
        vcdp->chgBit(c+521,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh));
        vcdp->chgQuad(c+529,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__new_ascii_instr),64);
        vcdp->chgQuad(c+545,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_instr),64);
        vcdp->chgBus(c+561,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_imm),32);
        vcdp->chgBus(c+569,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rs2),5);
        vcdp->chgBus(c+577,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_rd),5);
        vcdp->chgBit(c+585,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__launch_next_insn));
        vcdp->chgArray(c+593,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_ascii_state),128);
        vcdp->chgBus(c+625,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out),32);
        vcdp->chgBit(c+633,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0));
        vcdp->chgBit(c+641,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_eq));
        vcdp->chgBit(c+649,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_ltu));
        vcdp->chgBit(c+657,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_lts));
        vcdp->chgBit(c+665,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_write));
        vcdp->chgBus(c+673,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_wrdata),32);
        vcdp->chgBus(c+681,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs1),32);
        vcdp->chgBus(c+689,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpuregs_rs2),32);
        vcdp->chgBit(c+697,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh));
        vcdp->chgBit(c+705,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__start));
        vcdp->chgBit(c+713,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__ready));
        vcdp->chgBit(c+721,(vlSymsp->TOP__picorv32_wrapper__mem.accel__DOT____Vcellinp__systolic2__start));
    }
}

void Vpicorv32_wrapper::traceChgThis__7(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+729,((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                              | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst))
                              ? (0xfffffffcU & (((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_pc 
                                                  >> 2U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                                                  & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                                      ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                                      : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)))) 
                                                << 2U))
                              : (0xfffffffcU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1))),32);
        vcdp->chgBit(c+737,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer) 
                             & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid)
                                 ? (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg)
                                 : (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword)))));
    }
}

void Vpicorv32_wrapper::traceChgThis__8(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*25087:0*/ __Vtemp6[784];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->chgBit(c+745,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready));
        vcdp->chgBit(c+753,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready));
        vcdp->chgBit(c+761,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid));
        vcdp->chgBit(c+769,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready));
        vcdp->chgBit(c+777,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid));
        vcdp->chgBit(c+785,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_ready));
        vcdp->chgBus(c+793,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_word),32);
        vcdp->chgArray(c+801,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__in_image),25120);
        vcdp->chgBit(c+7081,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr));
        vcdp->chgBit(c+7089,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr));
        vcdp->chgBit(c+7097,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata));
        __Vilp = 0U;
        while ((__Vilp <= 0x30fU)) {
            __Vtemp6[__Vilp] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__in_image[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->chgArray(c+7105,(__Vtemp6),25088);
    }
}

void Vpicorv32_wrapper::traceChgThis__9(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+13377,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_read));
        vcdp->chgBit(c+13385,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_write));
        vcdp->chgBit(c+13393,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_xfer));
        vcdp->chgBit(c+13401,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word));
        vcdp->chgBus(c+13409,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched_noshuffle),32);
        vcdp->chgBus(c+13417,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_latched),32);
        vcdp->chgBit(c+13425,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_use_prefetched_high_word));
        vcdp->chgBit(c+13433,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_done));
    }
}

void Vpicorv32_wrapper::traceChgThis__10(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+13441,(vlSymsp->TOP__picorv32_wrapper.__PVT__cycle_counter),32);
        vcdp->chgBit(c+13449,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_awvalid));
        vcdp->chgBit(c+13457,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_arvalid));
        vcdp->chgBit(c+13465,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__ack_wvalid));
        vcdp->chgBit(c+13473,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__axi_adapter__DOT__xfer_done));
        vcdp->chgBus(c+13481,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_insn_opcode),32);
        vcdp->chgBus(c+13489,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_insn_addr),32);
        vcdp->chgBit(c+13497,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wr));
        vcdp->chgBus(c+13505,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_rd),32);
        vcdp->chgBit(c+13513,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_ready));
        vcdp->chgBus(c+13521,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs1),6);
        vcdp->chgBit(c+13529,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger_q));
        vcdp->chgQuad(c+13537,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_ascii_instr),64);
        vcdp->chgBus(c+13553,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_imm),32);
        vcdp->chgBus(c+13561,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_opcode),32);
        vcdp->chgBus(c+13569,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs1),5);
        vcdp->chgBus(c+13577,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rs2),5);
        vcdp->chgBus(c+13585,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__q_insn_rd),5);
        vcdp->chgBit(c+13593,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_next));
        vcdp->chgBit(c+13601,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_valid_insn));
        vcdp->chgQuad(c+13609,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_ascii_instr),64);
        vcdp->chgBus(c+13625,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_imm),32);
        vcdp->chgBus(c+13633,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_opcode),32);
        vcdp->chgBus(c+13641,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs1),5);
        vcdp->chgBus(c+13649,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rs2),5);
        vcdp->chgBus(c+13657,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cached_insn_rd),5);
        vcdp->chgBit(c+13665,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_0_q));
        vcdp->chgBit(c+13673,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait));
        vcdp->chgBit(c+13681,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_wait_2));
        vcdp->chgBit(c+13689,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__clear_prefetched_high_word_q));
        vcdp->chgBit(c+13697,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q));
        vcdp->chgQuad(c+13705,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1),64);
        vcdp->chgQuad(c+13721,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2),64);
        vcdp->chgQuad(c+13737,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rd),64);
        vcdp->chgQuad(c+13753,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx),64);
        vcdp->chgBus(c+13769,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter),7);
        vcdp->chgBit(c+13777,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting));
        vcdp->chgBit(c+13785,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish));
        vcdp->chgBit(c+13793,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__pcpi_wait_q));
        vcdp->chgBus(c+13801,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__image),32);
        vcdp->chgBus(c+13809,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_0),32);
        vcdp->chgBus(c+13817,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_1),32);
        vcdp->chgBus(c+13825,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_2),32);
        vcdp->chgBus(c+13833,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_3),32);
        vcdp->chgBus(c+13841,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_4),32);
        vcdp->chgBus(c+13849,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_5),32);
        vcdp->chgBus(c+13857,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_6),32);
        vcdp->chgBus(c+13865,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_7),32);
        vcdp->chgBus(c+13873,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_8),32);
        vcdp->chgBus(c+13881,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_9),32);
        vcdp->chgBus(c+13889,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_10),32);
        vcdp->chgBus(c+13897,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_11),32);
        vcdp->chgBus(c+13905,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_12),32);
        vcdp->chgBus(c+13913,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_13),32);
        vcdp->chgBus(c+13921,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_14),32);
        vcdp->chgBus(c+13929,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_15),32);
        vcdp->chgBus(c+13937,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_16),32);
        vcdp->chgBus(c+13945,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_17),32);
        vcdp->chgBus(c+13953,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_18),32);
        vcdp->chgBus(c+13961,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_19),32);
        vcdp->chgBus(c+13969,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_20),32);
        vcdp->chgBus(c+13977,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_21),32);
        vcdp->chgBus(c+13985,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_22),32);
        vcdp->chgBus(c+13993,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_23),32);
        vcdp->chgBus(c+14001,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_24),32);
        vcdp->chgBus(c+14009,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_25),32);
        vcdp->chgBus(c+14017,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_26),32);
        vcdp->chgBus(c+14025,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_27),32);
        vcdp->chgBus(c+14033,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_28),32);
        vcdp->chgBus(c+14041,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_29),32);
        vcdp->chgBus(c+14049,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_30),32);
        vcdp->chgBus(c+14057,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_31),32);
        vcdp->chgBus(c+14065,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac0__DOT__d)),32);
        vcdp->chgBus(c+14073,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac1__DOT__d)),32);
        vcdp->chgBus(c+14081,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac2__DOT__d)),32);
        vcdp->chgBus(c+14089,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac3__DOT__d)),32);
        vcdp->chgBus(c+14097,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac4__DOT__d)),32);
        vcdp->chgBus(c+14105,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac5__DOT__d)),32);
        vcdp->chgBus(c+14113,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac6__DOT__d)),32);
        vcdp->chgBus(c+14121,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac7__DOT__d)),32);
        vcdp->chgBus(c+14129,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac8__DOT__d)),32);
        vcdp->chgBus(c+14137,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac9__DOT__d)),32);
        vcdp->chgBus(c+14145,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac10__DOT__d)),32);
        vcdp->chgBus(c+14153,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac11__DOT__d)),32);
        vcdp->chgBus(c+14161,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac12__DOT__d)),32);
        vcdp->chgBus(c+14169,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac13__DOT__d)),32);
        vcdp->chgBus(c+14177,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac14__DOT__d)),32);
        vcdp->chgBus(c+14185,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac15__DOT__d)),32);
        vcdp->chgBus(c+14193,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac16__DOT__d)),32);
        vcdp->chgBus(c+14201,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac17__DOT__d)),32);
        vcdp->chgBus(c+14209,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac18__DOT__d)),32);
        vcdp->chgBus(c+14217,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac19__DOT__d)),32);
        vcdp->chgBus(c+14225,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac20__DOT__d)),32);
        vcdp->chgBus(c+14233,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac21__DOT__d)),32);
        vcdp->chgBus(c+14241,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac22__DOT__d)),32);
        vcdp->chgBus(c+14249,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac23__DOT__d)),32);
        vcdp->chgBus(c+14257,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac24__DOT__d)),32);
        vcdp->chgBus(c+14265,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac25__DOT__d)),32);
        vcdp->chgBus(c+14273,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac26__DOT__d)),32);
        vcdp->chgBus(c+14281,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac27__DOT__d)),32);
        vcdp->chgBus(c+14289,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac28__DOT__d)),32);
        vcdp->chgBus(c+14297,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac29__DOT__d)),32);
        vcdp->chgBus(c+14305,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac30__DOT__d)),32);
        vcdp->chgBus(c+14313,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac31__DOT__d)),32);
        vcdp->chgBus(c+14321,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__counter1),32);
        vcdp->chgBit(c+14329,(((0x7fffffffU == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w1_0)
                                ? 1U : 0U)));
        vcdp->chgBus(c+14337,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__im),32);
        vcdp->chgQuad(c+14345,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac0__DOT__d),64);
        vcdp->chgQuad(c+14361,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac1__DOT__d),64);
        vcdp->chgQuad(c+14377,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac2__DOT__d),64);
        vcdp->chgQuad(c+14393,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac3__DOT__d),64);
        vcdp->chgQuad(c+14409,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac4__DOT__d),64);
        vcdp->chgQuad(c+14425,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac5__DOT__d),64);
        vcdp->chgQuad(c+14441,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac6__DOT__d),64);
        vcdp->chgQuad(c+14457,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac7__DOT__d),64);
        vcdp->chgQuad(c+14473,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac8__DOT__d),64);
        vcdp->chgQuad(c+14489,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac9__DOT__d),64);
        vcdp->chgQuad(c+14505,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac10__DOT__d),64);
        vcdp->chgQuad(c+14521,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac11__DOT__d),64);
        vcdp->chgQuad(c+14537,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac12__DOT__d),64);
        vcdp->chgQuad(c+14553,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac13__DOT__d),64);
        vcdp->chgQuad(c+14569,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac14__DOT__d),64);
        vcdp->chgQuad(c+14585,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac15__DOT__d),64);
        vcdp->chgQuad(c+14601,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac16__DOT__d),64);
        vcdp->chgQuad(c+14617,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac17__DOT__d),64);
        vcdp->chgQuad(c+14633,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac18__DOT__d),64);
        vcdp->chgQuad(c+14649,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac19__DOT__d),64);
        vcdp->chgQuad(c+14665,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac20__DOT__d),64);
        vcdp->chgQuad(c+14681,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac21__DOT__d),64);
        vcdp->chgQuad(c+14697,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac22__DOT__d),64);
        vcdp->chgQuad(c+14713,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac23__DOT__d),64);
        vcdp->chgQuad(c+14729,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac24__DOT__d),64);
        vcdp->chgQuad(c+14745,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac25__DOT__d),64);
        vcdp->chgQuad(c+14761,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac26__DOT__d),64);
        vcdp->chgQuad(c+14777,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac27__DOT__d),64);
        vcdp->chgQuad(c+14793,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac28__DOT__d),64);
        vcdp->chgQuad(c+14809,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac29__DOT__d),64);
        vcdp->chgQuad(c+14825,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac30__DOT__d),64);
        vcdp->chgQuad(c+14841,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic1__DOT__mac31__DOT__d),64);
    }
}

void Vpicorv32_wrapper::traceChgThis__11(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+14857,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                               & (~ (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)))));
    }
}

void Vpicorv32_wrapper::traceChgThis__12(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+14865,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__reset));
        vcdp->chgBus(c+14873,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr),32);
        vcdp->chgBus(c+14881,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr),32);
        vcdp->chgBus(c+14889,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata),32);
        vcdp->chgBus(c+14897,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb),4);
        vcdp->chgBit(c+14905,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn));
    }
}

void Vpicorv32_wrapper::traceChgThis__13(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+14913,(vlSymsp->TOP__picorv32_wrapper.trap));
        vcdp->chgBit(c+14921,(vlSymsp->TOP__picorv32_wrapper.trace_valid));
        vcdp->chgQuad(c+14929,(vlSymsp->TOP__picorv32_wrapper.trace_data),36);
        vcdp->chgBus(c+14945,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr),32);
        vcdp->chgBus(c+14953,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata),32);
        vcdp->chgBus(c+14961,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb),4);
        vcdp->chgBit(c+14969,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                               & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb)))));
        vcdp->chgBus(c+14977,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                                ? 4U : 0U)),3);
        vcdp->chgBit(c+14985,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
                               & (~ (IData)((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb)))))));
        vcdp->chgBit(c+14993,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_valid));
        vcdp->chgBus(c+15001,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__pcpi_insn),32);
        vcdp->chgBus(c+15009,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1),32);
        vcdp->chgBus(c+15017,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2),32);
        vcdp->chgBus(c+15025,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__eoi),32);
        vcdp->chgBit(c+15033,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid));
        vcdp->chgBit(c+15041,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr));
        vcdp->chgQuad(c+15049,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_cycle),64);
        vcdp->chgQuad(c+15065,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__count_instr),64);
        vcdp->chgBus(c+15081,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_pc),32);
        vcdp->chgBus(c+15089,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_next_pc),32);
        vcdp->chgBus(c+15097,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_out),32);
        vcdp->chgBus(c+15105,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_sh),5);
        vcdp->chgBit(c+15113,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_delay));
        vcdp->chgBit(c+15121,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_active));
        vcdp->chgBus(c+15129,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_mask),32);
        vcdp->chgBus(c+15137,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_pending),32);
        vcdp->chgBus(c+15145,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__timer),32);
        vcdp->chgBit(c+15153,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait));
        vcdp->chgBit(c+15161,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wr));
        vcdp->chgBus(c+15169,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_rd),32);
        vcdp->chgBit(c+15177,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait));
        vcdp->chgBit(c+15185,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_ready));
        vcdp->chgBit(c+15193,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_mul_wait) 
                               | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_div_wait))));
        vcdp->chgBus(c+15201,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_state),2);
        vcdp->chgBus(c+15209,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_wordsize),2);
        vcdp->chgBus(c+15217,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_rdata_q),32);
        vcdp->chgBit(c+15225,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch));
        vcdp->chgBit(c+15233,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst));
        vcdp->chgBit(c+15241,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata));
        vcdp->chgBit(c+15249,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata));
        vcdp->chgBit(c+15257,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_secondword));
        vcdp->chgBit(c+15265,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_la_firstword_reg));
        vcdp->chgBit(c+15273,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__last_mem_valid));
        vcdp->chgBit(c+15281,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__prefetched_high_word));
        vcdp->chgBus(c+15289,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_16bit_buffer),16);
        vcdp->chgBit(c+15297,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_prefetch) 
                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rinst) 
                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_rdata) 
                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__mem_do_wdata))))));
        vcdp->chgBit(c+15305,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lui));
        vcdp->chgBit(c+15313,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_auipc));
        vcdp->chgBit(c+15321,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jal));
        vcdp->chgBit(c+15329,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_jalr));
        vcdp->chgBit(c+15337,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_beq));
        vcdp->chgBit(c+15345,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bne));
        vcdp->chgBit(c+15353,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_blt));
        vcdp->chgBit(c+15361,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bge));
        vcdp->chgBit(c+15369,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bltu));
        vcdp->chgBit(c+15377,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_bgeu));
        vcdp->chgBit(c+15385,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lb));
        vcdp->chgBit(c+15393,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lh));
        vcdp->chgBit(c+15401,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lw));
        vcdp->chgBit(c+15409,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lbu));
        vcdp->chgBit(c+15417,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_lhu));
        vcdp->chgBit(c+15425,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sb));
        vcdp->chgBit(c+15433,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sh));
        vcdp->chgBit(c+15441,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sw));
        vcdp->chgBit(c+15449,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_addi));
        vcdp->chgBit(c+15457,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slti));
        vcdp->chgBit(c+15465,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltiu));
        vcdp->chgBit(c+15473,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xori));
        vcdp->chgBit(c+15481,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ori));
        vcdp->chgBit(c+15489,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_andi));
        vcdp->chgBit(c+15497,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slli));
        vcdp->chgBit(c+15505,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srli));
        vcdp->chgBit(c+15513,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai));
        vcdp->chgBit(c+15521,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_add));
        vcdp->chgBit(c+15529,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub));
        vcdp->chgBit(c+15537,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sll));
        vcdp->chgBit(c+15545,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_slt));
        vcdp->chgBit(c+15553,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sltu));
        vcdp->chgBit(c+15561,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_xor));
        vcdp->chgBit(c+15569,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srl));
        vcdp->chgBit(c+15577,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra));
        vcdp->chgBit(c+15585,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_or));
        vcdp->chgBit(c+15593,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_and));
        vcdp->chgBit(c+15601,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycle));
        vcdp->chgBit(c+15609,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdcycleh));
        vcdp->chgBit(c+15617,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstr));
        vcdp->chgBit(c+15625,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_rdinstrh));
        vcdp->chgBit(c+15633,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_ecall_ebreak));
        vcdp->chgBit(c+15641,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_getq));
        vcdp->chgBit(c+15649,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_setq));
        vcdp->chgBit(c+15657,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_retirq));
        vcdp->chgBit(c+15665,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_maskirq));
        vcdp->chgBit(c+15673,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_waitirq));
        vcdp->chgBit(c+15681,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_timer));
        vcdp->chgBus(c+15689,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rd),6);
        vcdp->chgBus(c+15697,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_rs2),6);
        vcdp->chgBus(c+15705,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm),32);
        vcdp->chgBus(c+15713,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoded_imm_j),32);
        vcdp->chgBit(c+15721,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger));
        vcdp->chgBit(c+15729,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_trigger_q));
        vcdp->chgBit(c+15737,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__decoder_pseudo_trigger));
        vcdp->chgBit(c+15745,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__compressed_instr));
        vcdp->chgBit(c+15753,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal));
        vcdp->chgBit(c+15761,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu));
        vcdp->chgBit(c+15769,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slli_srli_srai));
        vcdp->chgBit(c+15777,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi));
        vcdp->chgBit(c+15785,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sb_sh_sw));
        vcdp->chgBit(c+15793,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sll_srl_sra));
        vcdp->chgBit(c+15801,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub));
        vcdp->chgBit(c+15809,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_slti_blt_slt));
        vcdp->chgBit(c+15817,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu));
        vcdp->chgBit(c+15825,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu));
        vcdp->chgBit(c+15833,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_lbu_lhu_lw));
        vcdp->chgBit(c+15841,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_imm));
        vcdp->chgBit(c+15849,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_alu_reg_reg));
        vcdp->chgBit(c+15857,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__is_compare));
        vcdp->chgBus(c+15865,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val),32);
        vcdp->chgBus(c+15873,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val),32);
        vcdp->chgBit(c+15881,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs1val_valid));
        vcdp->chgBit(c+15889,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__dbg_rs2val_valid));
        vcdp->chgBus(c+15897,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__cpu_state),8);
        vcdp->chgBus(c+15905,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__irq_state),2);
        vcdp->chgBit(c+15913,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rinst));
        vcdp->chgBit(c+15921,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_rdata));
        vcdp->chgBit(c+15929,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__set_mem_do_wdata));
        vcdp->chgBit(c+15937,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_store));
        vcdp->chgBit(c+15945,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_stalu));
        vcdp->chgBit(c+15953,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_branch));
        vcdp->chgBit(c+15961,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_compr));
        vcdp->chgBit(c+15969,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_trace));
        vcdp->chgBit(c+15977,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lu));
        vcdp->chgBit(c+15985,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lh));
        vcdp->chgBit(c+15993,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_is_lb));
        vcdp->chgBus(c+16001,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__latched_rd),6);
        vcdp->chgBus(c+16009,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__current_pc),32);
        vcdp->chgBus(c+16017,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout_counter),4);
        vcdp->chgBit(c+16025,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__pcpi_timeout));
        vcdp->chgBus(c+16033,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__next_irq_pending),32);
        vcdp->chgBit(c+16041,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__do_waitirq));
        vcdp->chgBus(c+16049,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__alu_out_q),32);
        vcdp->chgBus(c+16057,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sub)
                                ? (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                   - vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2)
                                : (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                   + vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
        vcdp->chgBus(c+16065,((vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                               << (0x1fU & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))),32);
        vcdp->chgBus(c+16073,((IData)((VL_ULL(0x1ffffffff) 
                                       & VL_SHIFTRS_QQI(33,33,5, 
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_sra) 
                                                                            | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__instr_srai)) 
                                                                           & (vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1 
                                                                              >> 0x1fU)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op1))), 
                                                        (0x1fU 
                                                         & vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__reg_op2))))),32);
        vcdp->chgBit(c+16081,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul));
        vcdp->chgBit(c+16089,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh));
        vcdp->chgBit(c+16097,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
        vcdp->chgBit(c+16105,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu));
        vcdp->chgBit(c+16113,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu))))));
        vcdp->chgBit(c+16121,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                               | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu))));
        vcdp->chgBit(c+16129,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div));
        vcdp->chgBit(c+16137,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu));
        vcdp->chgBit(c+16145,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem));
        vcdp->chgBit(c+16153,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu));
        vcdp->chgBit(c+16161,(((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_div) 
                               | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_divu) 
                                  | ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_rem) 
                                     | (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__instr_remu))))));
        vcdp->chgBus(c+16169,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__dividend),32);
        vcdp->chgQuad(c+16177,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__divisor),63);
        vcdp->chgBus(c+16193,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient),32);
        vcdp->chgBus(c+16201,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__quotient_msk),32);
        vcdp->chgBit(c+16209,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__running));
        vcdp->chgBit(c+16217,(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__picorv32_core__DOT__genblk3__DOT__pcpi_div__DOT__outsign));
        vcdp->chgBus(c+16225,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac0__DOT__d)),32);
        vcdp->chgBus(c+16233,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac1__DOT__d)),32);
        vcdp->chgBus(c+16241,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac2__DOT__d)),32);
        vcdp->chgBus(c+16249,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac3__DOT__d)),32);
        vcdp->chgBus(c+16257,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac4__DOT__d)),32);
        vcdp->chgBus(c+16265,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac5__DOT__d)),32);
        vcdp->chgBus(c+16273,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac6__DOT__d)),32);
        vcdp->chgBus(c+16281,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac7__DOT__d)),32);
        vcdp->chgBus(c+16289,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac8__DOT__d)),32);
        vcdp->chgBus(c+16297,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac9__DOT__d)),32);
        vcdp->chgBus(c+16305,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_0),32);
        vcdp->chgBus(c+16313,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_1),32);
        vcdp->chgBus(c+16321,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_2),32);
        vcdp->chgBus(c+16329,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_3),32);
        vcdp->chgBus(c+16337,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_4),32);
        vcdp->chgBus(c+16345,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_5),32);
        vcdp->chgBus(c+16353,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_6),32);
        vcdp->chgBus(c+16361,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_7),32);
        vcdp->chgBus(c+16369,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_8),32);
        vcdp->chgBus(c+16377,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_9),32);
        vcdp->chgBus(c+16385,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__relu_out),32);
        vcdp->chgBus(c+16393,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__counter2),32);
        vcdp->chgBit(c+16401,(((0x7fffffffU == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__w2_0)
                                ? 1U : 0U)));
        vcdp->chgQuad(c+16409,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac0__DOT__d),64);
        vcdp->chgQuad(c+16425,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac1__DOT__d),64);
        vcdp->chgQuad(c+16441,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac2__DOT__d),64);
        vcdp->chgQuad(c+16457,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac3__DOT__d),64);
        vcdp->chgQuad(c+16473,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac4__DOT__d),64);
        vcdp->chgQuad(c+16489,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac5__DOT__d),64);
        vcdp->chgQuad(c+16505,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac6__DOT__d),64);
        vcdp->chgQuad(c+16521,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac7__DOT__d),64);
        vcdp->chgQuad(c+16537,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac8__DOT__d),64);
        vcdp->chgQuad(c+16553,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__accel__DOT__systolic2__DOT__mac9__DOT__d),64);
    }
}

void Vpicorv32_wrapper::traceChgThis__14(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+16569,(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata),32);
    }
}

void Vpicorv32_wrapper::traceChgThis__15(Vpicorv32_wrapper__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+16577,(vlTOPp->clk));
        vcdp->chgBit(c+16585,(vlTOPp->resetn));
        vcdp->chgBit(c+16593,(vlTOPp->trap));
        vcdp->chgBit(c+16601,(vlTOPp->trace_valid));
        vcdp->chgQuad(c+16609,(vlTOPp->trace_data),36);
    }
}
