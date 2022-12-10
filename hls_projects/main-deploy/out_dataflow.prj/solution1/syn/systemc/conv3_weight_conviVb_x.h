// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv3_weight_conviVb_x_H__
#define __conv3_weight_conviVb_x_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv3_weight_conviVb_x_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 2;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv3_weight_conviVb_x_ram) {
        ram[0] = "0b01";
        ram[1] = "0b01";
        ram[2] = "0b00";
        ram[3] = "0b00";
        ram[4] = "0b01";
        ram[5] = "0b11";
        ram[6] = "0b00";
        ram[7] = "0b11";
        ram[8] = "0b01";
        ram[9] = "0b11";
        ram[10] = "0b00";
        ram[11] = "0b11";
        ram[12] = "0b00";
        ram[13] = "0b11";
        ram[14] = "0b00";
        ram[15] = "0b01";
        ram[16] = "0b00";
        ram[17] = "0b11";
        ram[18] = "0b00";
        ram[19] = "0b01";
        ram[20] = "0b01";
        ram[21] = "0b01";
        ram[22] = "0b11";
        ram[23] = "0b00";
        ram[24] = "0b11";
        ram[25] = "0b11";
        ram[26] = "0b11";
        ram[27] = "0b00";
        ram[28] = "0b11";
        ram[29] = "0b11";
        ram[30] = "0b00";
        ram[31] = "0b01";
        ram[32] = "0b01";
        ram[33] = "0b01";
        ram[34] = "0b01";
        ram[35] = "0b00";
        ram[36] = "0b00";
        ram[37] = "0b01";
        ram[38] = "0b01";
        ram[39] = "0b01";
        ram[40] = "0b00";
        ram[41] = "0b00";
        ram[42] = "0b00";
        ram[43] = "0b00";
        ram[44] = "0b11";
        ram[45] = "0b01";
        ram[46] = "0b00";
        ram[47] = "0b00";
        ram[48] = "0b11";
        ram[49] = "0b11";
        ram[50] = "0b00";
        ram[51] = "0b11";
        ram[52] = "0b11";
        ram[53] = "0b00";
        ram[54] = "0b01";
        ram[55] = "0b00";
        ram[56] = "0b11";
        ram[57] = "0b11";
        ram[58] = "0b11";
        for (unsigned i = 59; i < 64 ; i = i + 1) {
            ram[i] = "0b00";
        }


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


SC_MODULE(conv3_weight_conviVb_x) {


static const unsigned DataWidth = 2;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv3_weight_conviVb_x_ram* meminst;


SC_CTOR(conv3_weight_conviVb_x) {
meminst = new conv3_weight_conviVb_x_ram("conv3_weight_conviVb_x_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv3_weight_conviVb_x() {
    delete meminst;
}


};//endmodule
#endif
