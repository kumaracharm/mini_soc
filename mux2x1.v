`timescale 1ns/1ps

// 2-bit 2:1 MUX
module mux2x1 (
    input [1:0] in0,
    input [1:0] in1,
    input sel,
    output [1:0] out
);
    assign out = sel ? in1 : in0;
endmodule
