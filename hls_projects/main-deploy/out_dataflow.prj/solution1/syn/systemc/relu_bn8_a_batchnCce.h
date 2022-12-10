// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn8_a_batchnCce_H__
#define __relu_bn8_a_batchnCce_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn8_a_batchnCce_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
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


   SC_CTOR(relu_bn8_a_batchnCce_ram) {
        ram[0] = "0b000001101111";
        ram[1] = "0b111011000111";
        ram[2] = "0b000000010011";
        ram[3] = "0b000111011110";
        ram[4] = "0b000000011100";
        ram[5] = "0b000001111000";
        ram[6] = "0b001011010000";
        ram[7] = "0b000000111010";
        ram[8] = "0b000110111111";
        ram[9] = "0b000000100011";
        ram[10] = "0b000011100110";
        ram[11] = "0b000000100110";
        ram[12] = "0b000010111111";
        ram[13] = "0b001001100110";
        ram[14] = "0b001000100011";
        ram[15] = "0b000000010111";
        ram[16] = "0b000010000110";
        ram[17] = "0b001000000010";
        ram[18] = "0b000000011101";
        ram[19] = "0b000000011011";
        ram[20] = "0b000001011101";
        ram[21] = "0b000011000110";
        ram[22] = "0b000000101000";
        ram[23] = "0b000000100001";
        ram[24] = "0b001010010101";
        ram[25] = "0b110011011011";
        ram[26] = "0b000010111100";
        ram[27] = "0b000000011011";
        ram[28] = "0b000001000011";
        ram[29] = "0b010000010111";
        ram[30] = "0b001010111001";
        ram[31] = "0b000000010101";
        ram[32] = "0b001000011001";
        ram[33] = "0b000000100110";
        ram[34] = "0b000101011000";
        ram[35] = "0b000000101001";
        ram[36] = "0b000000011000";
        ram[37] = "0b000100010110";
        ram[38] = "0b000000100101";
        ram[39] = "0b000001111101";
        ram[40] = "0b000110100010";
        ram[41] = "0b000000010100";
        ram[42] = "0b000000100011";
        ram[43] = "0b000001001100";
        ram[44] = "0b000110100101";
        ram[45] = "0b000000101101";
        ram[46] = "0b001010100111";
        ram[47] = "0b000000100111";
        ram[48] = "0b000000011111";
        ram[49] = "0b000101111001";
        ram[50] = "0b000000011000";
        ram[51] = "0b001110101101";
        ram[52] = "0b000000011000";
        ram[53] = "0b000000010110";
        ram[54] = "0b000000111001";
        ram[55] = "0b000011010011";
        ram[56] = "0b000000110010";
        ram[57] = "0b000000100111";
        ram[58] = "0b000000011011";
        ram[59] = "0b000000011111";
        ram[60] = "0b000000011000";
        ram[61] = "0b000011010011";
        ram[62] = "0b000000011111";
        ram[63] = "0b000101101001";


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


SC_MODULE(relu_bn8_a_batchnCce) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn8_a_batchnCce_ram* meminst;


SC_CTOR(relu_bn8_a_batchnCce) {
meminst = new relu_bn8_a_batchnCce_ram("relu_bn8_a_batchnCce_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn8_a_batchnCce() {
    delete meminst;
}


};//endmodule
#endif
