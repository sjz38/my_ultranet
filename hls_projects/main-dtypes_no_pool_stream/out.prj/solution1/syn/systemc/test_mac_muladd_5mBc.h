// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __test_mac_muladd_5mBc__HH__
#define __test_mac_muladd_5mBc__HH__
#include "simcore_mac_4.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int din2_WIDTH,
    int dout_WIDTH>
SC_MODULE(test_mac_muladd_5mBc) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<din2_WIDTH> >   din2;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    simcore_mac_4<ID, 1, din0_WIDTH, din1_WIDTH, din2_WIDTH, dout_WIDTH> simcore_mac_4_U;

    SC_CTOR(test_mac_muladd_5mBc):  simcore_mac_4_U ("simcore_mac_4_U") {
        simcore_mac_4_U.din0(din0);
        simcore_mac_4_U.din1(din1);
        simcore_mac_4_U.din2(din2);
        simcore_mac_4_U.dout(dout);

    }

};

#endif //
