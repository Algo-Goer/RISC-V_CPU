`ifndef __HAZARD_SV
`define __HAZARD_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "include/pipes.sv"
`else

`endif

module hazard
    import common::*;
    import pipes::*;(

    input u1 regwrite,
    input u1 memread,
    input creg_addr_t rs, rt,
    input creg_addr_t dst,
    input forward_data_out forward_execute,
    input forward_data_out forward_memory,
    input forward_data_out forward_writeback,
    input forward_data_out forward_memory_copy,
    input forward_data_out forward_writeback_copy,
    output hazard_data_out hazardOut
);
    // hazard为一个大的组合逻辑

    // 产生阻塞信号
    // 如果当前阶段要访存并且要写回，并且下条指令要用数据
    assign hazardOut.stall = ( 
            regwrite && memread
            && (
                rs == dst 
                ||
                rt == dst
            )
        ) ? 1'b1 : 1'b0;

    // 产生清除信号，与阻塞条件
    assign hazardOut.clear = ( 
            regwrite && memread
            && (
                rs == dst 
                ||
                rt == dst
            )
        ) ? 1'b1 : 1'b0;

    always_comb begin
        // 产生转发srca的信号
        // execute数据转发
        if(
            forward_execute.valid 
            && 
            forward_execute.dst == rs
        ) begin
            hazardOut.srca_mux = 1'b1;
            hazardOut.srca_forward = forward_execute.data;
        end
        // memory数据转发
        else if(
            forward_memory.valid 
            && 
            forward_memory.dst == rs
        ) begin
            hazardOut.srca_mux = 1'b1;
            hazardOut.srca_forward = forward_memory.data;
        end
        // writeback数据转发
        else if(
            forward_writeback.valid 
            && 
            forward_writeback.dst == rs
        ) begin
            hazardOut.srca_mux = 1'b1;
            hazardOut.srca_forward = forward_writeback.data;
        end 
        // memory_copy数据转发
        else if(
            forward_memory_copy.valid 
            && 
            forward_memory_copy.dst == rs
        ) begin
            hazardOut.srca_mux = 1'b1;
            hazardOut.srca_forward = forward_memory_copy.data;
        end
        // writeback_copy数据转发
        else if(
            forward_writeback_copy.valid 
            && 
            forward_writeback_copy.dst == rs
        ) begin
            hazardOut.srca_mux = 1'b1;
            hazardOut.srca_forward = forward_writeback_copy.data;
        end
        else begin
            hazardOut.srca_mux = 1'b0;
        end
    end
    always_comb begin
        // 产生转发srcb的信号
        // execute数据转发
        if(
            forward_execute.valid 
            && 
            forward_execute.dst == rt
        ) begin
            hazardOut.srcb_mux = 1'b1;
            hazardOut.srcb_forward = forward_execute.data;
        end
        // memory数据转发
        else if(
            forward_memory.valid 
            && 
            forward_memory.dst == rt
        ) begin
            hazardOut.srcb_mux = 1'b1;
            hazardOut.srcb_forward = forward_memory.data;
        end
        // writeback数据转发
        else if(
            forward_writeback.valid 
            && 
            forward_writeback.dst == rt
        ) begin
            hazardOut.srcb_mux = 1'b1;
            hazardOut.srcb_forward = forward_writeback.data;
        end
        // memory_copy数据转发
        else if(
            forward_memory_copy.valid 
            && 
            forward_memory_copy.dst == rt
        ) begin
            hazardOut.srcb_mux = 1'b1;
            hazardOut.srcb_forward = forward_memory_copy.data;
        end
        // writeback_copy数据转发
        else if(
            forward_writeback_copy.valid 
            && 
            forward_writeback_copy.dst == rt
        ) begin
            hazardOut.srcb_mux = 1'b1;
            hazardOut.srcb_forward = forward_writeback_copy.data;
        end
        else begin
            hazardOut.srcb_mux = 1'b0;
        end
    end

endmodule

`endif