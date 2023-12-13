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
//     input  logic [Data_Width-1:0]           A,           // addressIness input
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
  parameter TAG_SIZE = 27,
  parameter SET_SIZE = 3,
  parameter NUM_SETS = 8,
  parameter NUM_WAYS = 2
)(
  input logic [31:0]            addressIn,
  input logic [31:0]            dataIn,
  output logic [31:0]           dataOut,
  input  logic                  StSrcM,       // Store Type signal
  input  logic                  LdSrcM,       // Load Type signal
  input logic                   WE,
  input logic                   clk,

  output logic                  hit
);

  // Cache data structures
  logic [NUM_SETS-1:0][NUM_WAYS-1:0] valid;
  logic [NUM_SETS-1:0][NUM_WAYS-1:0][TAG_SIZE-1:0] tag;
  logic [NUM_SETS-1:0][NUM_WAYS-1:0][31:0] data; // Cache data now has 4 bytes per entry
  logic [NUM_SETS-1:0] lru; // LRU bits for each set
  logic  selectedWay;
  
  // addressIness decoding
  logic [TAG_SIZE-1:0] inputTag;
  logic [SET_SIZE-1:0] inputSet;
  assign inputTag = addressIn[31:4]; 
  assign inputSet=addressIn[3:2];

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

  // Read 
  always_comb begin
    hit = 1'b0; // Default to miss
    dataOut = 32'b0; // Default dataOut is 0
    for (int way = 0; way < NUM_WAYS; way++) begin
       if (LdSrcM) begin
          if (LdSrcM && valid[inputSet][way] && tag[inputSet][way] == inputTag) begin
                dataOut = {24'd0,data[inputSet][way][7:0]};
                hit = 1'b1;
            end
        end
    end
 end

  always_ff @(posedge clk) begin
    if (LdSrcM && hit) begin
      lru[inputSet] <= ~lru[inputSet];
    end
    
    if (WE) begin
      // Update the cache contents and the LRU status on a write
      selectedWay <= lru[inputSet] ? 1'b0 : 1'b1; // Determine the LRU way
      // Update cache line
      valid[inputSet][selectedWay] <= 1'b1;
      tag[inputSet][selectedWay] <= inputTag;
      
      // For store word, break down the data into four bytes
      if (StSrcM) begin
        data[inputSet][selectedWay][7:0] <=dataIn[7:0];
      end

    end
  end
endmodule
