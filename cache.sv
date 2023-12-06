module cache #( // 4-way, 8 set, block size 4 bytes
    Data_Width =32, 
    Set_Width = 3,
    BlockOffset = 2,
    ByteOffset = 2,
    Tag_Width = 2
) (
    input logic                             clk,
    input logic [Data_Width-1:0]            data_in,    
    input logic [Data_Width-1:0]            address,  
    input logic                             we,                  

    output logic [Data_Width-1:0]           data_out,   
);
    logic                   valid; //size?
    logic                   hit;
    logic                   dirty;
    logic                   used;
    logic [Set_Width-1:0]   set;
    logic [Tag_Width-1:0]   tag;


    logic [(Data_Width*4+Tag_Width+2):0] cacheMem  [2**5-1 : 0];  //V,U,D,Tag,4*Data

    assign tag = address[Data_Width-1:Data_Width-Tag_Width];
    assign set = address[(Data_Width-Tag_Width-1): (Data_Width-Tag_Width-1-Set_Width)];

endmodule