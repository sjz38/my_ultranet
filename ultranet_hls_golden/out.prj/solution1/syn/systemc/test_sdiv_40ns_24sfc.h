// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __test_sdiv_40ns_24sfc__HH__
#define __test_sdiv_40ns_24sfc__HH__
#include "ACMP_sdiv.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(test_sdiv_40ns_24sfc) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_sdiv<ID, 44, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_sdiv_U;

    SC_CTOR(test_sdiv_40ns_24sfc):  ACMP_sdiv_U ("ACMP_sdiv_U") {
        ACMP_sdiv_U.clk(clk);
        ACMP_sdiv_U.reset(reset);
        ACMP_sdiv_U.ce(ce);
        ACMP_sdiv_U.din0(din0);
        ACMP_sdiv_U.din1(din1);
        ACMP_sdiv_U.dout(dout);

    }

};

#endif //
