# This script segment is generated automatically by AutoPilot

set id 922
set name test_mac_muladd_1Cee
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 12
set in0_signed 1
set in1_width 16
set in1_signed 1
set in2_width 22
set in2_signed 1
set out_width 26
set exp i0*i1+i2
set arg_lists {i0 {12 1 +} i1 {16 1 +} m {26 1 +} i2 {22 1 +} p {26 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 924
set hasByteEnable 0
set MemName relu_bn8_a_batchnCce
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 12
set AddrRange 64
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "000001101111" "111011000111" "000000010011" "000111011110" "000000011100" "000001111000" "001011010000" "000000111010" "000110111111" "000000100011" "000011100110" "000000100110" "000010111111" "001001100110" "001000100011" "000000010111" "000010000110" "001000000010" "000000011101" "000000011011" "000001011101" "000011000110" "000000101000" "000000100001" "001010010101" "110011011011" "000010111100" "000000011011" "000001000011" "010000010111" "001010111001" "000000010101" "001000011001" "000000100110" "000101011000" "000000101001" "000000011000" "000100010110" "000000100101" "000001111101" "000110100010" "000000010100" "000000100011" "000001001100" "000110100101" "000000101101" "001010100111" "000000100111" "000000011111" "000101111001" "000000011000" "001110101101" "000000011000" "000000010110" "000000111001" "000011010011" "000000110010" "000000100111" "000000011011" "000000011111" "000000011000" "000011010011" "000000011111" "000101101001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.352
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 925
set hasByteEnable 0
set MemName relu_bn8_b_batchnCde
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 22
set AddrRange 64
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "0000110111011011010011" "1101011110110110011110" "0000000000110111011111" "0010111000011000000011" "0000001010011000100001" "0000101110110100111100" "0011111111000011001101" "0000001101111011010111" "1101111100000011110110" "0000001100111001100101" "1101011011100101011011" "1111110010011100111001" "1111101101010111111110" "0000000001011011001110" "1111000001111001011111" "0000000110100000100100" "0000110001000000010010" "0110000001110101000011" "0000011001100110100011" "0000001100100110001010" "0001000000111110010010" "0010110100010111110010" "0000010100100100000011" "0000010011011010001001" "0111111100100111011110" "1101010010111101010101" "1111110101011001101100" "0000001110110110110110" "0000010111001011110101" "0101011011100001001110" "0100010100111101011111" "0000001000010110100011" "0110110111001110101110" "0000100100111100100001" "0001100110000001101011" "0000101010110010001000" "0000001000011100011010" "0010100000010001000100" "0000010001011110110110" "1111010111001110110001" "0001100000001001000110" "1111110011110000010100" "1111110111101010111011" "1110011010110100111111" "1100000100111111111001" "0000110010110100001001" "1111001001001101110100" "0000001011001000100101" "0000011111011000101011" "0001001001001001011100" "0000010011110100111011" "0101100100101010111101" "0000000100001010001101" "0000010101001111000011" "0000000010111000001000" "1101100001110100001100" "0000011100100001001101" "0000100000111010001001" "0000000001111010110010" "0000010011001001010100" "0000011011110000110100" "0001111001011101011110" "0000010001010101010100" "0001110111000111111111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.352
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 926 \
    name conv8_pipe_15_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv8_pipe_15_V_V \
    op interface \
    ports { conv8_pipe_15_V_V_dout { I 16 vector } conv8_pipe_15_V_V_empty_n { I 1 bit } conv8_pipe_15_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 927 \
    name result \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_result \
    op interface \
    ports { m_axi_result_AWVALID { O 1 bit } m_axi_result_AWREADY { I 1 bit } m_axi_result_AWADDR { O 32 vector } m_axi_result_AWID { O 1 vector } m_axi_result_AWLEN { O 32 vector } m_axi_result_AWSIZE { O 3 vector } m_axi_result_AWBURST { O 2 vector } m_axi_result_AWLOCK { O 2 vector } m_axi_result_AWCACHE { O 4 vector } m_axi_result_AWPROT { O 3 vector } m_axi_result_AWQOS { O 4 vector } m_axi_result_AWREGION { O 4 vector } m_axi_result_AWUSER { O 1 vector } m_axi_result_WVALID { O 1 bit } m_axi_result_WREADY { I 1 bit } m_axi_result_WDATA { O 32 vector } m_axi_result_WSTRB { O 4 vector } m_axi_result_WLAST { O 1 bit } m_axi_result_WID { O 1 vector } m_axi_result_WUSER { O 1 vector } m_axi_result_ARVALID { O 1 bit } m_axi_result_ARREADY { I 1 bit } m_axi_result_ARADDR { O 32 vector } m_axi_result_ARID { O 1 vector } m_axi_result_ARLEN { O 32 vector } m_axi_result_ARSIZE { O 3 vector } m_axi_result_ARBURST { O 2 vector } m_axi_result_ARLOCK { O 2 vector } m_axi_result_ARCACHE { O 4 vector } m_axi_result_ARPROT { O 3 vector } m_axi_result_ARQOS { O 4 vector } m_axi_result_ARREGION { O 4 vector } m_axi_result_ARUSER { O 1 vector } m_axi_result_RVALID { I 1 bit } m_axi_result_RREADY { O 1 bit } m_axi_result_RDATA { I 32 vector } m_axi_result_RLAST { I 1 bit } m_axi_result_RID { I 1 vector } m_axi_result_RUSER { I 1 vector } m_axi_result_RRESP { I 2 vector } m_axi_result_BVALID { I 1 bit } m_axi_result_BREADY { O 1 bit } m_axi_result_BRESP { I 2 vector } m_axi_result_BID { I 1 vector } m_axi_result_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 928 \
    name result_offset \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_result_offset \
    op interface \
    ports { result_offset_dout { I 32 vector } result_offset_empty_n { I 1 bit } result_offset_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


