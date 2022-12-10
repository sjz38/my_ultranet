// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn6_a_batchnvld_H__
#define __relu_bn6_a_batchnvld_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn6_a_batchnvld_ram : public sc_core::sc_module {

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


   SC_CTOR(relu_bn6_a_batchnvld_ram) {
        ram[0] = "0b0001110101";
        ram[1] = "0b0001111010";
        ram[2] = "0b0001110100";
        ram[3] = "0b0010010001";
        ram[4] = "0b0010100000";
        ram[5] = "0b0010011110";
        ram[6] = "0b0001011101";
        ram[7] = "0b0001011111";
        ram[8] = "0b0010101101";
        ram[9] = "0b0010011001";
        ram[10] = "0b0001011111";
        ram[11] = "0b0001101100";
        ram[12] = "0b0001110111";
        ram[13] = "0b0010101101";
        ram[14] = "0b0001110111";
        ram[15] = "0b0001111011";
        ram[16] = "0b0001110110";
        ram[17] = "0b0010000111";
        ram[18] = "0b0010011000";
        ram[19] = "0b0010011001";
        ram[20] = "0b0010010000";
        ram[21] = "0b0010000100";
        ram[22] = "0b0010101110";
        ram[23] = "0b0001100101";
        ram[24] = "0b0001110111";
        ram[25] = "0b0001101001";
        ram[26] = "0b0010111010";
        ram[27] = "0b0010011010";
        ram[28] = "0b0001111111";
        ram[29] = "0b0010001000";
        ram[30] = "0b0010000110";
        ram[31] = "0b0010110000";
        ram[32] = "0b0001111011";
        ram[33] = "0b0100010101";
        ram[34] = "0b0001011010";
        ram[35] = "0b0001110010";
        ram[36] = "0b0010000111";
        ram[37] = "0b0001111010";
        ram[38] = "0b0010110101";
        ram[39] = "0b0001110010";
        ram[40] = "0b0010010011";
        ram[41] = "0b0010011100";
        ram[42] = "0b0010001101";
        ram[43] = "0b0001110110";
        ram[44] = "0b0001110001";
        ram[45] = "0b0010101000";
        ram[46] = "0b0010100010";
        ram[47] = "0b1111110111";
        ram[48] = "0b0010101100";
        ram[49] = "0b0001101111";
        ram[50] = "0b0001100011";
        ram[51] = "0b0010011110";
        ram[52] = "0b0000100010";
        ram[53] = "0b0010000101";
        ram[54] = "0b0001111110";
        ram[55] = "0b0010110100";
        ram[56] = "0b0001111001";
        ram[57] = "0b0010000010";
        ram[58] = "0b0010000010";
        ram[59] = "0b0010001110";
        ram[60] = "0b0010100101";
        ram[61] = "0b0010110001";
        ram[62] = "0b0001110100";
        ram[63] = "0b0010000001";


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


SC_MODULE(relu_bn6_a_batchnvld) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn6_a_batchnvld_ram* meminst;


SC_CTOR(relu_bn6_a_batchnvld) {
meminst = new relu_bn6_a_batchnvld_ram("relu_bn6_a_batchnvld_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn6_a_batchnvld() {
    delete meminst;
}


};//endmodule
#endif
