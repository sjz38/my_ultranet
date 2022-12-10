// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv2_weight_conv5jm_H__
#define __conv2_weight_conv5jm_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv2_weight_conv5jm_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 4;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv2_weight_conv5jm_ram) {
        ram[0] = "0b1101";
        ram[1] = "0b0000";
        ram[2] = "0b1101";
        ram[3] = "0b1011";
        ram[4] = "0b0010";
        ram[5] = "0b0100";
        ram[6] = "0b0001";
        ram[7] = "0b0000";
        ram[8] = "0b1110";
        ram[9] = "0b1111";
        ram[10] = "0b1100";
        ram[11] = "0b1111";
        ram[12] = "0b1110";
        ram[13] = "0b0010";
        ram[14] = "0b0010";
        ram[15] = "0b0010";
        ram[16] = "0b1100";
        ram[17] = "0b0001";
        ram[18] = "0b1111";
        ram[19] = "0b0010";
        ram[20] = "0b1100";
        ram[21] = "0b0000";
        ram[22] = "0b1111";
        ram[23] = "0b1101";
        ram[24] = "0b0010";
        ram[25] = "0b0000";
        ram[26] = "0b1101";
        ram[27] = "0b1111";
        ram[28] = "0b0000";
        ram[29] = "0b0100";
        ram[30] = "0b1111";
        ram[31] = "0b0010";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv2_weight_conv5jm) {


static const unsigned DataWidth = 4;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv2_weight_conv5jm_ram* meminst;


SC_CTOR(conv2_weight_conv5jm) {
meminst = new conv2_weight_conv5jm_ram("conv2_weight_conv5jm_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv2_weight_conv5jm() {
    delete meminst;
}


};//endmodule
#endif
