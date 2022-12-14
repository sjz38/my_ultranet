# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 896
set hasByteEnable 0
set MemName relu_bn7_a_batchnyMd
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 10
set AddrRange 64
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "0010110011" "0010010100" "0001110001" "0010000111" "0001010110" "0010011100" "0000011110" "0001100000" "0100100000" "0011100011" "0010011011" "0001011001" "0010010011" "0010101111" "0010101110" "0010001000" "0010001010" "0010100011" "0001111100" "0001010110" "0001110011" "0101011100" "0001110111" "0001011111" "0001011011" "0001111110" "0101100010" "0001100000" "0001110111" "0101101010" "0001101000" "0001101011" "0101100001" "0001110101" "0111101011" "0010110100" "0001110111" "0011111000" "0010110011" "0010111011" "0010000111" "0010000001" "0010100011" "0011101100" "0010010110" "0001010011" "0001101000" "0100101010" "0001101000" "1001101100" "0001111111" "0010000101" "0010111011" "0101011110" "1000110110" "0011000101" "0001101101" "0011000000" "0010001000" "0010100001" "0001100011" "0001111001" "0001100110" "0101111110" }
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
set ID 897
set hasByteEnable 0
set MemName relu_bn7_b_batchnyNd
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 21
set AddrRange 64
set AddrWd 6
set TrueReset 0
set IsROM 1
set ROMData { "111000010010100100101" "000010000101010011100" "000011001001011101000" "000001101011100000000" "000001101111011101101" "111110010001100110110" "111111100010001101011" "000101110101100101000" "001011111110100000110" "000000001010110011100" "000010110001011011100" "000001010110110001110" "001101110111011111011" "000111000011111010100" "111001110111010000110" "111111101111000100001" "111010101101110001000" "000100110100111101001" "000011101110011001011" "000001101001010001011" "111110111010100010000" "010000000010101000001" "000011000001010001010" "000100000010110111011" "000110010101011011010" "000010100000011000010" "001101010111001000100" "000110101111111010010" "111111111110100001100" "011101111011010100100" "000011010010010000011" "111111100101010000000" "111011001000000010011" "111111111001000011110" "001100110101000001101" "111011011000111001111" "000101011011111001101" "001101100001100101111" "000000101111000010011" "111111011010000100111" "000111101111001111110" "000011001100010101000" "111001001010011100100" "001010111100011010100" "111110010100110000010" "000011111101110010110" "111111011100010010011" "000000010111001101011" "000011110011000001101" "001111101110101001000" "000001001101001001101" "111111001000111110010" "001001000110100011110" "001000111001101000000" "011011011100011001000" "111010110100011011000" "000010010000001110001" "001000011110011101010" "111010011111010010010" "000101010111101001010" "000011110100010001010" "111011110111010010011" "000011100000001101100" "010010011100000110100" }
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
    id 898 \
    name conv7_pipe_13_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_conv7_pipe_13_V_V \
    op interface \
    ports { conv7_pipe_13_V_V_dout { I 16 vector } conv7_pipe_13_V_V_empty_n { I 1 bit } conv7_pipe_13_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 899 \
    name relu7_pipe_14_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_relu7_pipe_14_V_V \
    op interface \
    ports { relu7_pipe_14_V_V_din { O 5 vector } relu7_pipe_14_V_V_full_n { I 1 bit } relu7_pipe_14_V_V_write { O 1 bit } } \
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
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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


