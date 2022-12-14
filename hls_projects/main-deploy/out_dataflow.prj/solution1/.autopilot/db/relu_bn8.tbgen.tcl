set moduleName relu_bn8
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
set C_modelName {relu_bn8}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv8_pipe_15_V_V int 16 regular {fifo 0 volatile }  }
	{ result float 32 regular {axi_master 1}  }
	{ result_offset int 32 regular {fifo 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv8_pipe_15_V_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "result", "interface" : "axi_master", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "result_offset", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 58
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ conv8_pipe_15_V_V_dout sc_in sc_lv 16 signal 0 } 
	{ conv8_pipe_15_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ conv8_pipe_15_V_V_read sc_out sc_logic 1 signal 0 } 
	{ m_axi_result_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_result_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_result_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_result_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_result_AWLEN sc_out sc_lv 32 signal 1 } 
	{ m_axi_result_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_result_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_result_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_result_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_result_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_result_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_result_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_result_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_result_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_result_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_result_WDATA sc_out sc_lv 32 signal 1 } 
	{ m_axi_result_WSTRB sc_out sc_lv 4 signal 1 } 
	{ m_axi_result_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_result_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_result_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_result_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_result_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_result_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_result_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_result_ARLEN sc_out sc_lv 32 signal 1 } 
	{ m_axi_result_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_result_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_result_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_result_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_result_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_result_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_result_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_result_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_result_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_result_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_result_RDATA sc_in sc_lv 32 signal 1 } 
	{ m_axi_result_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_result_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_result_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_result_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_result_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_result_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_result_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_result_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_result_BUSER sc_in sc_lv 1 signal 1 } 
	{ result_offset_dout sc_in sc_lv 32 signal 2 } 
	{ result_offset_empty_n sc_in sc_logic 1 signal 2 } 
	{ result_offset_read sc_out sc_logic 1 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "conv8_pipe_15_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv8_pipe_15_V_V", "role": "dout" }} , 
 	{ "name": "conv8_pipe_15_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv8_pipe_15_V_V", "role": "empty_n" }} , 
 	{ "name": "conv8_pipe_15_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv8_pipe_15_V_V", "role": "read" }} , 
 	{ "name": "m_axi_result_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "AWVALID" }} , 
 	{ "name": "m_axi_result_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "AWREADY" }} , 
 	{ "name": "m_axi_result_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "result", "role": "AWADDR" }} , 
 	{ "name": "m_axi_result_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "AWID" }} , 
 	{ "name": "m_axi_result_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "result", "role": "AWLEN" }} , 
 	{ "name": "m_axi_result_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "result", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_result_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "result", "role": "AWBURST" }} , 
 	{ "name": "m_axi_result_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "result", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_result_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "result", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_result_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "result", "role": "AWPROT" }} , 
 	{ "name": "m_axi_result_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "result", "role": "AWQOS" }} , 
 	{ "name": "m_axi_result_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "result", "role": "AWREGION" }} , 
 	{ "name": "m_axi_result_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "AWUSER" }} , 
 	{ "name": "m_axi_result_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "WVALID" }} , 
 	{ "name": "m_axi_result_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "WREADY" }} , 
 	{ "name": "m_axi_result_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "result", "role": "WDATA" }} , 
 	{ "name": "m_axi_result_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "result", "role": "WSTRB" }} , 
 	{ "name": "m_axi_result_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "WLAST" }} , 
 	{ "name": "m_axi_result_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "WID" }} , 
 	{ "name": "m_axi_result_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "WUSER" }} , 
 	{ "name": "m_axi_result_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "ARVALID" }} , 
 	{ "name": "m_axi_result_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "ARREADY" }} , 
 	{ "name": "m_axi_result_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "result", "role": "ARADDR" }} , 
 	{ "name": "m_axi_result_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "ARID" }} , 
 	{ "name": "m_axi_result_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "result", "role": "ARLEN" }} , 
 	{ "name": "m_axi_result_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "result", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_result_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "result", "role": "ARBURST" }} , 
 	{ "name": "m_axi_result_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "result", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_result_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "result", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_result_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "result", "role": "ARPROT" }} , 
 	{ "name": "m_axi_result_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "result", "role": "ARQOS" }} , 
 	{ "name": "m_axi_result_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "result", "role": "ARREGION" }} , 
 	{ "name": "m_axi_result_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "ARUSER" }} , 
 	{ "name": "m_axi_result_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "RVALID" }} , 
 	{ "name": "m_axi_result_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "RREADY" }} , 
 	{ "name": "m_axi_result_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "result", "role": "RDATA" }} , 
 	{ "name": "m_axi_result_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "RLAST" }} , 
 	{ "name": "m_axi_result_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "RID" }} , 
 	{ "name": "m_axi_result_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "RUSER" }} , 
 	{ "name": "m_axi_result_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "result", "role": "RRESP" }} , 
 	{ "name": "m_axi_result_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "BVALID" }} , 
 	{ "name": "m_axi_result_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "BREADY" }} , 
 	{ "name": "m_axi_result_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "result", "role": "BRESP" }} , 
 	{ "name": "m_axi_result_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "BID" }} , 
 	{ "name": "m_axi_result_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "result", "role": "BUSER" }} , 
 	{ "name": "result_offset_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "result_offset", "role": "dout" }} , 
 	{ "name": "result_offset_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_offset", "role": "empty_n" }} , 
 	{ "name": "result_offset_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_offset", "role": "read" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "relu_bn8",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "12809", "EstimateLatencyMax" : "12809",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "conv8_pipe_15_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "conv8_pipe_15_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "result", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "result_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "result_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "result_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "result_offset", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "result_offset_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "a_batchnorm8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_batchnorm8_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_batchnorm8_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b_batchnorm8_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.test_mac_muladd_1Cee_U922", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	relu_bn8 {
		conv8_pipe_15_V_V {Type I LastRead 2 FirstWrite -1}
		result {Type O LastRead 5 FirstWrite 4}
		result_offset {Type I LastRead 0 FirstWrite -1}
		a_batchnorm8_V {Type I LastRead -1 FirstWrite -1}
		b_batchnorm8_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "12809", "Max" : "12809"}
	, {"Name" : "Interval", "Min" : "12809", "Max" : "12809"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	conv8_pipe_15_V_V { ap_fifo {  { conv8_pipe_15_V_V_dout fifo_data 0 16 }  { conv8_pipe_15_V_V_empty_n fifo_status 0 1 }  { conv8_pipe_15_V_V_read fifo_update 1 1 } } }
	result { m_axi {  { m_axi_result_AWVALID VALID 1 1 }  { m_axi_result_AWREADY READY 0 1 }  { m_axi_result_AWADDR ADDR 1 32 }  { m_axi_result_AWID ID 1 1 }  { m_axi_result_AWLEN LEN 1 32 }  { m_axi_result_AWSIZE SIZE 1 3 }  { m_axi_result_AWBURST BURST 1 2 }  { m_axi_result_AWLOCK LOCK 1 2 }  { m_axi_result_AWCACHE CACHE 1 4 }  { m_axi_result_AWPROT PROT 1 3 }  { m_axi_result_AWQOS QOS 1 4 }  { m_axi_result_AWREGION REGION 1 4 }  { m_axi_result_AWUSER USER 1 1 }  { m_axi_result_WVALID VALID 1 1 }  { m_axi_result_WREADY READY 0 1 }  { m_axi_result_WDATA DATA 1 32 }  { m_axi_result_WSTRB STRB 1 4 }  { m_axi_result_WLAST LAST 1 1 }  { m_axi_result_WID ID 1 1 }  { m_axi_result_WUSER USER 1 1 }  { m_axi_result_ARVALID VALID 1 1 }  { m_axi_result_ARREADY READY 0 1 }  { m_axi_result_ARADDR ADDR 1 32 }  { m_axi_result_ARID ID 1 1 }  { m_axi_result_ARLEN LEN 1 32 }  { m_axi_result_ARSIZE SIZE 1 3 }  { m_axi_result_ARBURST BURST 1 2 }  { m_axi_result_ARLOCK LOCK 1 2 }  { m_axi_result_ARCACHE CACHE 1 4 }  { m_axi_result_ARPROT PROT 1 3 }  { m_axi_result_ARQOS QOS 1 4 }  { m_axi_result_ARREGION REGION 1 4 }  { m_axi_result_ARUSER USER 1 1 }  { m_axi_result_RVALID VALID 0 1 }  { m_axi_result_RREADY READY 1 1 }  { m_axi_result_RDATA DATA 0 32 }  { m_axi_result_RLAST LAST 0 1 }  { m_axi_result_RID ID 0 1 }  { m_axi_result_RUSER USER 0 1 }  { m_axi_result_RRESP RESP 0 2 }  { m_axi_result_BVALID VALID 0 1 }  { m_axi_result_BREADY READY 1 1 }  { m_axi_result_BRESP RESP 0 2 }  { m_axi_result_BID ID 0 1 }  { m_axi_result_BUSER USER 0 1 } } }
	result_offset { ap_fifo {  { result_offset_dout fifo_data 0 32 }  { result_offset_empty_n fifo_status 0 1 }  { result_offset_read fifo_update 1 1 } } }
}
