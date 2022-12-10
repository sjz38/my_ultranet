// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn3_a_batchnkWb_H__
#define __relu_bn3_a_batchnkWb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn3_a_batchnkWb_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 9;
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


   SC_CTOR(relu_bn3_a_batchnkWb_ram) {
        ram[0] = "0b010111011";
        ram[1] = "0b010010101";
        ram[2] = "0b010001000";
        ram[3] = "0b010100011";
        ram[4] = "0b001110111";
        ram[5] = "0b010110011";
        ram[6] = "0b010010011";
        ram[7] = "0b100001011";
        ram[8] = "0b010001010";
        ram[9] = "0b010000011";
        ram[10] = "0b011011111";
        ram[11] = "0b011010101";
        ram[12] = "0b010000000";
        ram[13] = "0b010010110";
        ram[14] = "0b001101110";
        ram[15] = "0b010010011";
        ram[16] = "0b011010010";
        ram[17] = "0b011010000";
        ram[18] = "0b011001001";
        ram[19] = "0b001101110";
        ram[20] = "0b010100010";
        ram[21] = "0b100011001";
        ram[22] = "0b011001001";
        ram[23] = "0b010000111";
        ram[24] = "0b011100010";
        ram[25] = "0b001001110";
        ram[26] = "0b001111101";
        ram[27] = "0b010100111";
        ram[28] = "0b001101011";
        ram[29] = "0b010110100";
        ram[30] = "0b001100000";
        ram[31] = "0b011000110";
        ram[32] = "0b011010111";
        ram[33] = "0b010101000";
        ram[34] = "0b011000100";
        ram[35] = "0b001010111";
        ram[36] = "0b011001100";
        ram[37] = "0b010001000";
        ram[38] = "0b010011000";
        ram[39] = "0b100000101";
        ram[40] = "0b010100100";
        ram[41] = "0b001011110";
        ram[42] = "0b010110000";
        ram[43] = "0b011010011";
        ram[44] = "0b010011101";
        ram[45] = "0b011000000";
        ram[46] = "0b001010010";
        ram[47] = "0b010111011";
        ram[48] = "0b010100000";
        ram[49] = "0b010111010";
        ram[50] = "0b010101011";
        ram[51] = "0b011001001";
        ram[52] = "0b110001100";
        ram[53] = "0b011010010";
        ram[54] = "0b010010100";
        ram[55] = "0b011101110";
        ram[56] = "0b001010110";
        ram[57] = "0b011011100";
        ram[58] = "0b010111000";
        ram[59] = "0b101000111";
        ram[60] = "0b100010011";
        ram[61] = "0b010010001";
        ram[62] = "0b000101101";
        ram[63] = "0b001111001";


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


SC_MODULE(relu_bn3_a_batchnkWb) {


static const unsigned DataWidth = 9;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn3_a_batchnkWb_ram* meminst;


SC_CTOR(relu_bn3_a_batchnkWb) {
meminst = new relu_bn3_a_batchnkWb_ram("relu_bn3_a_batchnkWb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn3_a_batchnkWb() {
    delete meminst;
}


};//endmodule
#endif
