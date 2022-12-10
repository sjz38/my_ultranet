// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn2_b_batchnevR_H__
#define __relu_bn2_b_batchnevR_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn2_b_batchnevR_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 20;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(relu_bn2_b_batchnevR_ram) {
        ram[0] = "0b11001111100011011101";
        ram[1] = "0b11111110111010111000";
        ram[2] = "0b11111100111101111011";
        ram[3] = "0b11111111110001010001";
        ram[4] = "0b00000011000010111110";
        ram[5] = "0b00101111110111010101";
        ram[6] = "0b01000001111111011100";
        ram[7] = "0b10110111011010010010";
        ram[8] = "0b00010001111000111001";
        ram[9] = "0b11111110010110010110";
        ram[10] = "0b00110101100101111101";
        ram[11] = "0b11111010001001100101";
        ram[12] = "0b01001101011010000101";
        ram[13] = "0b00001001010110101001";
        ram[14] = "0b00001101100110010100";
        ram[15] = "0b11100111110001000110";
        ram[16] = "0b11010000110100101001";
        ram[17] = "0b11010100101101000100";
        ram[18] = "0b11100110110011001010";
        ram[19] = "0b11011111100000111000";
        ram[20] = "0b11110010000011001010";
        ram[21] = "0b01100100100000100011";
        ram[22] = "0b11011010100001111010";
        ram[23] = "0b11101001101010111001";
        ram[24] = "0b11110010011000100110";
        ram[25] = "0b11111100011001011100";
        ram[26] = "0b11111101110000100100";
        ram[27] = "0b11110000011100111100";
        ram[28] = "0b10011111110110001110";
        ram[29] = "0b11110110110101001011";
        ram[30] = "0b11101111100011001101";
        ram[31] = "0b11111010111001011101";


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


SC_MODULE(relu_bn2_b_batchnevR) {


static const unsigned DataWidth = 20;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn2_b_batchnevR_ram* meminst;


SC_CTOR(relu_bn2_b_batchnevR) {
meminst = new relu_bn2_b_batchnevR_ram("relu_bn2_b_batchnevR_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn2_b_batchnevR() {
    delete meminst;
}


};//endmodule
#endif
