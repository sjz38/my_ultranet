// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn2_a_batchneuR_H__
#define __relu_bn2_a_batchneuR_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn2_a_batchneuR_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 10;
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


   SC_CTOR(relu_bn2_a_batchneuR_ram) {
        ram[0] = "0b0100101111";
        ram[1] = "0b0101001001";
        ram[2] = "0b0010010011";
        ram[3] = "0b0100010000";
        ram[4] = "0b0011111100";
        ram[5] = "0b0100001001";
        ram[6] = "0b0010110100";
        ram[7] = "0b0100000111";
        ram[8] = "0b0011010010";
        ram[9] = "0b0110011011";
        ram[10] = "0b0100010001";
        ram[11] = "0b0110101110";
        ram[12] = "0b0011010011";
        ram[13] = "0b0101010100";
        ram[14] = "0b0101100100";
        ram[15] = "0b0100011010";
        ram[16] = "0b0101101011";
        ram[17] = "0b0010110100";
        ram[18] = "0b0100101110";
        ram[19] = "0b0100110100";
        ram[20] = "0b0101100000";
        ram[21] = "0b0110111111";
        ram[22] = "0b0100000000";
        ram[23] = "0b1001000110";
        ram[24] = "0b0100011111";
        ram[25] = "0b0011111101";
        ram[26] = "0b0101110011";
        ram[27] = "0b0111000100";
        ram[28] = "0b0011110100";
        ram[29] = "0b0101101101";
        ram[30] = "0b0000101001";
        ram[31] = "0b0110100100";


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


SC_MODULE(relu_bn2_a_batchneuR) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn2_a_batchneuR_ram* meminst;


SC_CTOR(relu_bn2_a_batchneuR) {
meminst = new relu_bn2_a_batchneuR_ram("relu_bn2_a_batchneuR_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn2_a_batchneuR() {
    delete meminst;
}


};//endmodule
#endif
