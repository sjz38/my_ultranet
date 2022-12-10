// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn3_b_batchnkXb_H__
#define __relu_bn3_b_batchnkXb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn3_b_batchnkXb_ram : public sc_core::sc_module {

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


   SC_CTOR(relu_bn3_b_batchnkXb_ram) {
        ram[0] = "0b111110010101100111110";
        ram[1] = "0b000000111111010001111";
        ram[2] = "0b000001010000111110110";
        ram[3] = "0b111011010000011100010";
        ram[4] = "0b111111100010101101000";
        ram[5] = "0b000000001001010000001";
        ram[6] = "0b000100111010101111111";
        ram[7] = "0b000001110010101000010";
        ram[8] = "0b111110011110011111110";
        ram[9] = "0b111011011111010111100";
        ram[10] = "0b111011001111010001111";
        ram[11] = "0b111110001010001000000";
        ram[12] = "0b000001001100111100101";
        ram[13] = "0b000000001101011101000";
        ram[14] = "0b000000001100100011111";
        ram[15] = "0b000001011011001010001";
        ram[16] = "0b111110000011001010101";
        ram[17] = "0b000000011110111010101";
        ram[18] = "0b111110100000100101000";
        ram[19] = "0b000000000111111111100";
        ram[20] = "0b111111011011101110010";
        ram[21] = "0b110110011100101101000";
        ram[22] = "0b111111001101100100010";
        ram[23] = "0b000000101000011000101";
        ram[24] = "0b111010011000001011101";
        ram[25] = "0b111111000110011011100";
        ram[26] = "0b000010101110001000010";
        ram[27] = "0b000010000011100110011";
        ram[28] = "0b000001011100100010000";
        ram[29] = "0b000000111000000011010";
        ram[30] = "0b000010010011001000101";
        ram[31] = "0b111001111111101100110";
        ram[32] = "0b111111001001111101111";
        ram[33] = "0b111101101001010101001";
        ram[34] = "0b110100100111001000001";
        ram[35] = "0b000110001110000000011";
        ram[36] = "0b111110001110100011101";
        ram[37] = "0b111110101011111000100";
        ram[38] = "0b111010010110011001001";
        ram[39] = "0b111111110000110111000";
        ram[40] = "0b111100000100111110111";
        ram[41] = "0b111100101001100001101";
        ram[42] = "0b110011101001101100101";
        ram[43] = "0b000011100101000010100";
        ram[44] = "0b000011000010010001001";
        ram[45] = "0b111111111000001010011";
        ram[46] = "0b111110010001111100110";
        ram[47] = "0b000000101101110000010";
        ram[48] = "0b111111001000111000001";
        ram[49] = "0b000000100110110100101";
        ram[50] = "0b111111110011101100111";
        ram[51] = "0b111110001001001100100";
        ram[52] = "0b101101011001010011111";
        ram[53] = "0b111011101111100110101";
        ram[54] = "0b000001110111001111100";
        ram[55] = "0b111100100011000110011";
        ram[56] = "0b111111110100100110100";
        ram[57] = "0b111010100110001100100";
        ram[58] = "0b111111000000001001110";
        ram[59] = "0b111101110010001110110";
        ram[60] = "0b000000001010011100111";
        ram[61] = "0b000000100110011111111";
        ram[62] = "0b111111001010011101010";
        ram[63] = "0b000001110110111001111";


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


SC_MODULE(relu_bn3_b_batchnkXb) {


static const unsigned DataWidth = 21;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn3_b_batchnkXb_ram* meminst;


SC_CTOR(relu_bn3_b_batchnkXb) {
meminst = new relu_bn3_b_batchnkXb_ram("relu_bn3_b_batchnkXb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn3_b_batchnkXb() {
    delete meminst;
}


};//endmodule
#endif
