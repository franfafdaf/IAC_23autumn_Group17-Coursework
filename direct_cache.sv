module direct_cache #(
    parameter Tag_Width = 27,
    parameter Set_Width = 3,
    parameter Data_Width = 32
) (
    input logic clk, 
    input logic [Data_Width-1:0] addressIn,
    input logic [Data_Width-1:0] dataIn,
    input logic we,
    input logic StSrcM,
    input logic LdSrcM,
    output logic [Data_Width-1:0] dataOut,
);

    // cache 
    logic valid [2**Set_Width-1:0];
    logic [Tag_Width-1:0] tag [2**Set_Width-1:0];
    logic [Data_Width-1:0] data [2**Set_Width-1:0];
    logic [Data_Width-1:0] selectedData;
    logic hit; 

    // input 
    logic [Tag_Width-1:0] inputTag;
    logic [Set_Width-1:0] inputSet;
    assign inputTag = addressIn[31:5];
    assign inputSet = addressIn[4:2];

    // hit 
    always_comb begin
        hit = 1'b0;
        if ((tag[inputSet] == inputTag) && (valid[inputSet])) begin
            hit = 1'b1;
        end
    end

    // write


endmodule