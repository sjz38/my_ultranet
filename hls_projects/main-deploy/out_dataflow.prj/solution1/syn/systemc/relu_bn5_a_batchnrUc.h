// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn5_a_batchnrUc_H__
#define __relu_bn5_a_batchnrUc_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn5_a_batchnrUc_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 10;
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


   SC_CTOR(relu_bn5_a_batchnrUc_ram) {
        ram[0] = "0b0010011010";
        ram[1] = "0b0001110111";
        ram[2] = "0b0010101011";
        ram[3] = "0b0010010110";
        ram[4] = "0b0100101011";
        ram[5] = "0b0010010100";
        ram[6] = "0b0001110011";
        ram[7] = "0b0010000111";
        ram[8] = "0b0010101110";
        ram[9] = "0b0010100111";
        ram[10] = "0b0010000101";
        ram[11] = "0b0010010100";
        ram[12] = "0b0010101011";
        ram[13] = "0b0001101000";
        ram[14] = "0b0010100100";
        ram[15] = "0b0011010110";
        ram[16] = "0b0010010000";
        ram[17] = "0b0000000011";
        ram[18] = "0b0001100111";
        ram[19] = "0b0010000011";
        ram[20] = "0b0001110011";
        ram[21] = "0b0001101010";
        ram[22] = "0b0011101000";
        ram[23] = "0b0010001110";
        ram[24] = "0b0010111111";
        ram[25] = "0b0010000101";
        ram[26] = "0b0010101001";
        ram[27] = "0b0001111100";
        ram[28] = "0b0001110100";
        ram[29] = "0b0010011110";
        ram[30] = "0b0010101100";
        ram[31] = "0b0010000100";
        ram[32] = "0b0010000010";
        ram[33] = "0b0010100010";
        ram[34] = "0b0010011011";
        ram[35] = "0b0010001101";
        ram[36] = "0b0010000111";
        ram[37] = "0b0001110001";
        ram[38] = "0b1010110000";
        ram[39] = "0b0001101110";
        ram[40] = "0b0010100010";
        ram[41] = "0b0010100001";
        ram[42] = "0b0001101111";
        ram[43] = "0b0010100001";
        ram[44] = "0b0010001100";
        ram[45] = "0b0001110011";
        ram[46] = "0b0010000100";
        ram[47] = "0b0010010000";
        ram[48] = "0b0001100000";
        ram[49] = "0b0001110100";
        ram[50] = "0b0010000001";
        ram[51] = "0b0001101000";
        ram[52] = "0b0001111100";
        ram[53] = "0b0010010111";
        ram[54] = "0b0001110000";
        ram[55] = "0b0001110100";
        ram[56] = "0b0010000111";
        ram[57] = "0b0011101100";
        ram[58] = "0b0010110100";
        ram[59] = "0b0010000011";
        ram[60] = "0b0001110100";
        ram[61] = "0b0010110111";
        ram[62] = "0b0010001111";
        ram[63] = "0b0010101100";


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


SC_MODULE(relu_bn5_a_batchnrUc) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn5_a_batchnrUc_ram* meminst;


SC_CTOR(relu_bn5_a_batchnrUc) {
meminst = new relu_bn5_a_batchnrUc_ram("relu_bn5_a_batchnrUc_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn5_a_batchnrUc() {
    delete meminst;
}


};//endmodule
#endif
