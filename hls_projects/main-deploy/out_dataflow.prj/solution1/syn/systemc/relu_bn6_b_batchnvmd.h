// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn6_b_batchnvmd_H__
#define __relu_bn6_b_batchnvmd_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn6_b_batchnvmd_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 20;
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


   SC_CTOR(relu_bn6_b_batchnvmd_ram) {
        ram[0] = "0b11101000110001000100";
        ram[1] = "0b11111010001110010001";
        ram[2] = "0b11101100000000000011";
        ram[3] = "0b11110100010000100000";
        ram[4] = "0b00100100000101101001";
        ram[5] = "0b00111110110100000011";
        ram[6] = "0b00011000010010101001";
        ram[7] = "0b00010001000111110001";
        ram[8] = "0b11111011010011101100";
        ram[9] = "0b11010110001110011000";
        ram[10] = "0b11111110000011101000";
        ram[11] = "0b00100100010001110111";
        ram[12] = "0b00001101110000111110";
        ram[13] = "0b00100001111111001110";
        ram[14] = "0b00101000110110100101";
        ram[15] = "0b00101110010000100000";
        ram[16] = "0b11101111111000110001";
        ram[17] = "0b00010111011001100011";
        ram[18] = "0b00010011101010001101";
        ram[19] = "0b00110001000000000111";
        ram[20] = "0b00101000011010110111";
        ram[21] = "0b00000101010100010100";
        ram[22] = "0b00010001011101111001";
        ram[23] = "0b00010111001010000010";
        ram[24] = "0b11111010110100111001";
        ram[25] = "0b00100000100010011110";
        ram[26] = "0b00111110001011111010";
        ram[27] = "0b00100000001101100101";
        ram[28] = "0b11111000110101101010";
        ram[29] = "0b11101011011111011000";
        ram[30] = "0b00001011001010001011";
        ram[31] = "0b11100100100100101110";
        ram[32] = "0b11011101001010110000";
        ram[33] = "0b00001010110000000100";
        ram[34] = "0b01000110101000010000";
        ram[35] = "0b00110011000001010011";
        ram[36] = "0b11001010111101010100";
        ram[37] = "0b00001001011101001001";
        ram[38] = "0b11111111101010111000";
        ram[39] = "0b01000111000101001010";
        ram[40] = "0b00100100111000100111";
        ram[41] = "0b00010010011011101000";
        ram[42] = "0b00011101000101010100";
        ram[43] = "0b00000000110110001101";
        ram[44] = "0b11111011111000010000";
        ram[45] = "0b00100001010101010010";
        ram[46] = "0b00000011111010110101";
        ram[47] = "0b11111110110000001001";
        ram[48] = "0b11111000011101000101";
        ram[49] = "0b00001001110100111111";
        ram[50] = "0b00011100100010011100";
        ram[51] = "0b11110110101110011111";
        ram[52] = "0b11111010001101010101";
        ram[53] = "0b00010001010001000010";
        ram[54] = "0b00001011100100000010";
        ram[55] = "0b11001010011101101111";
        ram[56] = "0b11111010011101110000";
        ram[57] = "0b01011100000011110010";
        ram[58] = "0b11100001100110110001";
        ram[59] = "0b01001000100001101011";
        ram[60] = "0b00011111100010111001";
        ram[61] = "0b00000001110000110111";
        ram[62] = "0b00000111111010001011";
        ram[63] = "0b11111011010100011111";


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


SC_MODULE(relu_bn6_b_batchnvmd) {


static const unsigned DataWidth = 20;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn6_b_batchnvmd_ram* meminst;


SC_CTOR(relu_bn6_b_batchnvmd) {
meminst = new relu_bn6_b_batchnvmd_ram("relu_bn6_b_batchnvmd_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn6_b_batchnvmd() {
    delete meminst;
}


};//endmodule
#endif
