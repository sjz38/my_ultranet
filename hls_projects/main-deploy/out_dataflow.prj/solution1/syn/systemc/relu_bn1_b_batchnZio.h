// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __relu_bn1_b_batchnZio_H__
#define __relu_bn1_b_batchnZio_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct relu_bn1_b_batchnZio_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 21;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(relu_bn1_b_batchnZio_ram) {
        ram[0] = "0b000111000011000011100";
        ram[1] = "0b001000011110100000001";
        ram[2] = "0b000001000110100001010";
        ram[3] = "0b000011010010110011100";
        ram[4] = "0b000011010010101010011";
        ram[5] = "0b000010001000001011000";
        ram[6] = "0b101001010100101101111";
        ram[7] = "0b000001000001110100100";
        ram[8] = "0b111011010010110101101";
        ram[9] = "0b111101000001010110001";
        ram[10] = "0b000010001011101100011";
        ram[11] = "0b110100000110001000000";
        ram[12] = "0b000010111010001011010";
        ram[13] = "0b000101011010001011011";
        ram[14] = "0b111000010111011001000";
        ram[15] = "0b111111001001000011100";


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


SC_MODULE(relu_bn1_b_batchnZio) {


static const unsigned DataWidth = 21;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


relu_bn1_b_batchnZio_ram* meminst;


SC_CTOR(relu_bn1_b_batchnZio) {
meminst = new relu_bn1_b_batchnZio_ram("relu_bn1_b_batchnZio_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~relu_bn1_b_batchnZio() {
    delete meminst;
}


};//endmodule
#endif
