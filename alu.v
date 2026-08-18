`timescale 1ns/1ps

// Simple 2-bit ALU with add and subtract
module alu (
    input [1:0] a,
    input [1:0] b,
    input sel, // 0: ADD, 1: SUB
    output reg [1:0] result
);
    always @(*) begin
        case (sel)
            1'b0: result = a + b;
            1'b1: result = a - b;
        endcase
    end
endmodule
