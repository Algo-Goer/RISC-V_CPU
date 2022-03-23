`include "include/common.sv"

import "DPI-C" function int get_switch();

// import "DPI-C" function void ram_write_helper
// (
//   input  longint    wIdx,
//   input  longint    wdata,
//   input  longint    wmask,
//   input  bit        wen
// );

// import "DPI-C" function longint ram_read_helper
// (
//   input  bit        en,
//   input  longint    rIdx
// );

// latency

`define LATENCY

/* verilator lint_off WIDTH */

module RAMHelper1 import common::*;
(
	input logic clk, reset,
	input ibus_req_t  ireq,
	output  ibus_resp_t iresp,
	input dbus_req_t  dreq,
	output  dbus_resp_t dresp
);
	u64 wmask;
	for (genvar i = 0; i < 8; i++) begin
		assign wmask[i * 8 + 7 -: 8] = {8{dreq.strobe[i]}};
	end
	addr_t iidx, didx;
	assign iidx = ireq.addr > 64'h8000_0000 ? ((ireq.addr - 64'h8000_0000) >> 3) : 0;
	assign didx = dreq.addr > 64'h8000_0000 ? ((dreq.addr - 64'h8000_0000) >> 3) : 0;
	assign iresp.addr_ok = '1;
	assign iresp.data_ok = '1;
	assign dresp.addr_ok = '1;
	assign dresp.data_ok = '1;
	assign iresp.data = ireq.addr[2] ? (ram_read_helper('1, iidx) >> 32) : (ram_read_helper('1, iidx) & 'hffffffff);
	assign dresp.data = ram_read_helper('1, didx);
	always_ff @(posedge clk) begin
		if (ireq.valid && iidx >= 'h10000000) begin
			$display("Memory address %x out of range!", ireq.addr);
			$finish;
		end
		if (dreq.valid && dreq.strobe != 0) begin
			if (didx >= 'h10000000) begin
				$display("Memory address %x out of range!", dreq.addr);
				$finish;
			end
			ram_write_helper(didx, dreq.data, wmask, '1);
		end
	end
endmodule

module RAMHelper2 import common::*;
(
	input logic clk, reset,
	input cbus_req_t  oreq,
	output  cbus_resp_t oresp
);
	
	enum i2 {NONE, WAIT, READ, WRITE} state;
	i8 count_down;
	i4 size;
	addr_t addr, idx, wrap1, wrap2;
	longint cyc_cnt, ms_cnt;
	assign idx = addr > 64'h8000_0000 ? ((addr - 64'h8000_0000) >> 3) : 0;
	u64 wmask;
	for (genvar i = 0; i < 8; i++) begin
		assign wmask[i * 8 + 7 -: 8] = {8{oreq.strobe[i]}};
	end

	always_ff @(posedge clk) begin
		if (~reset) begin
			if (cyc_cnt == 10000) begin
				ms_cnt <= ms_cnt + 1;
				cyc_cnt <= 0;
			end else
				cyc_cnt <= cyc_cnt + 1;
			unique case (state)
			NONE: begin
				if (oreq.valid) begin
					`ifdef LATENCY
					count_down <= ($random() & 127) + 4;
					state <= WAIT;
					`else
					state <= oreq.is_write ? WRITE : READ;
					addr <= oreq.addr;
					count_down <= oreq.len;
					size <= 1 << oreq.size;
					if ((oreq.addr & ((1 << oreq.size) - 1)) != 0) begin
						$display("Memory address misaligned.\n");
						$finish();
					end
					unique case (oreq.burst)
					AXI_BURST_FIXED: begin
						wrap1 <= oreq.addr;
						wrap2 <= oreq.addr + (1 << oreq.size);
					end
					AXI_BURST_WRAP: begin
						wrap1 <= oreq.addr & ~(((64'(oreq.len) + 1) << oreq.size) - 1);
						wrap2 <= (oreq.addr & ~(((64'(oreq.len) + 1) << oreq.size) - 1)) + ((64'(oreq.len) + 1) << oreq.size);
					end
					default: {wrap1, wrap2} <= '0;
					endcase
					`endif
				end
			end
			WAIT: begin
				unique if (count_down == 0) begin
					state <= oreq.is_write ? WRITE : READ;
					addr <= oreq.addr;
					count_down <= oreq.len;
					size <= 1 << oreq.size;
					if ((oreq.addr & ((1 << oreq.size) - 1)) != 0) begin
						$display("Memory address misaligned.\n");
						$finish();
					end
					unique case (oreq.burst)
					AXI_BURST_FIXED: begin
						wrap1 <= oreq.addr;
						wrap2 <= oreq.addr + (1 << oreq.size);
					end
					AXI_BURST_WRAP: begin
						wrap1 <= oreq.addr & ~(((64'(oreq.len) + 1) << oreq.size) - 1);
						wrap2 <= (oreq.addr & ~(((64'(oreq.len) + 1) << oreq.size) - 1)) + ((64'(oreq.len) + 1) << oreq.size);
					end
					default: {wrap1, wrap2} <= '0;
					endcase
				end else
					count_down <= count_down - 1;
			end
			READ: begin
				// $display("\tread: %x %x", addr, oresp.data);
				if (idx >= 'h10000000) begin
					$display("Memory address %x out of range!", addr);
					$finish;
				end
				unique if (oresp.last)
					state <= NONE;
				else begin
					count_down <= count_down - 1;
					addr <= (addr + size == wrap2) ? wrap1 : addr + size;
				end
			end
			WRITE: begin
				// $display("\twrite: %x %x %b", addr, oreq.data, oreq.strobe);
				if (idx >= 'h10000000) begin
					$display("Memory address %x out of range!", addr);
					$finish;
				end
				unique case (addr)
				64'h40600004: if (oreq.strobe[4]) begin
					$fwrite(32'h8000_0001, "%c", oreq.data[39:32]); // stdout
					$fflush(32'h8000_0001);
				end
				64'h23333000: if (oreq.data == 64'h233 && oreq.strobe == '1) $display("Pass!");
				default: if (addr != 64'h4060000c) ram_write_helper(idx, oreq.data, wmask, '1);
				endcase
				unique if (oresp.last)
					state <= NONE;
				else begin
					count_down <= count_down - 1;
					addr <= addr + size;
				end
			end
			endcase
		end else
			{state, count_down, cyc_cnt, ms_cnt, addr, size} <= '0;
	end

	always_comb begin
		oresp = '0;
		unique if (state == READ) begin
			oresp.ready = '1;
			oresp.last = count_down == 0;
			unique case (addr)
			64'h40600008: oresp.data = '0;
			64'h3800bff8: oresp.data = ms_cnt;
			64'h20003000: oresp.data = ms_cnt;
			64'h23333008: oresp.data = {'0, get_switch()}; // switch
			default: oresp.data = ram_read_helper('1, idx);
			endcase
		end else if (state == WRITE) begin
			oresp.ready = '1;
			oresp.last = count_down == 0;
		end else
			oresp = '0;
	end

endmodule