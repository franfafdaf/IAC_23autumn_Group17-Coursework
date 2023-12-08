module dataCache #( // 4-way, 8 set, block size 4 bytes
    parameter Data_Width =32, 
    parameter Set_Width = 3,
    parameter BlockOffset = 2,
    parameter ByteOffset = 2,
    parameter Tag_Width = 2
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

    // cache memory
    logic                   valid[3:0][Data_Width-1:0];
    logic                   dirty[3:0][(2**Set_Width)-1:0];
    logic                   used [3:0][(2**Set_Width)-1:0];
    logic [Tag_Width-1:0]   tag  [3:0][(2**Set_Width)-1:0];
    logic [Data_Width-1:0]  data [3:0][(2**Set_Width)-1:0];
    // input
    logic [Set_Width-1:0]   inputSet;
    logic [Tag_Width-1:0]   inputTag;
    //checking
    logic                   tagCheck;
    

    assign inputTag = address[Data_Width-1:Data_Width-Tag_Width];
    assign inputSet = address[(Data_Width-Tag_Width-1): (Data_Width-Tag_Width-1-Set_Width)];
    assign inputBof = address[(BlockOffset+ByteOffset): ByteOffset];

    // tag check
    int i, j;
    for (i = 0; i < 4; i++) {  
        tagCheck = 0;                               // Loop over the first dimension
        for (j = 0; j < 8; j++) {                   // Loop over the second dimension, assuming 4 from 3:0
            if (tag[i][j] == inputTag) {
                tagCheck = 1; 
            }
        }
    }

    //valid check
    


endmodule





// Hit logic
logic [3:0] hit_ways;
assign hit_ways[0] = (tag[0][set_index] == tag_field) && V[0][set_index];
assign hit_ways[1] = (tag[1][set_index] == tag_field) && V[1][set_index];
assign hit_ways[2] = (tag[2][set_index] == tag_field) && V[2][set_index];
assign hit_ways[3] = (tag[3][set_index] == tag_field) && V[3][set_index];
assign hit = |hit_ways; // Logical OR of all hit flags

// Initialization
initial begin
    for(int i = 0; i < CACHE_LENGTH; i++) begin
        replace_way_flag[i] = 0; 
        for(int j = 0; j < 4; j++) begin
            V[j][i] = 0;
            D[j][i] = 0; 
        end
    end
end

// Hit processing
always_comb begin
    if (hit) begin
        for (int i = 0; i < 4; i++) begin
            if (hit_ways[i]) begin
                data_out = data[i][set_index]; // Update data_out
            end
        end
    end else begin
        data_out = 32'b0; // On miss, output 0
    end
end

// Write logic and replacement strategy
always_ff @(posedge clk) begin
    if (we) begin
        if (!hit) begin
            int replace_way = replace_way_flag[set_index];
        
            // Update the cache with new data
            tag[replace_way][set_index] <= tag_field;
            data[replace_way][set_index] <= data_in;
            V[replace_way][set_index] <= 1'b1;
            D[replace_way][set_index] <= 1'b0; // Data is clean, just loaded from memory

            // Update replace way flag
            replace_way_flag[set_index] <= (replace_way + 1) % 4;
        end
        else begin
            for (int i = 0; i < 4; i++) begin
                if (hit_ways[i]) begin
                    data[i][set_index] <= data_in;
                    D[i][set_index] <= 1'b1; // Data is dirty, modified by write operation
                end
            end
        end
    end
end






