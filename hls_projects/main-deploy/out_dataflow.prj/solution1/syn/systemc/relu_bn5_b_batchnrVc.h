// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn5_b_batchnrVc_H__
#define __relu_bn5_b_batchnrVc_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn5_b_batchnrVc_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 21;
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


   SC_CTOR(relu_bn5_b_batchnrVc_ram) {
        ram[0] = "0b000001000101011100101";
        ram[1] = "0b111110011000011001001";
        ram[2] = "0b000011100100100100110";
        ram[3] = "0b000001100101000110101";
        ram[4] = "0b010000000010110001011";
        ram[5] = "0b111010111101100011011";
        ram[6] = "0b000001111101000111010";
        ram[7] = "0b000110110110111010110";
        ram[8] = "0b111011111100010001001";
        ram[9] = "0b111110100111100101001";
        ram[10] = "0b111110001010111100010";
        ram[11] = "0b111100000010111111000";
        ram[12] = "0b000011101101101101010";
        ram[13] = "0b000010011101101111111";
        ram[14] = "0b000001000011111011001";
        ram[15] = "0b000001000101111011001";
        ram[16] = "0b111111111110000000111";
        ram[17] = "0b111111110011100110000";
        ram[18] = "0b111111001011001101000";
        ram[19] = "0b111100010101110100000";
        ram[20] = "0b000100101001001110000";
        ram[21] = "0b000001100010000011110";
        ram[22] = "0b001011011000111001001";
        ram[23] = "0b111100111001110000100";
        ram[24] = "0b001011101101111000110";
        ram[25] = "0b000100000011010001010";
        ram[26] = "0b111001001100110011110";
        ram[27] = "0b000100110010110010111";
        ram[28] = "0b000010111000100000101";
        ram[29] = "0b111110010111100011010";
        ram[30] = "0b111101101010101101101";
        ram[31] = "0b000010000101011101001";
        ram[32] = "0b111111010000111110111";
        ram[33] = "0b000000001010111100011";
        ram[34] = "0b111001001001110100010";
        ram[35] = "0b111101110100110110001";
        ram[36] = "0b111101101110110100111";
        ram[37] = "0b000001101111001001100";
        ram[38] = "0b000110100010111011010";
        ram[39] = "0b111101010110011110100";
        ram[40] = "0b000110011111010011000";
        ram[41] = "0b111011011101011001100";
        ram[42] = "0b000010010110011000111";
        ram[43] = "0b001000001110010000010";
        ram[44] = "0b111101011110001001111";
        ram[45] = "0b000100110000110100100";
        ram[46] = "0b111100101011110010101";
        ram[47] = "0b000000000100110011101";
        ram[48] = "0b000010101001110101110";
        ram[49] = "0b111100100011101000100";
        ram[50] = "0b111101111101000110110";
        ram[51] = "0b000111111100100001111";
        ram[52] = "0b111111001100100100101";
        ram[53] = "0b000000111101001101001";
        ram[54] = "0b111111111101110101100";
        ram[55] = "0b001001101110001011011";
        ram[56] = "0b111110001101001101010";
        ram[57] = "0b111001000001010111010";
        ram[58] = "0b000111110111110111110";
        ram[59] = "0b000000100000110101111";
        ram[60] = "0b000001100110011110100";
        ram[61] = "0b001011011110000111100";
        ram[62] = "0b000010010100011101010";
        ram[63] = "0b111111011001011110100";


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


SC_MODULE(relu_bn5_b_batchnrVc) {


static const unsigned DataWidth = 21;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn5_b_batchnrVc_ram* meminst;


SC_CTOR(relu_bn5_b_batchnrVc) {
meminst = new relu_bn5_b_batchnrVc_ram("relu_bn5_b_batchnrVc_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn5_b_batchnrVc() {
    delete meminst;
}


};//endmodule
#endif
