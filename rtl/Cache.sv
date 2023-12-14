module Cache #(
  parameter tagSize = 29,
  parameter setSize = 3,
  parameter setNum = 8,
  parameter wayNum = 2
)(
  input logic [31:0]            addressIn,
  input logic [31:0]            dataIn,

  input  logic                  StSrcM,       // Store Type signal
  input  logic                  LdSrcM,       // Load Type signal
  input logic                   WE,           // write enable
  input logic                   clk,

  output logic [31:0]           dataOut,    
  output logic                  hit           // decide whether hit
);

  // Cache
  logic [setNum-1:0][wayNum-1:0] valid;
  logic [setNum-1:0][wayNum-1:0] [tagSize-1:0] tag ;
  logic [setNum-1:0][wayNum-1:0] [31:0]        data ;        // block size:32 bits 
  logic [setNum-1:0]             lru;                // leaat used bit, if 0 choose way0, else choose way 1
  logic                          selectedWay;
  
  // input
  logic [tagSize-1:0] inputTag;
  logic [setSize-1:0] inputSet;
  assign inputTag = addressIn[31:3]; 
  assign inputSet = addressIn[2:0]; // byte offset for [1:0]

  // Initialization
  initial begin
    // set valid to 0
    for (int set = 0; set < setNum; set++) begin
        lru[set] = 0; // set lru to 0 
      for (int way = 0; way < wayNum; way++) begin
            valid[set][way] = 1'b1;
      end
    end
  end

  // Read 
  always_comb begin
    // Default values
    hit = 1'b0; 
    dataOut = 32'b0; 
    for (int way = 0; way < wayNum; way++) begin
       if (LdSrcM) begin // lbu 
          if ((valid[inputSet][way]) && (tag[inputSet][way] == inputTag)) begin // find the block
                dataOut = {{24{1'b0}},data[inputSet][way][7:0]};
                hit = 1'b0;
            end
        end
    end
 end

  always_ff @(posedge clk) begin
    if (LdSrcM && hit) begin
      lru[inputSet] <= !lru[inputSet]; // rest the least used 
    end

    if (LdSrcM && !hit) begin
      lru[inputSet] <= !lru[inputSet]; // rest the least used
      alid[inputSet][selectedWay] <= 1'b1;
      tag[inputSet][selectedWay] <= inputTag;
      data[inputSet][selectedWay][7:0] <=dataIn[7:0];
    end
    
    if (WE) begin
      // choose the way
      selectedWay <= lru[inputSet] ? 1'b0 : 1'b1; 
      // Update tag & valid
      ;
      // SB instruction
      if (StSrcM) begin
            valid[inputSet][selectedWay] <= 1'b1;
            tag[inputSet][selectedWay] <= inputTag
            data[inputSet][selectedWay][7:0] <=dataIn[7:0];
      end
    end
  end
  
endmodule
