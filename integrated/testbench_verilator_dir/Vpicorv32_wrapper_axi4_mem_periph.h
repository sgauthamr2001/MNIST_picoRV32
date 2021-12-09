// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpicorv32_wrapper.h for the primary calling header

#ifndef _VPICORV32_WRAPPER_AXI4_MEM_PERIPH_H_
#define _VPICORV32_WRAPPER_AXI4_MEM_PERIPH_H_  // guard

#include "verilated_heavy.h"
#include "Vpicorv32_wrapper__Dpi.h"

//==========

class Vpicorv32_wrapper__Syms;
class Vpicorv32_wrapper_VerilatedVcd;


//----------

VL_MODULE(Vpicorv32_wrapper_axi4_mem_periph) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__mem_axi_awvalid,0,0);
    VL_OUT8(__PVT__mem_axi_awready,0,0);
    VL_IN8(__PVT__mem_axi_awprot,2,0);
    VL_IN8(__PVT__mem_axi_wvalid,0,0);
    VL_OUT8(__PVT__mem_axi_wready,0,0);
    VL_IN8(__PVT__mem_axi_wstrb,3,0);
    VL_OUT8(__PVT__mem_axi_bvalid,0,0);
    VL_IN8(__PVT__mem_axi_bready,0,0);
    VL_IN8(__PVT__mem_axi_arvalid,0,0);
    VL_OUT8(__PVT__mem_axi_arready,0,0);
    VL_IN8(__PVT__mem_axi_arprot,2,0);
    VL_OUT8(__PVT__mem_axi_rvalid,0,0);
    VL_IN8(__PVT__mem_axi_rready,0,0);
    VL_OUT8(__PVT__tests_passed,0,0);
    VL_IN(__PVT__mem_axi_awaddr,31,0);
    VL_IN(__PVT__mem_axi_wdata,31,0);
    VL_IN(__PVT__mem_axi_araddr,31,0);
    VL_OUT(__PVT__mem_axi_rdata,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__reset;
        CData/*0:0*/ __PVT__ready;
        CData/*0:0*/ __PVT__verbose;
        CData/*0:0*/ __PVT__latched_raddr_en;
        CData/*0:0*/ __PVT__latched_waddr_en;
        CData/*0:0*/ __PVT__latched_wdata_en;
        CData/*0:0*/ __PVT__fast_raddr;
        CData/*0:0*/ __PVT__fast_waddr;
        CData/*0:0*/ __PVT__fast_wdata;
        CData/*3:0*/ __PVT__latched_wstrb;
        CData/*0:0*/ __PVT__latched_rinsn;
        CData/*0:0*/ __PVT__accel__DOT__invoked;
        WData/*25119:0*/ __PVT__in_image[785];
        IData/*31:0*/ __PVT__result2;
        IData/*31:0*/ __PVT__result3;
        IData/*31:0*/ __PVT__result4;
        IData/*31:0*/ __PVT__result5;
        IData/*31:0*/ __PVT__result6;
        IData/*31:0*/ __PVT__result7;
        IData/*31:0*/ __PVT__result8;
        IData/*31:0*/ __PVT__result9;
        IData/*31:0*/ __PVT__i;
        IData/*31:0*/ __PVT__latched_raddr;
        IData/*31:0*/ __PVT__latched_waddr;
        IData/*31:0*/ __PVT__latched_wdata;
        IData/*31:0*/ __PVT__accel__DOT__image;
        IData/*31:0*/ __PVT__accel__DOT__w1_0;
        IData/*31:0*/ __PVT__accel__DOT__w1_1;
        IData/*31:0*/ __PVT__accel__DOT__w1_2;
        IData/*31:0*/ __PVT__accel__DOT__w1_3;
        IData/*31:0*/ __PVT__accel__DOT__w1_4;
        IData/*31:0*/ __PVT__accel__DOT__w1_5;
        IData/*31:0*/ __PVT__accel__DOT__w1_6;
        IData/*31:0*/ __PVT__accel__DOT__w1_7;
        IData/*31:0*/ __PVT__accel__DOT__w1_8;
        IData/*31:0*/ __PVT__accel__DOT__w1_9;
        IData/*31:0*/ __PVT__accel__DOT__w1_10;
        IData/*31:0*/ __PVT__accel__DOT__w1_11;
        IData/*31:0*/ __PVT__accel__DOT__w1_12;
        IData/*31:0*/ __PVT__accel__DOT__w1_13;
        IData/*31:0*/ __PVT__accel__DOT__w1_14;
        IData/*31:0*/ __PVT__accel__DOT__w1_15;
        IData/*31:0*/ __PVT__accel__DOT__w1_16;
        IData/*31:0*/ __PVT__accel__DOT__w1_17;
        IData/*31:0*/ __PVT__accel__DOT__w1_18;
        IData/*31:0*/ __PVT__accel__DOT__w1_19;
        IData/*31:0*/ __PVT__accel__DOT__w1_20;
        IData/*31:0*/ __PVT__accel__DOT__w1_21;
        IData/*31:0*/ __PVT__accel__DOT__w1_22;
        IData/*31:0*/ __PVT__accel__DOT__w1_23;
        IData/*31:0*/ __PVT__accel__DOT__w1_24;
        IData/*31:0*/ __PVT__accel__DOT__w1_25;
        IData/*31:0*/ __PVT__accel__DOT__w1_26;
        IData/*31:0*/ __PVT__accel__DOT__w1_27;
        IData/*31:0*/ __PVT__accel__DOT__w1_28;
        IData/*31:0*/ __PVT__accel__DOT__w1_29;
        IData/*31:0*/ __PVT__accel__DOT__w1_30;
        IData/*31:0*/ __PVT__accel__DOT__w1_31;
        IData/*31:0*/ __PVT__accel__DOT__w2_0;
        IData/*31:0*/ __PVT__accel__DOT__w2_1;
        IData/*31:0*/ __PVT__accel__DOT__w2_2;
        IData/*31:0*/ __PVT__accel__DOT__w2_3;
        IData/*31:0*/ __PVT__accel__DOT__w2_4;
        IData/*31:0*/ __PVT__accel__DOT__w2_5;
    };
    struct {
        IData/*31:0*/ __PVT__accel__DOT__w2_6;
        IData/*31:0*/ __PVT__accel__DOT__w2_7;
        IData/*31:0*/ __PVT__accel__DOT__w2_8;
        IData/*31:0*/ __PVT__accel__DOT__w2_9;
        IData/*31:0*/ __PVT__accel__DOT__p0;
        IData/*31:0*/ __PVT__accel__DOT__p1;
        IData/*31:0*/ __PVT__accel__DOT__p2;
        IData/*31:0*/ __PVT__accel__DOT__p3;
        IData/*31:0*/ __PVT__accel__DOT__p4;
        IData/*31:0*/ __PVT__accel__DOT__p5;
        IData/*31:0*/ __PVT__accel__DOT__p6;
        IData/*31:0*/ __PVT__accel__DOT__p7;
        IData/*31:0*/ __PVT__accel__DOT__p8;
        IData/*31:0*/ __PVT__accel__DOT__p9;
        IData/*31:0*/ __PVT__accel__DOT__p10;
        IData/*31:0*/ __PVT__accel__DOT__p11;
        IData/*31:0*/ __PVT__accel__DOT__p12;
        IData/*31:0*/ __PVT__accel__DOT__p13;
        IData/*31:0*/ __PVT__accel__DOT__p14;
        IData/*31:0*/ __PVT__accel__DOT__p15;
        IData/*31:0*/ __PVT__accel__DOT__p16;
        IData/*31:0*/ __PVT__accel__DOT__p17;
        IData/*31:0*/ __PVT__accel__DOT__p18;
        IData/*31:0*/ __PVT__accel__DOT__p19;
        IData/*31:0*/ __PVT__accel__DOT__p20;
        IData/*31:0*/ __PVT__accel__DOT__p21;
        IData/*31:0*/ __PVT__accel__DOT__p22;
        IData/*31:0*/ __PVT__accel__DOT__p23;
        IData/*31:0*/ __PVT__accel__DOT__p24;
        IData/*31:0*/ __PVT__accel__DOT__p25;
        IData/*31:0*/ __PVT__accel__DOT__p26;
        IData/*31:0*/ __PVT__accel__DOT__p27;
        IData/*31:0*/ __PVT__accel__DOT__p28;
        IData/*31:0*/ __PVT__accel__DOT__p29;
        IData/*31:0*/ __PVT__accel__DOT__p30;
        IData/*31:0*/ __PVT__accel__DOT__p31;
        IData/*31:0*/ __PVT__accel__DOT__relu_out;
        IData/*31:0*/ __PVT__accel__DOT__counter1;
        IData/*31:0*/ __PVT__accel__DOT__counter2;
        IData/*31:0*/ __PVT__accel__DOT__systolic1__DOT__im;
        IData/*31:0*/ __PVT__accel__DOT__systolic2__DOT__p0;
        IData/*31:0*/ __PVT__accel__DOT__systolic2__DOT__p1;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac0__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac1__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac2__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac3__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac4__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac5__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac6__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac7__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac8__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac9__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac10__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac11__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac12__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac13__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac14__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac15__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac16__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac17__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac18__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac19__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac20__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac21__DOT__d;
    };
    struct {
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac22__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac23__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac24__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac25__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac26__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac27__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac28__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac29__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac30__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic1__DOT__mac31__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic2__DOT__mac0__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic2__DOT__mac1__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic2__DOT__mac2__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic2__DOT__mac3__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic2__DOT__mac4__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic2__DOT__mac5__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic2__DOT__mac6__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic2__DOT__mac7__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic2__DOT__mac8__DOT__d;
        QData/*63:0*/ __PVT__accel__DOT__systolic2__DOT__mac9__DOT__d;
        IData/*31:0*/ __PVT__image[785];
        IData/*31:0*/ memory[524288];
        IData/*31:0*/ xmem[1024];
        IData/*31:0*/ wkmem[524288];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w00mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w01mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w02mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w03mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w04mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w05mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w06mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w07mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w08mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w09mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w10mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w11mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w12mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w13mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w14mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w15mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w16mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w17mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w18mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w19mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w20mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w21mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w22mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w23mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w24mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w25mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w26mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w27mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w28mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w29mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w30mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w31mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w32mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w33mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w34mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w35mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w36mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w37mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w38mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w39mem[1024];
    };
    struct {
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w40mem[1024];
        IData/*31:0*/ __PVT__accel__DOT__wbmem__DOT__w41mem[1024];
    };
    
    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ accel__DOT____Vcellinp__systolic2__start;
        CData/*0:0*/ __Vdly__mem_axi_arready;
        CData/*0:0*/ __Vdly__fast_raddr;
        CData/*0:0*/ __Vdly__mem_axi_awready;
        CData/*0:0*/ __Vdly__fast_waddr;
        CData/*0:0*/ __Vdly__mem_axi_wready;
        CData/*0:0*/ __Vdly__fast_wdata;
        CData/*0:0*/ __Vdly__mem_axi_rvalid;
        CData/*4:0*/ __Vdlyvlsb__memory__v0;
        CData/*7:0*/ __Vdlyvval__memory__v0;
        CData/*0:0*/ __Vdlyvset__memory__v0;
        CData/*4:0*/ __Vdlyvlsb__memory__v1;
        CData/*7:0*/ __Vdlyvval__memory__v1;
        CData/*0:0*/ __Vdlyvset__memory__v1;
        CData/*4:0*/ __Vdlyvlsb__memory__v2;
        CData/*7:0*/ __Vdlyvval__memory__v2;
        CData/*0:0*/ __Vdlyvset__memory__v2;
        CData/*4:0*/ __Vdlyvlsb__memory__v3;
        CData/*7:0*/ __Vdlyvval__memory__v3;
        CData/*0:0*/ __Vdlyvset__memory__v3;
        CData/*4:0*/ __Vdlyvlsb__wkmem__v0;
        CData/*7:0*/ __Vdlyvval__wkmem__v0;
        CData/*0:0*/ __Vdlyvset__wkmem__v0;
        CData/*4:0*/ __Vdlyvlsb__wkmem__v1;
        CData/*7:0*/ __Vdlyvval__wkmem__v1;
        CData/*0:0*/ __Vdlyvset__wkmem__v1;
        CData/*4:0*/ __Vdlyvlsb__wkmem__v2;
        CData/*7:0*/ __Vdlyvval__wkmem__v2;
        CData/*0:0*/ __Vdlyvset__wkmem__v2;
        CData/*4:0*/ __Vdlyvlsb__wkmem__v3;
        CData/*7:0*/ __Vdlyvval__wkmem__v3;
        CData/*0:0*/ __Vdlyvset__wkmem__v3;
        CData/*0:0*/ __Vdly__reset;
        CData/*0:0*/ __Vdlyvset__image__v0;
        CData/*0:0*/ __Vdly__mem_axi_bvalid;
        CData/*4:0*/ __Vdlyvlsb__memory__v4;
        CData/*7:0*/ __Vdlyvval__memory__v4;
        CData/*0:0*/ __Vdlyvset__memory__v4;
        CData/*4:0*/ __Vdlyvlsb__memory__v5;
        CData/*7:0*/ __Vdlyvval__memory__v5;
        CData/*0:0*/ __Vdlyvset__memory__v5;
        CData/*4:0*/ __Vdlyvlsb__memory__v6;
        CData/*7:0*/ __Vdlyvval__memory__v6;
        CData/*0:0*/ __Vdlyvset__memory__v6;
        CData/*4:0*/ __Vdlyvlsb__memory__v7;
        CData/*7:0*/ __Vdlyvval__memory__v7;
        CData/*0:0*/ __Vdlyvset__memory__v7;
        CData/*4:0*/ __Vdlyvlsb__wkmem__v4;
        CData/*7:0*/ __Vdlyvval__wkmem__v4;
        CData/*0:0*/ __Vdlyvset__wkmem__v4;
        CData/*4:0*/ __Vdlyvlsb__wkmem__v5;
        CData/*7:0*/ __Vdlyvval__wkmem__v5;
        CData/*0:0*/ __Vdlyvset__wkmem__v5;
        CData/*4:0*/ __Vdlyvlsb__wkmem__v6;
        CData/*7:0*/ __Vdlyvval__wkmem__v6;
        CData/*0:0*/ __Vdlyvset__wkmem__v6;
        CData/*4:0*/ __Vdlyvlsb__wkmem__v7;
        CData/*7:0*/ __Vdlyvval__wkmem__v7;
        CData/*0:0*/ __Vdlyvset__wkmem__v7;
        CData/*0:0*/ __Vdlyvset__image__v1;
        SData/*9:0*/ __Vdlyvdim0__image__v0;
        SData/*9:0*/ __Vdlyvdim0__image__v1;
        IData/*31:0*/ __Vlvbound1;
        IData/*31:0*/ __Vdly__mem_axi_rdata;
    };
    struct {
        IData/*18:0*/ __Vdlyvdim0__memory__v0;
        IData/*18:0*/ __Vdlyvdim0__memory__v1;
        IData/*18:0*/ __Vdlyvdim0__memory__v2;
        IData/*18:0*/ __Vdlyvdim0__memory__v3;
        IData/*18:0*/ __Vdlyvdim0__wkmem__v0;
        IData/*18:0*/ __Vdlyvdim0__wkmem__v1;
        IData/*18:0*/ __Vdlyvdim0__wkmem__v2;
        IData/*18:0*/ __Vdlyvdim0__wkmem__v3;
        IData/*31:0*/ __Vdlyvval__image__v0;
        IData/*18:0*/ __Vdlyvdim0__memory__v4;
        IData/*18:0*/ __Vdlyvdim0__memory__v5;
        IData/*18:0*/ __Vdlyvdim0__memory__v6;
        IData/*18:0*/ __Vdlyvdim0__memory__v7;
        IData/*18:0*/ __Vdlyvdim0__wkmem__v4;
        IData/*18:0*/ __Vdlyvdim0__wkmem__v5;
        IData/*18:0*/ __Vdlyvdim0__wkmem__v6;
        IData/*18:0*/ __Vdlyvdim0__wkmem__v7;
        IData/*31:0*/ __Vdlyvval__image__v1;
        IData/*31:0*/ __Vdly__accel__DOT__counter1;
        IData/*31:0*/ __Vdly__accel__DOT__counter2;
    };
    
    // INTERNAL VARIABLES
  private:
    Vpicorv32_wrapper__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpicorv32_wrapper_axi4_mem_periph);  ///< Copying not allowed
  public:
    Vpicorv32_wrapper_axi4_mem_periph(const char* name = "TOP");
    ~Vpicorv32_wrapper_axi4_mem_periph();
    
    // INTERNAL METHODS
    void __Vconfigure(Vpicorv32_wrapper__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__picorv32_wrapper__mem__4(Vpicorv32_wrapper__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__picorv32_wrapper__mem__1(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__picorv32_wrapper__mem__3(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__picorv32_wrapper__mem__6(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__picorv32_wrapper__mem__7(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__picorv32_wrapper__mem__8(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    static void _settle__TOP__picorv32_wrapper__mem__5(Vpicorv32_wrapper__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
