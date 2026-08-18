`timescale 1ns/1ps

// 4-bit synchronous counter
module counter (
    input clk,
    input rst,
    output reg [3:0] count
);
    always @(posedge clk) begin
        if (rst)
            count <= 0;
        else
            count <= count + 1;
    end
endmodule
