// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn8_b_batchnCde_H__
#define __relu_bn8_b_batchnCde_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn8_b_batchnCde_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 22;
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


   SC_CTOR(relu_bn8_b_batchnCde_ram) {
        ram[0] = "0b0000110111011011010011";
        ram[1] = "0b1101011110110110011110";
        ram[2] = "0b0000000000110111011111";
        ram[3] = "0b0010111000011000000011";
        ram[4] = "0b0000001010011000100001";
        ram[5] = "0b0000101110110100111100";
        ram[6] = "0b0011111111000011001101";
        ram[7] = "0b0000001101111011010111";
        ram[8] = "0b1101111100000011110110";
        ram[9] = "0b0000001100111001100101";
        ram[10] = "0b1101011011100101011011";
        ram[11] = "0b1111110010011100111001";
        ram[12] = "0b1111101101010111111110";
        ram[13] = "0b0000000001011011001110";
        ram[14] = "0b1111000001111001011111";
        ram[15] = "0b0000000110100000100100";
        ram[16] = "0b0000110001000000010010";
        ram[17] = "0b0110000001110101000011";
        ram[18] = "0b0000011001100110100011";
        ram[19] = "0b0000001100100110001010";
        ram[20] = "0b0001000000111110010010";
        ram[21] = "0b0010110100010111110010";
        ram[22] = "0b0000010100100100000011";
        ram[23] = "0b0000010011011010001001";
        ram[24] = "0b0111111100100111011110";
        ram[25] = "0b1101010010111101010101";
        ram[26] = "0b1111110101011001101100";
        ram[27] = "0b0000001110110110110110";
        ram[28] = "0b0000010111001011110101";
        ram[29] = "0b0101011011100001001110";
        ram[30] = "0b0100010100111101011111";
        ram[31] = "0b0000001000010110100011";
        ram[32] = "0b0110110111001110101110";
        ram[33] = "0b0000100100111100100001";
        ram[34] = "0b0001100110000001101011";
        ram[35] = "0b0000101010110010001000";
        ram[36] = "0b0000001000011100011010";
        ram[37] = "0b0010100000010001000100";
        ram[38] = "0b0000010001011110110110";
        ram[39] = "0b1111010111001110110001";
        ram[40] = "0b0001100000001001000110";
        ram[41] = "0b1111110011110000010100";
        ram[42] = "0b1111110111101010111011";
        ram[43] = "0b1110011010110100111111";
        ram[44] = "0b1100000100111111111001";
        ram[45] = "0b0000110010110100001001";
        ram[46] = "0b1111001001001101110100";
        ram[47] = "0b0000001011001000100101";
        ram[48] = "0b0000011111011000101011";
        ram[49] = "0b0001001001001001011100";
        ram[50] = "0b0000010011110100111011";
        ram[51] = "0b0101100100101010111101";
        ram[52] = "0b0000000100001010001101";
        ram[53] = "0b0000010101001111000011";
        ram[54] = "0b0000000010111000001000";
        ram[55] = "0b1101100001110100001100";
        ram[56] = "0b0000011100100001001101";
        ram[57] = "0b0000100000111010001001";
        ram[58] = "0b0000000001111010110010";
        ram[59] = "0b0000010011001001010100";
        ram[60] = "0b0000011011110000110100";
        ram[61] = "0b0001111001011101011110";
        ram[62] = "0b0000010001010101010100";
        ram[63] = "0b0001110111000111111111";


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


SC_MODULE(relu_bn8_b_batchnCde) {


static const unsigned DataWidth = 22;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn8_b_batchnCde_ram* meminst;


SC_CTOR(relu_bn8_b_batchnCde) {
meminst = new relu_bn8_b_batchnCde_ram("relu_bn8_b_batchnCde_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn8_b_batchnCde() {
    delete meminst;
}


};//endmodule
#endif
