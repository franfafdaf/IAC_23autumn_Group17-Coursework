module Cache #(
    parameter Tag_Width = 27, 
    parameter Set_Width = 3,
    // parameter BlockOffset = 2,
    parameter wayNum =2,
    parameter Data_Width =32
) (
    input logic                             clk,
    input logic [Data_Width-1:0]            addressIn, 
    input logic [Data_Width-1:0]            dataIn,     
    input logic                             we,
    input  logic                            StSrcM,       // Store Type signal
    input  logic                            LdSrcM,       // Load Type signal                  

    output logic [Data_Width-1:0]           dataOut,   
    output logic                            hit
 
);
    //cache
    logic [2**Set_Width-1:0][wayNum-1:0] valid;
    logic [2**Set_Width-1:0][wayNum-1:0][Tag_Width-1: 0] tag;
    // logic [2**Set_Width-1:0][wayNum-1:0][4*Data_Width-1: 0] data;
    logic [2**Set_Width-1:0][wayNum-1:0][Data_Width-1: 0] data;

    logic [2**Set_Width-1:0] lru; 
    logic selectedWay;
    // logic[Data_Width-1:0] selectedBlock;
    // logic[4*Data_Width-1:0] selectedData;
    logic[Data_Width-1:0] selectedData;


    // input
    logic[Tag_Width-1:0] inputTag;
    logic[Set_Width-1:0] inputSet;
    // logic[BlockOffset-1:0] inputBlock;
    assign inputTag = addressIn[31:5];
    assign inputSet = addressIn[4:2];
    // assign inputBlock= addressIn[3:2];

    //initialization
    initial begin
        for (int i = 0; i < 2**Set_Width; i=i+1) begin
            lru[i] = 1'b0; // set lru to 0
            for (int j = 0; j < wayNum; j++) begin
                valid[i][j] = 1'b0;// set valid to 0 
            end
        end
    end

    //read
    always_comb begin
        //default value
        hit = 1'b0;
        dataOut = 32'b0; 
        // find tag
        for(int i =0; i< wayNum; i=i+1)begin
            if((inputTag == tag[inputSet][i]) && (valid[inputSet][i]) && LdSrcM )begin
                hit = 1'b1;
                selectedData = data[inputSet][i];
                dataOut = selectedData;

            end
            else begin
                hit = 1'b0;
                selectedData =32'b0;
                dataOut = selectedData;
            end
            
            
        end

        // case(inputBlock)
        //     2'b00: dataOut = selectedData[31:0];
        //     2'b01: dataOut = selectedData[63:32];
        //     2'b10: dataOut = selectedData[95:64];
        //     2'b11: dataOut = selectedData[127:96];
        //     default: dataOut = 0;
        // endcase
       
    end

    // pass write to data mem

    always_ff @(posedge clk) begin
        if(hit && LdSrcM) begin // update lru
            lru[inputSet] <= ~lru[inputSet];
        end

        if(we && StSrcM) begin // write 
            selectedWay <= lru[inputSet] ? 1'b0 : 1'b1; // selecte the way
            // update cache
            valid[inputSet][selectedWay] <= 1'b1;
            tag[inputSet][selectedWay] <= inputTag;
            // case(inputBlock)
            //     2'b00: data[inputSet][selectedWay][31:0]<= dataIn;
            //     2'b01: data[inputSet][selectedWay][63:32]<= dataIn;
            //     2'b10: data[inputSet][selectedWay][95:64]<= dataIn;
            //     2'b11: data[inputSet][selectedWay][127:96]<= dataIn;
            //     default: data[inputSet][selectedWay][127:96]<= 0;
            // endcase
            data[inputSet][selectedWay]<= dataIn;
            lru[inputSet] <= ~lru[inputSet];
        end
    end

endmodule
// module Cache #(
//     parameter SET_WIDTH = 3,  // Index width set to 3 bits
//     parameter OFFSET_WIDTH = 2,  // Block offset width set to 2 bits
//     parameter TAG_WIDTH = 27,    // Tag width set to 27 bits
//     parameter DATA_WIDTH = 32,   // Data width set to 32 bits
//     parameter CACHE_LINES = 8   // Number of cache lines set to 8

// )(
//     input logic clk,
//     input logic [DATA_WIDTH-1:0] data_in,    
//     input logic [DATA_WIDTH-1:0] address_in,  
//     input logic we,                  
//     input logic StSrcM,
//     // input logic LdSrcM,
//     output logic [DATA_WIDTH-1:0] data_out,   
//     output logic cache_hit                     
// );

//     // Cache storage definitions
//     logic valid [CACHE_LINES-1:0];                    // Array of valid bits
//     logic [TAG_WIDTH-1:0] tags [CACHE_LINES-1:0];     // Array of tag storage
//     logic [DATA_WIDTH-1:0] cache_data [CACHE_LINES-1:0]; // Array of data storage

//     // Decomposing input address
//     logic [SET_WIDTH-1:0] set;
//     logic [TAG_WIDTH-1:0] tag;

//     // Extracting tag and index from input address
//     assign tag = address_in[DATA_WIDTH-1:DATA_WIDTH-TAG_WIDTH];
//     assign set = address_in[DATA_WIDTH-TAG_WIDTH-1:OFFSET_WIDTH];

//     assign cache_hit = valid[set] && (tags[set] == tag); // Checking for cache hit

//     always_comb begin
//         data_out = cache_hit ? cache_data[set] : 32'b0;
//     end

//     always_ff @(posedge clk) begin
//         if (we & StSrcM) begin
//             cache_data[set] <= data_in;
//             tags[set] <= tag;
//             valid[set] <= 1'b1; 
//         end
//     end

// endmodule



// note: 
// hit logic: tag, valid, lru
// write logic:    if hit, update LRU, write to cache, cacche pass to data mem
//                 if miss, update LRU, change tag, write to cache, cacche pass to data mem
// read logic:     if hit, read from cache, 
//                 if miss, look up from data mem, pass to cache, update LRU