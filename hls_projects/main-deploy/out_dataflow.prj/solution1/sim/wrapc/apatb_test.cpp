// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "gmem"
#define AUTOTB_TVIN_gmem  "../tv/cdatafile/c.test.autotvin_gmem.dat"
#define AUTOTB_TVOUT_gmem  "../tv/cdatafile/c.test.autotvout_gmem.dat"
// wrapc file define: "input_image"
#define AUTOTB_TVIN_input_image  "../tv/cdatafile/c.test.autotvin_input_image.dat"
// wrapc file define: "result"
#define AUTOTB_TVIN_result  "../tv/cdatafile/c.test.autotvin_result.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "gmem"
#define AUTOTB_TVOUT_PC_gmem  "../tv/rtldatafile/rtl.test.autotvout_gmem.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			gmem_depth = 0;
			input_image_depth = 0;
			result_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{gmem " << gmem_depth << "}\n";
			total_list << "{input_image " << input_image_depth << "}\n";
			total_list << "{result " << result_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int gmem_depth;
		int input_image_depth;
		int result_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void test (
float input_image[1][160][320][3],
float result[1][10][20][64]);

void AESL_WRAP_test (
float input_image[1][160][320][3],
float result[1][10][20][64])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "gmem"
		aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // data

			sc_bv<32> *gmem_pc_buffer = new sc_bv<32>[166400];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'gmem', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'gmem', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					gmem_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_gmem, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_gmem))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: gmem
				{
					// bitslice(31, 0)
					// {
						// celement: input_image(31, 0)
						// {
							sc_lv<32>* input_image_lv0_0_0_1_lv1_0_159_1_lv2_0_319_1_lv3_0_2_1 = new sc_lv<32>[166400];
						// }
						// celement: result(31, 0)
						// {
							sc_lv<32>* result_lv0_0_0_1_lv1_0_9_1_lv2_0_19_1_lv3_0_63_1 = new sc_lv<32>[166400];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: input_image(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// carray: (0) => (159) @ (1)
								for (int i_1 = 0; i_1 <= 159; i_1 += 1)
								{
									// carray: (0) => (319) @ (1)
									for (int i_2 = 0; i_2 <= 319; i_2 += 1)
									{
										// carray: (0) => (2) @ (1)
										for (int i_3 = 0; i_3 <= 2; i_3 += 1)
										{
											hls_map_index++;
										}
									}
								}
							}
						}
						// celement: result(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// carray: (0) => (9) @ (1)
								for (int i_1 = 0; i_1 <= 9; i_1 += 1)
								{
									// carray: (0) => (19) @ (1)
									for (int i_2 = 0; i_2 <= 19; i_2 += 1)
									{
										// carray: (0) => (63) @ (1)
										for (int i_3 = 0; i_3 <= 63; i_3 += 1)
										{
											if (&(result[0][0][0][0]) != NULL) // check the null address if the c port is array or others
											{
												result_lv0_0_0_1_lv1_0_9_1_lv2_0_19_1_lv3_0_63_1[hls_map_index].range(31, 0) = sc_bv<32>(gmem_pc_buffer[hls_map_index].range(31, 0));
												hls_map_index++;
											}
										}
									}
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: input_image(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// carray: (0) => (159) @ (1)
								for (int i_1 = 0; i_1 <= 159; i_1 += 1)
								{
									// carray: (0) => (319) @ (1)
									for (int i_2 = 0; i_2 <= 319; i_2 += 1)
									{
										// carray: (0) => (2) @ (1)
										for (int i_3 = 0; i_3 <= 2; i_3 += 1)
										{
											// sub                    : i_0 i_1 i_2 i_3
											// ori_name               : input_image[i_0][i_1][i_2][i_3]
											// sub_1st_elem           : 0 0 0 0
											// ori_name_1st_elem      : input_image[0][0][0][0]
											// output_left_conversion : *(int*)&input_image[i_0][i_1][i_2][i_3]
											// output_type_conversion : (input_image_lv0_0_0_1_lv1_0_159_1_lv2_0_319_1_lv3_0_2_1[hls_map_index]).to_uint64()
											hls_map_index++;
										}
									}
								}
							}
						}
						// celement: result(31, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// carray: (0) => (9) @ (1)
								for (int i_1 = 0; i_1 <= 9; i_1 += 1)
								{
									// carray: (0) => (19) @ (1)
									for (int i_2 = 0; i_2 <= 19; i_2 += 1)
									{
										// carray: (0) => (63) @ (1)
										for (int i_3 = 0; i_3 <= 63; i_3 += 1)
										{
											// sub                    : i_0 i_1 i_2 i_3
											// ori_name               : result[i_0][i_1][i_2][i_3]
											// sub_1st_elem           : 0 0 0 0
											// ori_name_1st_elem      : result[0][0][0][0]
											// output_left_conversion : *(int*)&result[i_0][i_1][i_2][i_3]
											// output_type_conversion : (result_lv0_0_0_1_lv1_0_9_1_lv2_0_19_1_lv3_0_63_1[hls_map_index]).to_uint64()
											if (&(result[0][0][0][0]) != NULL) // check the null address if the c port is array or others
											{
												*(int*)&result[i_0][i_1][i_2][i_3] = (result_lv0_0_0_1_lv1_0_9_1_lv2_0_19_1_lv3_0_63_1[hls_map_index]).to_uint64();
												hls_map_index++;
											}
										}
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] gmem_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "gmem"
		char* tvin_gmem = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_gmem);
		char* tvout_gmem = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_gmem);

		// "input_image"
		char* tvin_input_image = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_image);

		// "result"
		char* tvin_result = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_result);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_gmem, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);

		sc_bv<32>* gmem_tvin_wrapc_buffer = new sc_bv<32>[166400];

		// RTL Name: gmem
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: input_image(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// carray: (0) => (159) @ (1)
						for (int i_1 = 0; i_1 <= 159; i_1 += 1)
						{
							// carray: (0) => (319) @ (1)
							for (int i_2 = 0; i_2 <= 319; i_2 += 1)
							{
								// carray: (0) => (2) @ (1)
								for (int i_3 = 0; i_3 <= 2; i_3 += 1)
								{
									// sub                   : i_0 i_1 i_2 i_3
									// ori_name              : input_image[i_0][i_1][i_2][i_3]
									// sub_1st_elem          : 0 0 0 0
									// ori_name_1st_elem     : input_image[0][0][0][0]
									// regulate_c_name       : input_image
									// input_type_conversion : *(int*)&input_image[i_0][i_1][i_2][i_3]
									if (&(input_image[0][0][0][0]) != NULL) // check the null address if the c port is array or others
									{
										sc_lv<32> input_image_tmp_mem;
										input_image_tmp_mem = *(int*)&input_image[i_0][i_1][i_2][i_3];
										gmem_tvin_wrapc_buffer[hls_map_index].range(31, 0) = input_image_tmp_mem.range(31, 0);
                                 				       hls_map_index++;
									}
								}
							}
						}
					}
				}
				// celement: result(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// carray: (0) => (19) @ (1)
							for (int i_2 = 0; i_2 <= 19; i_2 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_3 = 0; i_3 <= 63; i_3 += 1)
								{
									// sub                   : i_0 i_1 i_2 i_3
									// ori_name              : result[i_0][i_1][i_2][i_3]
									// sub_1st_elem          : 0 0 0 0
									// ori_name_1st_elem     : result[0][0][0][0]
									// regulate_c_name       : result
									// input_type_conversion : *(int*)&result[i_0][i_1][i_2][i_3]
									if (&(result[0][0][0][0]) != NULL) // check the null address if the c port is array or others
									{
										sc_lv<32> result_tmp_mem;
										result_tmp_mem = *(int*)&result[i_0][i_1][i_2][i_3];
										gmem_tvin_wrapc_buffer[hls_map_index].range(31, 0) = result_tmp_mem.range(31, 0);
                                 				       hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 166400; i++)
		{
			sprintf(tvin_gmem, "%s\n", (gmem_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);
		}

		tcl_file.set_num(166400, &tcl_file.gmem_depth);
		sprintf(tvin_gmem, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_gmem, tvin_gmem);

		// release memory allocation
		delete [] gmem_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_input_image, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_image, tvin_input_image);

		sc_bv<32> input_image_tvin_wrapc_buffer;

		// RTL Name: input_image
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_input_image, "%s\n", (input_image_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_image, tvin_input_image);
		}

		tcl_file.set_num(1, &tcl_file.input_image_depth);
		sprintf(tvin_input_image, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_image, tvin_input_image);

		// [[transaction]]
		sprintf(tvin_result, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_result, tvin_result);

		sc_bv<32> result_tvin_wrapc_buffer;

		// RTL Name: result
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_result, "%s\n", (result_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_result, tvin_result);
		}

		tcl_file.set_num(1, &tcl_file.result_depth);
		sprintf(tvin_result, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_result, tvin_result);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		test(input_image, result);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_gmem, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);

		sc_bv<32>* gmem_tvout_wrapc_buffer = new sc_bv<32>[166400];

		// RTL Name: gmem
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: input_image(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// carray: (0) => (159) @ (1)
						for (int i_1 = 0; i_1 <= 159; i_1 += 1)
						{
							// carray: (0) => (319) @ (1)
							for (int i_2 = 0; i_2 <= 319; i_2 += 1)
							{
								// carray: (0) => (2) @ (1)
								for (int i_3 = 0; i_3 <= 2; i_3 += 1)
								{
									// sub                   : i_0 i_1 i_2 i_3
									// ori_name              : input_image[i_0][i_1][i_2][i_3]
									// sub_1st_elem          : 0 0 0 0
									// ori_name_1st_elem     : input_image[0][0][0][0]
									// regulate_c_name       : input_image
									// input_type_conversion : *(int*)&input_image[i_0][i_1][i_2][i_3]
									if (&(input_image[0][0][0][0]) != NULL) // check the null address if the c port is array or others
									{
										sc_lv<32> input_image_tmp_mem;
										input_image_tmp_mem = *(int*)&input_image[i_0][i_1][i_2][i_3];
										gmem_tvout_wrapc_buffer[hls_map_index].range(31, 0) = input_image_tmp_mem.range(31, 0);
                                 				       hls_map_index++;
									}
								}
							}
						}
					}
				}
				// celement: result(31, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// carray: (0) => (9) @ (1)
						for (int i_1 = 0; i_1 <= 9; i_1 += 1)
						{
							// carray: (0) => (19) @ (1)
							for (int i_2 = 0; i_2 <= 19; i_2 += 1)
							{
								// carray: (0) => (63) @ (1)
								for (int i_3 = 0; i_3 <= 63; i_3 += 1)
								{
									// sub                   : i_0 i_1 i_2 i_3
									// ori_name              : result[i_0][i_1][i_2][i_3]
									// sub_1st_elem          : 0 0 0 0
									// ori_name_1st_elem     : result[0][0][0][0]
									// regulate_c_name       : result
									// input_type_conversion : *(int*)&result[i_0][i_1][i_2][i_3]
									if (&(result[0][0][0][0]) != NULL) // check the null address if the c port is array or others
									{
										sc_lv<32> result_tmp_mem;
										result_tmp_mem = *(int*)&result[i_0][i_1][i_2][i_3];
										gmem_tvout_wrapc_buffer[hls_map_index].range(31, 0) = result_tmp_mem.range(31, 0);
                                 				       hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 166400; i++)
		{
			sprintf(tvout_gmem, "%s\n", (gmem_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);
		}

		tcl_file.set_num(166400, &tcl_file.gmem_depth);
		sprintf(tvout_gmem, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_gmem, tvout_gmem);

		// release memory allocation
		delete [] gmem_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "gmem"
		delete [] tvin_gmem;
		delete [] tvout_gmem;
		// release memory allocation: "input_image"
		delete [] tvin_input_image;
		// release memory allocation: "result"
		delete [] tvin_result;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

