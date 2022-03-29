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

    input hazard_data_in hazardIn,
    output hazard_data_out hazardOut
);

    hazard_data_out out = '0;
    // hazard为一组合逻辑

    // 产生阻塞信号
    always_comb begin
        // 如果当前阶段要访存并且要写回，并且下条指令要用数据
        if( 
            hazardIn.regwrite && hazardIn.memread
            && (
                hazardIn.rs == hazardIn.dst 
                ||
                hazardIn.rt == hazardIn.dst
            )
        ) begin
            out.stall = 1'b1;
        end
    end

    // 产生清除信号
    always_comb begin
        // 与阻塞条件一致
        if( 
            hazardIn.regwrite && hazardIn.memread
            && (
                hazardIn.rs == hazardIn.dst 
                ||
                hazardIn.rt == hazardIn.dst
            )
        ) begin
            out.clear1 = 1'b1;
        end
        // 跳转信号
        if(hazardIn.jump) begin
            out.clear2 = 1'b1;
        end
    end

    // 产生转发srca的信号
    always_comb begin
        // execute数据转发
        if(
            hazardIn.forward_execute.valid 
            && 
            hazardIn.forward_execute.dst == hazardIn.rs
        ) begin
            out.srca_mux = 1'b1;
            out.srca_forward = hazardIn.forward_execute.data;
        end
        // memory数据转发
        else if(
            hazardIn.forward_memory.valid 
            && 
            hazardIn.forward_memory.dst == hazardIn.rs
        ) begin
            out.srca_mux = 1'b1;
            out.srca_forward = hazardIn.forward_memory.data;
        end
        // writeback数据转发
        else if(
            hazardIn.forward_writeback.valid 
            && 
            hazardIn.forward_writeback.dst == hazardIn.rs
        ) begin
            out.srca_mux = 1'b1;
            out.srca_forward = hazardIn.forward_writeback.data;
        end
    end

    // 产生转发srcb的信号
    always_comb begin
        // execute数据转发
        if(
            hazardIn.forward_execute.valid 
            && 
            hazardIn.forward_execute.dst == hazardIn.rt
        ) begin
            out.srcb_mux = 1'b1;
            out.srcb_forward = hazardIn.forward_execute.data;
        end
        // memory数据转发
        else if(
            hazardIn.forward_memory.valid 
            && 
            hazardIn.forward_memory.dst == hazardIn.rt
        ) begin
            out.srcb_mux = 1'b1;
            out.srcb_forward = hazardIn.forward_memory.data;
        end
        // writeback数据转发
        else if(
            hazardIn.forward_writeback.valid 
            && 
            hazardIn.forward_writeback.dst == hazardIn.rt
        ) begin
            out.srcb_mux = 1'b1;
            out.srcb_forward = hazardIn.forward_writeback.data;
        end
    end
    
endmodule

`endif