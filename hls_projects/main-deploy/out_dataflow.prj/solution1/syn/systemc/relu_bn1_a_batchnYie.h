// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn1_a_batchnYie_H__
#define __relu_bn1_a_batchnYie_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn1_a_batchnYie_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
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


   SC_CTOR(relu_bn1_a_batchnYie_ram) {
        ram[0] = "0b000100010001";
        ram[1] = "0b000110111000";
        ram[2] = "0b001111000101";
        ram[3] = "0b001100010100";
        ram[4] = "0b001000111001";
        ram[5] = "0b001100101110";
        ram[6] = "0b011101001101";
        ram[7] = "0b001111100001";
        ram[8] = "0b111000100001";
        ram[9] = "0b111001110110";
        ram[10] = "0b001111111001";
        ram[11] = "0b000011010100";
        ram[12] = "0b001101000101";
        ram[13] = "0b010001100110";
        ram[14] = "0b000101101100";
        ram[15] = "0b001011010000";


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


SC_MODULE(relu_bn1_a_batchnYie) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn1_a_batchnYie_ram* meminst;


SC_CTOR(relu_bn1_a_batchnYie) {
meminst = new relu_bn1_a_batchnYie_ram("relu_bn1_a_batchnYie_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn1_a_batchnYie() {
    delete meminst;
}


};//endmodule
#endif
