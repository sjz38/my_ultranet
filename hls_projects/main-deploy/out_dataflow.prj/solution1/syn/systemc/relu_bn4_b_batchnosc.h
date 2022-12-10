// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn4_b_batchnosc_H__
#define __relu_bn4_b_batchnosc_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn4_b_batchnosc_ram : public sc_core::sc_module {

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


   SC_CTOR(relu_bn4_b_batchnosc_ram) {
        ram[0] = "0b11111000100010100111";
        ram[1] = "0b11111111010100011111";
        ram[2] = "0b11011011001011001011";
        ram[3] = "0b00000010011100000110";
        ram[4] = "0b11101111000000101010";
        ram[5] = "0b11010100000011101101";
        ram[6] = "0b11101011011000010010";
        ram[7] = "0b00001010010111010000";
        ram[8] = "0b11111101010111011111";
        ram[9] = "0b11100010111011101111";
        ram[10] = "0b11000001100101011000";
        ram[11] = "0b11111011100000111001";
        ram[12] = "0b00001010000000010110";
        ram[13] = "0b00011100001011010010";
        ram[14] = "0b11111110010011000010";
        ram[15] = "0b11111010011111110001";
        ram[16] = "0b11111011100010001010";
        ram[17] = "0b11101011011000010111";
        ram[18] = "0b10100010110000100111";
        ram[19] = "0b00101101110110010001";
        ram[20] = "0b11101000011011111010";
        ram[21] = "0b11011110111101111100";
        ram[22] = "0b00011010001000110011";
        ram[23] = "0b11111001101100001011";
        ram[24] = "0b11110101010001100100";
        ram[25] = "0b00110110011000111011";
        ram[26] = "0b11101000110011010100";
        ram[27] = "0b11111010011000100010";
        ram[28] = "0b00000010000010100000";
        ram[29] = "0b00000101100010101111";
        ram[30] = "0b11111101001110010011";
        ram[31] = "0b10110100100011011001";
        ram[32] = "0b00001110100001101011";
        ram[33] = "0b11100101011110110100";
        ram[34] = "0b00001010111000110110";
        ram[35] = "0b11101011110101111001";
        ram[36] = "0b11011101111111110011";
        ram[37] = "0b11111000101101101000";
        ram[38] = "0b11101001110111100001";
        ram[39] = "0b00000010000000001100";
        ram[40] = "0b00000010101011110111";
        ram[41] = "0b11110110000000111100";
        ram[42] = "0b00000011100000110010";
        ram[43] = "0b11001000000011000100";
        ram[44] = "0b11111011100101000100";
        ram[45] = "0b00100110100100011001";
        ram[46] = "0b11111111100011100110";
        ram[47] = "0b11110110111101111111";
        ram[48] = "0b01000001000001011010";
        ram[49] = "0b11001110110101110001";
        ram[50] = "0b11111010110101010111";
        ram[51] = "0b11111010101111011101";
        ram[52] = "0b00000010001110111001";
        ram[53] = "0b00000100110011000011";
        ram[54] = "0b11100110000110101101";
        ram[55] = "0b11100110110100000101";
        ram[56] = "0b11111100010110111111";
        ram[57] = "0b11100110100101011000";
        ram[58] = "0b11011110001101000010";
        ram[59] = "0b00010101110011000000";
        ram[60] = "0b11111100110000111011";
        ram[61] = "0b11111000010001001000";
        ram[62] = "0b11101011111000000110";
        ram[63] = "0b11111010001001110000";


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


SC_MODULE(relu_bn4_b_batchnosc) {


static const unsigned DataWidth = 20;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn4_b_batchnosc_ram* meminst;


SC_CTOR(relu_bn4_b_batchnosc) {
meminst = new relu_bn4_b_batchnosc_ram("relu_bn4_b_batchnosc_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn4_b_batchnosc() {
    delete meminst;
}


};//endmodule
#endif
