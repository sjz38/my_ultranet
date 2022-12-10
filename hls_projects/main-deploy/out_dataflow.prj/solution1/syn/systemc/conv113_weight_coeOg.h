// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv113_weight_coeOg_H__
#define __conv113_weight_coeOg_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv113_weight_coeOg_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 5;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv113_weight_coeOg_ram) {
        ram[0] = "0b11001";
        ram[1] = "0b11111";
        ram[2] = "0b01000";
        ram[3] = "0b00110";
        ram[4] = "0b00111";
        ram[5] = "0b11111";
        ram[6] = "0b00001";
        ram[7] = "0b11001";
        ram[8] = "0b11110";
        ram[9] = "0b00001";
        ram[10] = "0b00010";
        ram[11] = "0b00010";
        ram[12] = "0b00111";
        ram[13] = "0b00000";
        ram[14] = "0b00000";
        ram[15] = "0b11101";


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


SC_MODULE(conv113_weight_coeOg) {


static const unsigned DataWidth = 5;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv113_weight_coeOg_ram* meminst;


SC_CTOR(conv113_weight_coeOg) {
meminst = new conv113_weight_coeOg_ram("conv113_weight_coeOg_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv113_weight_coeOg() {
    delete meminst;
}


};//endmodule
#endif
