#=============================================================================
# run_base.tcl 
#=============================================================================
# @brief: A Tcl script for synthesizing the design.

# Project name
set hls_prj out.prj

# Open/reset the project
open_project ${hls_prj} -reset

# Top function of the design is "top"
set_top test

# Add design and testbench files
add_files kernel.cpp
add_files -tb host.cpp -cflags "-std=gnu++0x"

open_solution "solution1"
# Use Zynq device
# set_part {xc7z020clg484-1}
# Use U280
set_part {xcu280-fsvh2892-2L-e}

# Target clock period is 4ns
create_clock -period 4

# Directives 

############################################

# Simulate the C++ design
csim_design -O
# Synthesize the design
# csynth_design
# Co-simulate the design
#cosim_design
# Implement the design
#export_design -flow impl

exit
