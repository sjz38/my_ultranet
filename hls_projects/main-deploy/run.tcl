#=============================================================================
# run_base.tcl 
#=============================================================================
# @brief: A Tcl script for synthesizing the design.

# Project name
set hls_prj out_dataflow_test.prj

# Open/reset the project
open_project ${hls_prj} -reset
# open_project ${hls_prj}

# Top function of the design is "top"
set_top test

# Add design and testbench files
add_files kernel.cpp
add_files -tb host.cpp -cflags "-std=gnu++14"

open_solution "solution1"
# Use Zynq device
set_part {xczu3eg-sbva484-1-i}

# Target clock period is 10ns
create_clock -period 10

# Directives 

############################################

# Synthesize the design
csynth_design

# Co-simulate the design
# cosim_design

# Implement the design
# export_design -rtl verilog -format ip_catalog


exit
