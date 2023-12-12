module two_way_cache #(
  // Cache configuration parameters
  parameter TAG_SIZE = 28,
  parameter SET_SIZE = 2,
  parameter NUM_SETS = 4,
  parameter NUM_WAYS = 2
)(
  input logic [31:0] addr,
  input logic [31:0] data_in,
  output logic [31:0] data_out,
  input logic wen,
  input logic ren,
  input logic clk,
  input logic [2:0] func3,
  output logic hit,
  output reg [31:0] address_main,
  output reg [31:0] data_in_main
);

  // Cache data structures
  logic [NUM_SETS-1:0][NUM_WAYS-1:0] valid;
  logic [NUM_SETS-1:0][NUM_WAYS-1:0][TAG_SIZE-1:0] tag;
  logic [NUM_SETS-1:0][NUM_WAYS-1:0][31:0] data;
  logic [NUM_SETS-1:0] lru; // LRU bits for each set
  logic  way_to_write;

  // Address decoding
  logic [TAG_SIZE-1:0] addr_tag;
  logic [SET_SIZE-1:0] addr_set;
  assign addr_tag = addr[31:4]; // Highest 28 bits
  assign addr_set = addr[3:2];  // Next 2 bits

  // Initialization
  initial begin
    // Initialize the valid bits to 0
    for (int set = 0; set < NUM_SETS; set++) begin
      lru[set] = 0; // Set initial LRU state
      for (int way = 0; way < NUM_WAYS; way++) begin
        valid[set][way] = 1'b0;
      end
    end
  end

   // Read operation logic
  always_comb begin
    hit = 1'b0; // Default to miss
    data_out = 32'b0; // Default data_out is 0
    // Iterate over ways to find the tag
    for (int way = 0; way < NUM_WAYS; way++) begin
      if ((func3==3'b010)&&ren && valid[addr_set][way] && tag[addr_set][way] == addr_tag) begin
        // Cache hit
        hit = 1'b1;
        data_out = data[addr_set][way]; // Data read from cache
      end
    end
  end

// Update the cache contents and the LRU status on a write
always_comb begin 
  address_main = addr;
  data_in_main = data_in;
end

 // Additional logic to update `lru` based on read hits
always_ff @(posedge clk) begin
  if (ren && hit) begin
    // Update LRU if there is a read hit
    lru[addr_set]<=~lru[addr_set];
  end
  
  if ((func3==3'b010)&&wen) begin
    // Update the cache contents and the LRU status on a write
    way_to_write <= lru[addr_set] ? 1'b0 : 1'b1; // Determine the LRU way
    // Update cache line
    valid[addr_set][way_to_write] <= 1'b1;
    tag[addr_set][way_to_write] <= addr_tag;
    data[addr_set][way_to_write] <= data_in;
    // Update LRU status
    lru[addr_set] <= ~lru[addr_set]; // Toggle the LRU bit
  end
end
endmodule