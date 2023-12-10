module cache #(
    parameter Data_Width = 32,
    parameter Address_Width = 32,
    parameter Set_Width = 1,

) (
    input logic clk, 
    input logic [Address_Width-1:0] address_i,
    input logic [Data_Width-1:0] data_i,
    input logic [Data_Width-1:0] Mem_to_Cache,
    output logic [Address_Width-1:0] address_o,
    output logic [Data_Width-1:0] data_o,
    output logic [Data_Width-1:0] Cache_to_Mem
)


    logic Hit; 
    logic [1:0] BlockOffset; 
    logic Set; 
    logic [26:0] TagAddr;
    logic [26:0] Tag; 
    logic Valid1; 
    logic Valid0;


    Assign TagAddr = address_i[31:5]; 
    Assign Set = address_i[4];
    Assign BlockOffset = address_i[3:2];
    // cache memory



    // hit logic

    Assign Hit = (Hit0 || Hit1);

    // Load logic 
    always_ff @(posedge clk) begin
        logic Hit0; 
        logic Hit1;

    end


    // update logic

endmodule 