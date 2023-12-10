module two_way_set_associative_cache (
    input logic clk,
    input logic [31:0] address,
    input logic [31:0] write_data,  // Data to write on a store instruction
    output logic [31:0] read_data,
    output logic hit
);

    // Cache storage for 2 ways
    logic [31:0] cache_way0[1:0][3:0]; // 2 sets, each with 4 blocks
    logic [31:0] cache_way1[1:0][3:0];

    // Tag arrays and valid bits for 2 ways
    logic [26:0] tag_way0[1:0]; // 27 bits for tag
    logic [26:0] tag_way1[1:0];
    logic valid_way0[1:0][1:0]; // 2 valid bits per set, one for each way
    logic valid_way1[1:0][1:0];

    // MRU bits for each set
    logic mru_bits[1:0];

    // Address decomposition
    wire [26:0] tag = address[31:5]; // Upper 27 bits
    wire [0:0] set_index = address[4];   // One bit for set index
    wire [1:0] block_offset = address[3:2]; // Two bits for block offset
    // Note: Byte offset is not used in this example

    always_ff @(posedge clk) begin
        logic hit_way0, hit_way1;

        // Check for cache hit in both ways
        hit_way0 = valid_way0[set_index][block_offset] && (tag_way0[set_index] == tag);
        hit_way1 = valid_way1[set_index][block_offset] && (tag_way1[set_index] == tag);
        hit = hit_way0 || hit_way1;

        if (hit) begin
            // Read from cache
            if (hit_way0) begin
                read_data = cache_way0[set_index][block_offset];
                mru_bits[set_index] = 1; // Update MRU
            end else begin
                read_data = cache_way1[set_index][block_offset];
                mru_bits[set_index] = 0; // Update MRU
            end
        end else begin
            // Cache miss handling
            if (mru_bits[set_index]) begin
                // Update way 1
                cache_way1[set_index][block_offset] = write_data; 
                tag_way1[set_index] = tag;
                valid_way1[set_index][block_offset] = 1;
                mru_bits[set_index] = 0; // Update MRU
            end else begin
                // Update way 0
                cache_way0[set_index][block_offset] = write_data;
                tag_way0[set_index] = tag;
                valid_way0[set_index][block_offset] = 1;
                mru_bits[set_index] = 1; // Update MRU
            end
        end
    end

endmodule
