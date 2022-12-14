set moduleName conv113
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {conv113}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_image float 32 regular {axi_master 0}  }
	{ input_image_offset int 32 regular  }
	{ conv1_pipe_1_V_V int 16 regular {fifo 1 volatile }  }
	{ result int 32 regular  }
	{ result_out int 32 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_image", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_image_offset", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv1_pipe_1_V_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "result", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "result_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 63
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ m_axi_input_image_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_input_image_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_input_image_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_input_image_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_input_image_AWLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_input_image_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_input_image_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_input_image_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_input_image_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_input_image_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_input_image_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_input_image_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_input_image_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_input_image_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_input_image_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_input_image_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_input_image_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_input_image_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_input_image_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_input_image_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_input_image_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_input_image_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_input_image_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_input_image_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_input_image_ARLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_input_image_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_input_image_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_input_image_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_input_image_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_input_image_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_input_image_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_input_image_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_input_image_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_input_image_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_input_image_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_input_image_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_input_image_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_input_image_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_input_image_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_input_image_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_input_image_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_input_image_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_input_image_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_input_image_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_input_image_BUSER sc_in sc_lv 1 signal 0 } 
	{ input_image_offset sc_in sc_lv 32 signal 1 } 
	{ conv1_pipe_1_V_V_din sc_out sc_lv 16 signal 2 } 
	{ conv1_pipe_1_V_V_full_n sc_in sc_logic 1 signal 2 } 
	{ conv1_pipe_1_V_V_write sc_out sc_logic 1 signal 2 } 
	{ result sc_in sc_lv 32 signal 3 } 
	{ result_out_din sc_out sc_lv 32 signal 4 } 
	{ result_out_full_n sc_in sc_logic 1 signal 4 } 
	{ result_out_write sc_out sc_logic 1 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "m_axi_input_image_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "AWVALID" }} , 
 	{ "name": "m_axi_input_image_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "AWREADY" }} , 
 	{ "name": "m_axi_input_image_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_image", "role": "AWADDR" }} , 
 	{ "name": "m_axi_input_image_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "AWID" }} , 
 	{ "name": "m_axi_input_image_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_image", "role": "AWLEN" }} , 
 	{ "name": "m_axi_input_image_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_image", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_input_image_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "input_image", "role": "AWBURST" }} , 
 	{ "name": "m_axi_input_image_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "input_image", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_input_image_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_image", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_input_image_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_image", "role": "AWPROT" }} , 
 	{ "name": "m_axi_input_image_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_image", "role": "AWQOS" }} , 
 	{ "name": "m_axi_input_image_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_image", "role": "AWREGION" }} , 
 	{ "name": "m_axi_input_image_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "AWUSER" }} , 
 	{ "name": "m_axi_input_image_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "WVALID" }} , 
 	{ "name": "m_axi_input_image_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "WREADY" }} , 
 	{ "name": "m_axi_input_image_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_image", "role": "WDATA" }} , 
 	{ "name": "m_axi_input_image_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_image", "role": "WSTRB" }} , 
 	{ "name": "m_axi_input_image_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "WLAST" }} , 
 	{ "name": "m_axi_input_image_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "WID" }} , 
 	{ "name": "m_axi_input_image_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "WUSER" }} , 
 	{ "name": "m_axi_input_image_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "ARVALID" }} , 
 	{ "name": "m_axi_input_image_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "ARREADY" }} , 
 	{ "name": "m_axi_input_image_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_image", "role": "ARADDR" }} , 
 	{ "name": "m_axi_input_image_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "ARID" }} , 
 	{ "name": "m_axi_input_image_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_image", "role": "ARLEN" }} , 
 	{ "name": "m_axi_input_image_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_image", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_input_image_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "input_image", "role": "ARBURST" }} , 
 	{ "name": "m_axi_input_image_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "input_image", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_input_image_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_image", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_input_image_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_image", "role": "ARPROT" }} , 
 	{ "name": "m_axi_input_image_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_image", "role": "ARQOS" }} , 
 	{ "name": "m_axi_input_image_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_image", "role": "ARREGION" }} , 
 	{ "name": "m_axi_input_image_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "ARUSER" }} , 
 	{ "name": "m_axi_input_image_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "RVALID" }} , 
 	{ "name": "m_axi_input_image_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "RREADY" }} , 
 	{ "name": "m_axi_input_image_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_image", "role": "RDATA" }} , 
 	{ "name": "m_axi_input_image_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "RLAST" }} , 
 	{ "name": "m_axi_input_image_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "RID" }} , 
 	{ "name": "m_axi_input_image_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "RUSER" }} , 
 	{ "name": "m_axi_input_image_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "input_image", "role": "RRESP" }} , 
 	{ "name": "m_axi_input_image_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "BVALID" }} , 
 	{ "name": "m_axi_input_image_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "BREADY" }} , 
 	{ "name": "m_axi_input_image_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "input_image", "role": "BRESP" }} , 
 	{ "name": "m_axi_input_image_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "BID" }} , 
 	{ "name": "m_axi_input_image_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_image", "role": "BUSER" }} , 
 	{ "name": "input_image_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_image_offset", "role": "default" }} , 
 	{ "name": "conv1_pipe_1_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv1_pipe_1_V_V", "role": "din" }} , 
 	{ "name": "conv1_pipe_1_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_pipe_1_V_V", "role": "full_n" }} , 
 	{ "name": "conv1_pipe_1_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_pipe_1_V_V", "role": "write" }} , 
 	{ "name": "result", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "result", "role": "default" }} , 
 	{ "name": "result_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "result_out", "role": "din" }} , 
 	{ "name": "result_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_out", "role": "full_n" }} , 
 	{ "name": "result_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_out", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53"],
		"CDFG" : "conv113",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "267301", "EstimateLatencyMax" : "1727893",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_image", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "input_image_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "input_image_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "input_image_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv1_pipe_1_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "conv1_pipe_1_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "result", "Type" : "None", "Direction" : "I"},
			{"Name" : "result_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "result_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "weight_conv1_V_0_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_0_1_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_0_2_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_1_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_1_1_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_1_2_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_2_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_2_1_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_2_2_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_0_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_0_1_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_0_2_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_1_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_1_1_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_1_2_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_2_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_2_1_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_2_2_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_0_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_0_1_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_0_2_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_1_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_1_1_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_1_2_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_2_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_2_1_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_conv1_V_2_2_2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_0_0_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_0_1_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_0_2_0_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_1_0_0_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_1_1_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_1_2_0_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_2_0_0_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_2_1_0_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_2_2_0_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_0_0_1_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_0_1_1_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_0_2_1_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_1_0_1_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_1_1_1_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_1_2_1_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_2_0_1_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_2_1_1_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_2_2_1_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_0_0_2_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_0_1_2_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_0_2_2_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_1_0_2_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_1_1_2_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_1_2_2_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_2_0_2_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_2_1_2_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_conv1_V_2_2_2_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_line_buffer_0_217_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_line_buffer_0_1_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_line_buffer_0_2_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_line_buffer_1_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_line_buffer_1_1_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_line_buffer_1_2_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_line_buffer_2_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_line_buffer_2_1_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_line_buffer_2_2_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_window_buffer_s_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_window_buffer_1_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_window_buffer_2_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_window_buffer_3_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_window_buffer_4_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_window_buffer_5_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_window_buffer_6_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_window_buffer_7_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_window_buffer_8_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.test_fpext_32ns_6UhA_U1", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.test_srem_10ns_10VhK_U2", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.test_srem_9ns_9nsWhU_U3", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.test_mux_32_8_1_1_U4", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.test_mux_32_8_1_1_U5", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.test_mux_32_8_1_1_U6", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.test_mul_mul_20nsXh4_U7", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.test_mul_mul_20nsXh4_U8", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv113 {
		input_image {Type I LastRead 38 FirstWrite -1}
		input_image_offset {Type I LastRead 0 FirstWrite -1}
		conv1_pipe_1_V_V {Type O LastRead -1 FirstWrite 14}
		result {Type I LastRead 0 FirstWrite -1}
		result_out {Type O LastRead -1 FirstWrite 0}
		weight_conv1_V_0_0_0 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_0_1_0 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_0_2_0 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_1_0_0 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_1_1_0 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_1_2_0 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_2_0_0 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_2_1_0 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_2_2_0 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_0_0_1 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_0_1_1 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_0_2_1 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_1_0_1 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_1_1_1 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_1_2_1 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_2_0_1 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_2_1_1 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_2_2_1 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_0_0_2 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_0_1_2 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_0_2_2 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_1_0_2 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_1_1_2 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_1_2_2 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_2_0_2 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_2_1_2 {Type I LastRead -1 FirstWrite -1}
		weight_conv1_V_2_2_2 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "267301", "Max" : "1727893"}
	, {"Name" : "Interval", "Min" : "267301", "Max" : "1727893"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
]}

set Spec2ImplPortList { 
	input_image { m_axi {  { m_axi_input_image_AWVALID VALID 1 1 }  { m_axi_input_image_AWREADY READY 0 1 }  { m_axi_input_image_AWADDR ADDR 1 32 }  { m_axi_input_image_AWID ID 1 1 }  { m_axi_input_image_AWLEN LEN 1 32 }  { m_axi_input_image_AWSIZE SIZE 1 3 }  { m_axi_input_image_AWBURST BURST 1 2 }  { m_axi_input_image_AWLOCK LOCK 1 2 }  { m_axi_input_image_AWCACHE CACHE 1 4 }  { m_axi_input_image_AWPROT PROT 1 3 }  { m_axi_input_image_AWQOS QOS 1 4 }  { m_axi_input_image_AWREGION REGION 1 4 }  { m_axi_input_image_AWUSER USER 1 1 }  { m_axi_input_image_WVALID VALID 1 1 }  { m_axi_input_image_WREADY READY 0 1 }  { m_axi_input_image_WDATA DATA 1 32 }  { m_axi_input_image_WSTRB STRB 1 4 }  { m_axi_input_image_WLAST LAST 1 1 }  { m_axi_input_image_WID ID 1 1 }  { m_axi_input_image_WUSER USER 1 1 }  { m_axi_input_image_ARVALID VALID 1 1 }  { m_axi_input_image_ARREADY READY 0 1 }  { m_axi_input_image_ARADDR ADDR 1 32 }  { m_axi_input_image_ARID ID 1 1 }  { m_axi_input_image_ARLEN LEN 1 32 }  { m_axi_input_image_ARSIZE SIZE 1 3 }  { m_axi_input_image_ARBURST BURST 1 2 }  { m_axi_input_image_ARLOCK LOCK 1 2 }  { m_axi_input_image_ARCACHE CACHE 1 4 }  { m_axi_input_image_ARPROT PROT 1 3 }  { m_axi_input_image_ARQOS QOS 1 4 }  { m_axi_input_image_ARREGION REGION 1 4 }  { m_axi_input_image_ARUSER USER 1 1 }  { m_axi_input_image_RVALID VALID 0 1 }  { m_axi_input_image_RREADY READY 1 1 }  { m_axi_input_image_RDATA DATA 0 32 }  { m_axi_input_image_RLAST LAST 0 1 }  { m_axi_input_image_RID ID 0 1 }  { m_axi_input_image_RUSER USER 0 1 }  { m_axi_input_image_RRESP RESP 0 2 }  { m_axi_input_image_BVALID VALID 0 1 }  { m_axi_input_image_BREADY READY 1 1 }  { m_axi_input_image_BRESP RESP 0 2 }  { m_axi_input_image_BID ID 0 1 }  { m_axi_input_image_BUSER USER 0 1 } } }
	input_image_offset { ap_none {  { input_image_offset in_data 0 32 } } }
	conv1_pipe_1_V_V { ap_fifo {  { conv1_pipe_1_V_V_din fifo_data 1 16 }  { conv1_pipe_1_V_V_full_n fifo_status 0 1 }  { conv1_pipe_1_V_V_write fifo_update 1 1 } } }
	result { ap_none {  { result in_data 0 32 } } }
	result_out { ap_fifo {  { result_out_din fifo_data 1 32 }  { result_out_full_n fifo_status 0 1 }  { result_out_write fifo_update 1 1 } } }
}
