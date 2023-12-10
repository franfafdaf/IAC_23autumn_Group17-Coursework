module cache #(
    parameter SET_WIDTH = 3,
    parameter TAG_WIDTH = 25,
    parameter OFFSET_WIDTH = 2,
    parameter BLOCK_OFFSET = 2,
    parameter DATA_WIDTH = 32,
    parameter CACHE_LENGTH = 32
)(
    input logic                                 clk,
    input logic [DATA_WIDTH-1:0]                address_in,
    input logic [DATA_WIDTH-1:0]                data_in,
    input logic                                 we,

    output logic [DATA_WIDTH-1:0]               data_out,
    output logic                                hit
);

// Cache ways
logic V[3:0][CACHE_LENGTH-1:0];
logic [TAG_WIDTH-1:0] tag[3:0][CACHE_LENGTH-1:0];
logic [DATA_WIDTH-1:0] data[3:0][CACHE_LENGTH-1:0];
logic D[3:0][CACHE_LENGTH-1:0];  // Dirty bits for all ways

// Replace way flag (LRU),stores the index of the next way to be replaced
logic [1:0] replace_way_flag[CACHE_LENGTH-1:0];

// Current input data
logic [SET_WIDTH-1:0] set_index;
logic [TAG_WIDTH-1:0] tag_field;

assign tag_field = address_in[DATA_WIDTH-1:SET_WIDTH+OFFSET_WIDTH+BLOCK_OFFSET];
assign set_index = address_in[SET_WIDTH+BLOCK_OFFSET+OFFSET_WIDTH-1:OFFSET_WIDTH+BLOCK_OFFSET];

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


endmodule
