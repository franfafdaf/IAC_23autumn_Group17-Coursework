module Cache #(
    parameter Tag_Width = 25, 
    parameter Set_Width = 3,
    parameter BlockOffset = 2,
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
    output logic                            hit,
    output logic [Data_Width-1:0]           MdataOut,   
    output logic [Data_Width-1:0]           MaddressOut   
);
    //cache
    logic [2**Set_Width-1:0][wayNum-1:0] valid;
    logic [2**Set_Width-1:0][wayNum-1:0][Tag_Width-1: 0] tag;
    logic [2**Set_Width-1:0][wayNum-1:0][4*Data_Width-1: 0] data;
    logic [2**Set_Width-1:0] lru; 
    logic selectedWay;
    // logic[Data_Width-1:0] selectedBlock;
    logic[4*Data_Width-1:0] selectedData;

    // input
    logic[Tag_Width-1:0] inputTag;
    logic[Set_Width-1:0] inputSet;
    logic[BlockOffset-1:0] inputBlock;
    assign inputTag = addressIn[31:7];
    assign inputSet = addressIn[6:4];
    assign inputBlock= addressIn[3:2];

    //initialization
    initial begin
        for (int i = 0; i < 2**Set_Width; i++) begin
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
        for(int i =0; i< wayNum; i++)begin
            if((inputTag == tag[inputSet][i]) && (valid[inputSet][i] &&LdSrcM))begin
                hit = 1'b1;
                selectedData = data[inputSet][i];
            end
            else begin
                hit = 1'b0;
                selectedData =128'b0;
            end
        end

        case(inputBlock)
            2'b00: dataOut = selectedData[31:0];
            2'b01: dataOut = selectedData[63:32];
            2'b10: dataOut = selectedData[95:64];
            2'b11: dataOut = selectedData[127:96];
            default: dataOut = 0;
        endcase
    end

    // pass write to data mem
    always_comb begin
        MdataOut = dataIn;
        MaddressOut = addressIn;
    end

    always_ff @(posedge clk) begin
        if(hit && LdSrcM) begin // update lru
            lru[inputSet] <= ~lru[inputSet];
        end

        if(we && StSrcM) begin // write 
            selectedWay <= lru[inputSet] ? 1'b0 : 1'b1; // selecte the way
            // update cache
            valid[inputSet][selectedWay] <= 1'b1;
            tag[inputSet][selectedWay] <= inputTag;
            case(inputBlock)
                2'b00: data[inputSet][selectedWay][31:0]<= dataIn;
                2'b01: data[inputSet][selectedWay][63:32]<= dataIn;
                2'b10: data[inputSet][selectedWay][95:64]<= dataIn;
                2'b11: data[inputSet][selectedWay][127:96]<= dataIn;
                default: data[inputSet][selectedWay][127:96]<= 0;
            endcase
            
            lru[inputSet] <= ~lru[inputSet];
        end
    end

endmodule
