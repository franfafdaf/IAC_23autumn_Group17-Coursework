module F1 #(
    parameter WIDTH_N = 16, 
    parameter WIDTH_D = 7

) (
    input logic clk, 
    input logic rst_tick, 
    input logic rst_fsm, 
    input logic rst_delay, 
    input logic rst_lfsr, 
    input logic en_lfsr, 
    input logic trigger, 
    input logic [WIDTH_N-1:0] N, 
    output logic [7:0] data_out
);

    logic mux1_out;
    logic mux2_out;
    logic mux_out; 
    logic cmd_seq; 
    logic cmd_delay;
    logic [WIDTH_D-1:0] no_delay; 

    lfsr register (
        .clk(clk),
        .rst(rst_lfsr),
        .en(en_lfsr),
        .data_out(no_delay) 
    ); 

    clktick clock_tick(
        .clk(clk), 
        .rst(rst_tick), 
        .en(cmd_seq), 
        .N(N), 
        .tick(mux1_out)
    ); 

    delay reset_delay (
        .clk(clk), 
        .rst(rst_delay),
        .trigger(cmd_delay), 
        .n(no_delay), 
        .time_out(mux2_out)
    ); 

    f1_fsm fsm (
        .clk(clk), 
        .rst(rst_fsm), 
        .trigger(trigger), 
        .en(mux_out), 
        .data_out(data_out), 
        .cmd_seq(cmd_seq), 
        .cmd_delay(cmd_delay)
    ); 

    assign mux_out = cmd_seq ? mux1_out : mux2_out;

endmodule
