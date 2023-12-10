module dataCache #( // 2-way, 8 set, block size 4 bytes
    arameter Tag_Width = 25, 
    parameter Set_Width = 3,
    parameter BlockOffset = 2,
    parameter ByteOffset = 2,
    parameter Data_Width =32
) (
    input logic                             clk,
    input logic [Data_Width-1:0]            data_in,    
    input logic [Data_Width-1:0]            address,  
    input logic                             we,                  

    output logic [Data_Width-1:0]           data_out,   
);
    logic                   valid;
    logic                   hit;
    logic                   hit1;
    logic                   hit0;

    logic                   used;
    logic [Set_Width-1:0]   set;
    logic [Tag_Width-1:0]   tag;

    // input
    logic [Set_Width-1:0]   inputSet;
    logic [Tag_Width-1:0]   inputTag;

    // cache memory
    logic [(2+1+2*Tag_Width+2*4*Data_Width):0] cacheMem [7:0];
    logic [(2+1+2*Tag_Width+2*4*Data_Width):0] selectedWay;
    // select way 
    always_comb begin
        case(inputSet)
            3'b000:  selectedWay = cacheMem[0];
            3'b001:  selectedWay = cacheMem[1];
            3'b010:  selectedWay = cacheMem[2];
            3'b011:  selectedWay = cacheMem[3];
            3'b100:  selectedWay = cacheMem[4];
            3'b101:  selectedWay = cacheMem[5];
            3'b110:  selectedWay = cacheMem[6];
            3'b111:  selectedWay = cacheMem[7];
        endcase
    end

    assign way1tag = selectedWay[(1+2*Tag_Width+8*Data_Width-1):(1+Tag_Width+8*Data_Width)];
    assign way0tag = selectedWay[(Tag_Width+4*Data_Width-1):(4*Data_Width)];
    assign 

    // logic                       valid[1:0][Data_Width-1:0];
    // logic                       used [(2**Set_Width)-1:0];
    // logic [Tag_Width-1:0]       tag  [1:0][(2**Set_Width)-1:0];
    // logic [(4*Data_Width)-1:0]  data [1:0][(2**Set_Width)-1:0];

    //

    

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


    // hit check
    assign hit1 = ((valid[0][inputSet])&(inputTag == way1tag));
    assign hit0 = ((valid[0][inputSet])&(inputTag == way0tag));
    assign hit =(hit1|hit0);

    always_comb begin

        //output select
        case(way1)
            2'b11: way1out = selectedWay[(1+Tag_Width+8*Data_Width)-1:(1+Tag_Width+7*Data_Width)];
            2'b10: way1out = selectedWay[(1+Tag_Width+7*Data_Width)-1:(1+Tag_Width+6*Data_Width)]; 
            2'b01: way1out = selectedWay[(1+Tag_Width+6*Data_Width)-1:(1+Tag_Width+5*Data_Width)];  
            2'b00: way1out = selectedWay[(1+Tag_Width+5*Data_Width-1):(1+Tag_Width+4*Data_Width)];  
        endcase

        case(way0)
            2'b11: way0out = selectedWay[(4*Data_Width)-1:3*Data_Width];
            2'b10: way0out = selectedWay[(3*Data_Width)-1:2*Data_Width]; 
            2'b01: way0out = selectedWay[(2*Data_Width)-1:1*Data_Width];  
            2'b00: way0out = selectedWay[(Data_Width)-1:0];  
        endcase

        data_out = hit1 ? way1out ; way0out;
    end
    



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






