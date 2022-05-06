set_property SRC_FILE_INFO {cfile:d:/WorkSpace/Git_Project/RISC-V_CPU/vivado/test1/src/ip/clk_wiz_0/clk_wiz_0.xdc rfile:../../../../src/ip/clk_wiz_0/clk_wiz_0.xdc id:1 order:EARLY scoped_inst:inst} [current_design]
current_instance inst
set_property src_info {type:SCOPED_XDC file:1 line:57 export:INPUT save:INPUT read:READ} [current_design]
set_input_jitter [get_clocks -of_objects [get_ports sys_clk]] 0.1
