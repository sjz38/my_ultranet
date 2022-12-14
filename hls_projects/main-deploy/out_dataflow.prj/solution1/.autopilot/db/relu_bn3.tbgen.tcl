set moduleName relu_bn3
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
set C_modelName {relu_bn3}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv3_pipe_5_V_V int 16 regular {fifo 0 volatile }  }
	{ relu3_pipe_6_V_V int 5 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv3_pipe_5_V_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY"} , 
 	{ "Name" : "relu3_pipe_6_V_V", "interface" : "fifo", "bitwidth" : 5, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 16
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
	{ conv3_pipe_5_V_V_dout sc_in sc_lv 16 signal 0 } 
	{ conv3_pipe_5_V_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ conv3_pipe_5_V_V_read sc_out sc_logic 1 signal 0 } 
	{ relu3_pipe_6_V_V_din sc_out sc_lv 5 signal 1 } 
	{ relu3_pipe_6_V_V_full_n sc_in sc_logic 1 signal 1 } 
	{ relu3_pipe_6_V_V_write sc_out sc_logic 1 signal 1 } 
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
 	{ "name": "conv3_pipe_5_V_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "conv3_pipe_5_V_V", "role": "dout" }} , 
 	{ "name": "conv3_pipe_5_V_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv3_pipe_5_V_V", "role": "empty_n" }} , 
 	{ "name": "conv3_pipe_5_V_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv3_pipe_5_V_V", "role": "read" }} , 
 	{ "name": "relu3_pipe_6_V_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "relu3_pipe_6_V_V", "role": "din" }} , 
 	{ "name": "relu3_pipe_6_V_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu3_pipe_6_V_V", "role": "full_n" }} , 
 	{ "name": "relu3_pipe_6_V_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "relu3_pipe_6_V_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "relu_bn3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "204802", "EstimateLatencyMax" : "204802",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "conv3_pipe_5_V_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "conv3_pipe_5_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "relu3_pipe_6_V_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "relu3_pipe_6_V_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "a_batchnorm3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_batchnorm3_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_batchnorm3_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b_batchnorm3_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.test_mac_muladd_1kYb_U769", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	relu_bn3 {
		conv3_pipe_5_V_V {Type I LastRead 2 FirstWrite -1}
		relu3_pipe_6_V_V {Type O LastRead -1 FirstWrite 2}
		a_batchnorm3_V {Type I LastRead -1 FirstWrite -1}
		b_batchnorm3_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "204802", "Max" : "204802"}
	, {"Name" : "Interval", "Min" : "204802", "Max" : "204802"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	conv3_pipe_5_V_V { ap_fifo {  { conv3_pipe_5_V_V_dout fifo_data 0 16 }  { conv3_pipe_5_V_V_empty_n fifo_status 0 1 }  { conv3_pipe_5_V_V_read fifo_update 1 1 } } }
	relu3_pipe_6_V_V { ap_fifo {  { relu3_pipe_6_V_V_din fifo_data 1 5 }  { relu3_pipe_6_V_V_full_n fifo_status 0 1 }  { relu3_pipe_6_V_V_write fifo_update 1 1 } } }
}
