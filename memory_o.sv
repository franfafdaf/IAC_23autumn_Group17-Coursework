module memory_o #(
    parameter DATA_WIDTH = 32       
)(
    input  logic                         LdSrc,    //0: word, 1: byte
    input  logic    [DATA_WIDTH-1:0]     RD_i,     //Data memory read data
    output logic    [DATA_WIDTH-1:0]     RD_o      //Corrected Data output 
);

always_comb begin
    if (LdSrc) RD_o = {{24{1'b0}}, RD_i[7:0]}; //LBU
    else RD_o = RD_i;//LW
end

endmodule
