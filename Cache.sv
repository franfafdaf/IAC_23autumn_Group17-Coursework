// module Cache #(
//     parameter Tag_Width = 27, 
//     parameter Set_Width = 3,
//     // parameter BlockOffset = 2,
//     parameter wayNum =2,
//     parameter Data_Width =32
// ) (
//     input logic                             clk,
//     input  logic                            StSrcM,       // Store Type signal
//     input  logic                            LdSrcM,       // Load Type signal                    
//     input  logic                            WE,          // Write Enable signal
//     input  logic [Data_Width-1:0]           A,           // Address input
//     input  logic [Data_Width-1:0]           WD,          // Write Data input
    
//     output logic [Data_Width-1:0]           dataOut 
 
// );
//     //cache
//     logic [2**Set_Width-1:0][wayNum-1:0] valid;
//     logic [2**Set_Width-1:0][wayNum-1:0][Tag_Width-1: 0] tag;
//     logic [2**Set_Width-1:0][wayNum-1:0][Data_Width-1: 0] data;
//     logic [2**Set_Width-1:0] lru; 
//     logic selectedWay;
//     logic hit;

//     // input
//     logic[Tag_Width-1:0] inputTag;
//     logic[Set_Width-1:0] inputSet;
//     assign inputTag = A[31:5];
//     assign inputSet = A[4:2];

//     //output
//     // logic [Data_Width-1:0]           RD;           // Read Data output

//     logic [7:0] data_array [2**17-1 : 0]; 

//     initial $readmemh("noisy.mem", data_array, 17'h10000);

//     //initialization
//     initial begin
//         for (int i = 0; i < 2**Set_Width; i=i+1) begin
//             lru[i] = 1'b0; // set lru to 0
//             for (int j = 0; j < wayNum; j++) begin
//                 valid[i][j] = 1'b0;// set valid to 0 
//             end
//         end
//     end

//     //read
//     always_comb begin
//         // check whether hit
//         if((inputTag == tag[inputSet][0]) && (valid[inputSet][0]))begin
//             hit = 1'b1;
//             selectedWay =0;
//         end
//         if((inputTag == tag[inputSet][1]) && (valid[inputSet][1]))begin
//             hit = 1'b1;
//             selectedWay =1;
//         end
//         else begin
//             hit =1'b0;
//             selectedWay=0;
//         end
//     end

//     //read
//     always_comb begin
//         if(hit) begin
//             dataOut= data[inputSet][selectedWay] ;
//         end
//         else begin
//             if (LdSrcM) begin
//                 dataOut = {{24{1'b0}}, data_array[A]}; //LBU

//             end
//             else begin
//                 dataOut = {data_array[A+3], data_array[A+2], data_array[A+1], data_array[A]}; //LW
//             end 
//         end
//     end

//             // selectedWay = lru[inputSet] ? 1'b0 : 1'b1; // selecte the way
//     //write
//     always_ff @(posedge clk) begin

//         if(WE)begin
//             if(StSrcM)begin // SB
//                 data_array[A] <= WD[7:0]; // cache
//                 data[inputSet][selectedWay][7:0] <= WD[7:0]; // data mem
//                 valid[inputSet][selectedWay] <= 1;
//                 tag[inputSet][selectedWay] <= inputTag;
//                 lru[inputSet] <= !lru[inputSet];
//             end
//             else begin //sw
//                 data_array[A] <= WD[7:0]; // cache
//                 data_array[A+1] <= WD[15:8];
//                 data_array[A+2] <= WD[23:16];
//                 data_array[A+3] <= WD[31:24];
//                 data[inputSet][selectedWay][7:0]<= WD[7:0];// data mem
//                 data[inputSet][selectedWay][15:8]<= WD[15:8];
//                 data[inputSet][selectedWay][23:16]<= WD[23:16];
//                 data[inputSet][selectedWay][31:24]<= WD[31:24];
//                 valid[inputSet][selectedWay] <= 1;
//                 tag[inputSet][selectedWay] <= inputTag;
//                 lru[inputSet] <= !lru[inputSet];
//             end
//         end
//         else begin
//             if (LdSrcM) begin
//                 data[inputSet][selectedWay] <= {{24{1'b0}}, data_array[A]}; //LBU
//             end
//             else begin
//                 data[inputSet][selectedWay] <= {data_array[A+3], data_array[A+2], data_array[A+1], data_array[A]}; //LW
//             end 

//             valid[inputSet][selectedWay] <= 1;
//             tag[inputSet][selectedWay] <= inputTag;
//         end
//     end

// endmodule
module Cache #(
  // Cache configuration parameters
  parameter TAG_SIZE = 29,
  parameter SET_SIZE = 3,
  parameter NUM_SETS = 8,
  parameter NUM_WAYS = 2
)(
  input logic [31:0] addr,
  input logic [31:0] data_in,
  output logic [31:0] data_out,
  input  logic                  StSrcM,       // Store Type signal
  input  logic                  LdSrcM,       // Load Type signal
//   input logic [2:0] func3,
  input logic wen,
//   input logic ren,
  input logic clk,
  output logic hit
//   output reg [31:0] address_main,
//   output reg [31:0] data_in_main
);

  // Cache data structures
  logic [NUM_SETS-1:0][NUM_WAYS-1:0] valid;
  logic [NUM_SETS-1:0][NUM_WAYS-1:0][TAG_SIZE-1:0] tag;
  logic [NUM_SETS-1:0][NUM_WAYS-1:0][31:0] data; // Cache data now has 4 bytes per entry
  logic [NUM_SETS-1:0] lru; // LRU bits for each set
  logic  way_to_write;
  
  // Address decoding
  logic [TAG_SIZE-1:0] addr_tag;
  logic [SET_SIZE-1:0] addr_set;
  assign addr_tag = addr[31:3]; // Highest 29 bits
  assign addr_set=addr[2:0];

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
    //   if (func3 == 3'b010) begin
    //     if (ren && valid[addr_set][way] && tag[addr_set][way] == addr_tag) begin
    //     // Cache hit
    //     hit = 1'b1;
    //     end
    //       data_out = {data[addr_set][way][31:0]};
    //     end
        // For load word, assemble data from four bytes
       if (LdSrcM) begin
          if (LdSrcM && valid[addr_set][way] && tag[addr_set][way] == addr_tag) begin
          data_out = {24'd0,data[addr_set][way][7:0]};
           hit = 1'b1;
            end
        end
    end
 end


//   // Update the cache contents and the LRU status on a write
//   always_comb begin 
//     address_main = addr;
//     data_in_main = data_in;
//   end

  // Additional logic to update `lru` based on read hits and perform byte stores
  always_ff @(posedge clk) begin
    if (LdSrcM && hit) begin
      // Update LRU if there is a read hit
      lru[addr_set] <= ~lru[addr_set];
    end
    
    if (wen) begin
      // Update the cache contents and the LRU status on a write
      way_to_write <= lru[addr_set] ? 1'b0 : 1'b1; // Determine the LRU way
      // Update cache line
      valid[addr_set][way_to_write] <= 1'b1;
      tag[addr_set][way_to_write] <= addr_tag;
      
      // For store word, break down the data into four bytes
      if (StSrcM) begin
        data[addr_set][way_to_write][7:0] <=data_in[7:0];
      end
      // For store byte, select the byte location based on byte_select
    //   else if (func3 == 3'b010) begin
    //     data[addr_set][way_to_write][31:0] <= data_in;
    //   end
    end
  end
endmodule
