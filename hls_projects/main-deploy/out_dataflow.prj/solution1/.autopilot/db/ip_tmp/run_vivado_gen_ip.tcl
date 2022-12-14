create_project prj -part xczu3eg-sbva484-1-i -force
set_property target_language verilog [current_project]
set vivado_ver [version -short]
set COE_DIR "../../syn/verilog"
source "/work/shared/users/meng/sjz38/tmp/my_ultranet/hls_projects/main-deploy/out_dataflow.prj/solution1/syn/verilog/test_ap_fpext_0_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips test_ap_fpext_0_no_dsp_32]]
}
