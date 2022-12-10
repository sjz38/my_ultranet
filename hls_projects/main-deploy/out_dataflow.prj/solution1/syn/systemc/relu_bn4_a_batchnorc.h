// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn4_a_batchnorc_H__
#define __relu_bn4_a_batchnorc_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn4_a_batchnorc_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
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


   SC_CTOR(relu_bn4_a_batchnorc_ram) {
        ram[0] = "0b01111111";
        ram[1] = "0b01100001";
        ram[2] = "0b10000010";
        ram[3] = "0b01100101";
        ram[4] = "0b10001011";
        ram[5] = "0b10101100";
        ram[6] = "0b01110111";
        ram[7] = "0b10010001";
        ram[8] = "0b01110111";
        ram[9] = "0b01011011";
        ram[10] = "0b10100100";
        ram[11] = "0b01011000";
        ram[12] = "0b01111000";
        ram[13] = "0b01011000";
        ram[14] = "0b00001011";
        ram[15] = "0b01010010";
        ram[16] = "0b10010100";
        ram[17] = "0b00111100";
        ram[18] = "0b10011000";
        ram[19] = "0b10000101";
        ram[20] = "0b01111110";
        ram[21] = "0b10011100";
        ram[22] = "0b01010000";
        ram[23] = "0b01101000";
        ram[24] = "0b01010001";
        ram[25] = "0b01110011";
        ram[26] = "0b01000110";
        ram[27] = "0b10011100";
        ram[28] = "0b01001000";
        ram[29] = "0b01001110";
        ram[30] = "0b10001110";
        ram[31] = "0b01111101";
        ram[32] = "0b10001001";
        ram[33] = "0b10000111";
        ram[34] = "0b10000001";
        ram[35] = "0b10101101";
        ram[36] = "0b01110001";
        ram[37] = "0b01100100";
        ram[38] = "0b10011100";
        ram[39] = "0b01010011";
        ram[40] = "0b01011001";
        ram[41] = "0b01010101";
        ram[42] = "0b01010111";
        ram[43] = "0b11001110";
        ram[44] = "0b01100110";
        ram[45] = "0b10101110";
        ram[46] = "0b01111000";
        ram[47] = "0b01001110";
        ram[48] = "0b01001011";
        ram[49] = "0b10000000";
        ram[50] = "0b01111101";
        ram[51] = "0b00010111";
        ram[52] = "0b10110100";
        ram[53] = "0b01010011";
        ram[54] = "0b01100111";
        ram[55] = "0b01101010";
        ram[56] = "0b01101101";
        ram[57] = "0b10010001";
        ram[58] = "0b10000010";
        ram[59] = "0b10000001";
        ram[60] = "0b01100010";
        ram[61] = "0b01000010";
        ram[62] = "0b10000110";
        ram[63] = "0b01101111";


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


SC_MODULE(relu_bn4_a_batchnorc) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn4_a_batchnorc_ram* meminst;


SC_CTOR(relu_bn4_a_batchnorc) {
meminst = new relu_bn4_a_batchnorc_ram("relu_bn4_a_batchnorc_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn4_a_batchnorc() {
    delete meminst;
}


};//endmodule
#endif
