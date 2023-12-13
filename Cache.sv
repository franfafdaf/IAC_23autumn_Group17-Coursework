module Cache #(
    parameter Tag_Width = 27, 
    parameter Set_Width = 3,
    // parameter BlockOffset = 2,
    parameter wayNum =2,
    parameter Data_Width =32
) (
    input logic                             clk,
    input  logic                            StSrcM,       // Store Type signal
    input  logic                            LdSrcM,       // Load Type signal                    
    input  logic                            WE,          // Write Enable signal
    input  logic [Data_Width-1:0]           A,           // Address input
    input  logic [Data_Width-1:0]           WD,          // Write Data input
    
    output logic [Data_Width-1:0]           dataOut 
 
);
    //cache
    logic [2**Set_Width-1:0][wayNum-1:0] valid;
    logic [2**Set_Width-1:0][wayNum-1:0][Tag_Width-1: 0] tag;
    logic [2**Set_Width-1:0][wayNum-1:0][Data_Width-1: 0] data;
    logic [2**Set_Width-1:0] lru; 
    logic selectedWay;
    logic hit;

    // input
    logic[Tag_Width-1:0] inputTag;
    logic[Set_Width-1:0] inputSet;
    assign inputTag = A[31:5];
    assign inputSet = A[4:2];

    //output
    // logic [Data_Width-1:0]           RD;           // Read Data output

    logic [7:0] data_array [2**17-1 : 0]; 

    initial $readmemh("noisy.mem", data_array, 17'h10000);

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
        // check whether hit
        for(int i =0; i< wayNum; i=i+1)begin
            if((inputTag == tag[inputSet][i]) && (valid[inputSet][i]))begin
                hit = 1'b1;
            end
            else begin
                hit =1'b0;
            end
        end
        selectedWay = lru[inputSet] ? 1'b0 : 1'b1; // selecte the way
    end

    //read
    always_comb begin
        if(hit) begin
            dataOut= data[inputSet][selectedWay] ;
        end
        else begin
            if (LdSrcM) begin
                dataOut = {{24{1'b0}}, data_array[A]}; //LBU

            end
            else begin
                dataOut = {data_array[A+3], data_array[A+2], data_array[A+1], data_array[A]}; //LW
            end 
        end
    end

    //write
    always_ff @(posedge clk) begin
        if(WE)begin
            if(StSrcM)begin // SB
                data_array[A] <= WD[7:0]; // cache
                data[inputSet][selectedWay][7:0] <= WD[7:0]; // data mem
                valid[inputSet][selectedWay] <= 1;
                tag[inputSet][selectedWay] <= inputTag;
                lru[inputSet] <= !lru[inputSet];
            end
            else begin //sw
                data_array[A] <= WD[7:0]; // cache
                data_array[A+1] <= WD[15:8];
                data_array[A+2] <= WD[23:16];
                data_array[A+3] <= WD[31:24];
                data[inputSet][selectedWay][7:0]<= WD[7:0];// data mem
                data[inputSet][selectedWay][15:8]<= WD[15:8];
                data[inputSet][selectedWay][23:16]<= WD[23:16];
                data[inputSet][selectedWay][31:24]<= WD[31:24];
                valid[inputSet][selectedWay] <= 1;
                tag[inputSet][selectedWay] <= inputTag;
                lru[inputSet] <= !lru[inputSet];
            end
        end
        else begin
            if (LdSrcM) begin
                data[inputSet][selectedWay] <= {{24{1'b0}}, data_array[A]}; //LBU
            end
            else begin
                data[inputSet][selectedWay] <= {data_array[A+3], data_array[A+2], data_array[A+1], data_array[A]}; //LW
            end 

            valid[inputSet][selectedWay] <= 1;
            tag[inputSet][selectedWay] <= inputTag;
        end
    end

endmodule
