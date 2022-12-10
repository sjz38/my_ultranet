// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn7_b_batchnyNd_H__
#define __relu_bn7_b_batchnyNd_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn7_b_batchnyNd_ram : public sc_core::sc_module {

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


   SC_CTOR(relu_bn7_b_batchnyNd_ram) {
        ram[0] = "0b111000010010100100101";
        ram[1] = "0b000010000101010011100";
        ram[2] = "0b000011001001011101000";
        ram[3] = "0b000001101011100000000";
        ram[4] = "0b000001101111011101101";
        ram[5] = "0b111110010001100110110";
        ram[6] = "0b111111100010001101011";
        ram[7] = "0b000101110101100101000";
        ram[8] = "0b001011111110100000110";
        ram[9] = "0b000000001010110011100";
        ram[10] = "0b000010110001011011100";
        ram[11] = "0b000001010110110001110";
        ram[12] = "0b001101110111011111011";
        ram[13] = "0b000111000011111010100";
        ram[14] = "0b111001110111010000110";
        ram[15] = "0b111111101111000100001";
        ram[16] = "0b111010101101110001000";
        ram[17] = "0b000100110100111101001";
        ram[18] = "0b000011101110011001011";
        ram[19] = "0b000001101001010001011";
        ram[20] = "0b111110111010100010000";
        ram[21] = "0b010000000010101000001";
        ram[22] = "0b000011000001010001010";
        ram[23] = "0b000100000010110111011";
        ram[24] = "0b000110010101011011010";
        ram[25] = "0b000010100000011000010";
        ram[26] = "0b001101010111001000100";
        ram[27] = "0b000110101111111010010";
        ram[28] = "0b111111111110100001100";
        ram[29] = "0b011101111011010100100";
        ram[30] = "0b000011010010010000011";
        ram[31] = "0b111111100101010000000";
        ram[32] = "0b111011001000000010011";
        ram[33] = "0b111111111001000011110";
        ram[34] = "0b001100110101000001101";
        ram[35] = "0b111011011000111001111";
        ram[36] = "0b000101011011111001101";
        ram[37] = "0b001101100001100101111";
        ram[38] = "0b000000101111000010011";
        ram[39] = "0b111111011010000100111";
        ram[40] = "0b000111101111001111110";
        ram[41] = "0b000011001100010101000";
        ram[42] = "0b111001001010011100100";
        ram[43] = "0b001010111100011010100";
        ram[44] = "0b111110010100110000010";
        ram[45] = "0b000011111101110010110";
        ram[46] = "0b111111011100010010011";
        ram[47] = "0b000000010111001101011";
        ram[48] = "0b000011110011000001101";
        ram[49] = "0b001111101110101001000";
        ram[50] = "0b000001001101001001101";
        ram[51] = "0b111111001000111110010";
        ram[52] = "0b001001000110100011110";
        ram[53] = "0b001000111001101000000";
        ram[54] = "0b011011011100011001000";
        ram[55] = "0b111010110100011011000";
        ram[56] = "0b000010010000001110001";
        ram[57] = "0b001000011110011101010";
        ram[58] = "0b111010011111010010010";
        ram[59] = "0b000101010111101001010";
        ram[60] = "0b000011110100010001010";
        ram[61] = "0b111011110111010010011";
        ram[62] = "0b000011100000001101100";
        ram[63] = "0b010010011100000110100";


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


SC_MODULE(relu_bn7_b_batchnyNd) {


static const unsigned DataWidth = 21;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn7_b_batchnyNd_ram* meminst;


SC_CTOR(relu_bn7_b_batchnyNd) {
meminst = new relu_bn7_b_batchnyNd_ram("relu_bn7_b_batchnyNd_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn7_b_batchnyNd() {
    delete meminst;
}


};//endmodule
#endif
