module dataCache #( // 2-way, 8 set, block size 4 bytes
    arameter Tag_Width = 25, 
    parameter Set_Width = 3,
    parameter BlockOffset = 2,
    parameter ByteOffset = 2,
    parameter Data_Width =32
) (
    input logic                             clk,
    input logic [Data_Width-1:0]            data_in,    
    input logic [Data_Width-1:0]            addressIn,  
    input logic                             we,                  

    output logic [Data_Width-1:0]           data_out,   
    output logic                            hit_out,
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

    // input 
    assign inputTag = addressIn[Data_Width-1:Data_Width-Tag_Width];
    assign inputSet = addressIn[(Data_Width-Tag_Width-1): (Data_Width-Tag_Width-1-Set_Width)];
    assign inputBof = addressIn[(BlockOffset+ByteOffset): ByteOffset];

    // inital valid
    initial begin
        for (int i = 0; i < 8; i++) begin
            cacheMem[i][(2+1+2*Tag_Width+2*4*Data_Width-1)] = 0; // way1valid
            cacheMem[i][Tag_Width+4*Data_Width] = 0; // way0valid
        end
    end

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

    //selected way
    assign way1tag = selectedWay[(1+2*Tag_Width+8*Data_Width-1):(1+Tag_Width+8*Data_Width)];
    assign way0tag = selectedWay[(Tag_Width+4*Data_Width-1):(4*Data_Width)];
    assign way1data = selectedWay[(1+Tag_Width+8*Data_Width)-1:(1+Tag_Width+4*Data_Width)];
    assign way0data = selectedWay[4*Data_Width-1:0];
    assign way1valid = selectedWay[(2+1+2*Tag_Width+2*4*Data_Width-1)];
    assign way0valid = selectedWay[Tag_Width+Data_Width*4];
    assign used = selectedWay[(2+1+2*Tag_Width+2*4*Data_Width-2)];

    // hit check
    assign hit1 = (way1valid&(inputTag == way1tag));
    assign hit0 = (way0valid&(inputTag == way0tag));
    assign hit =(hit1|hit0);



    // if hit


    //output select
    always_comb begin

        case(way1Bof)
            2'b11: way1out = selectedWay[(1+Tag_Width+8*Data_Width)-1:(1+Tag_Width+7*Data_Width)];
            2'b10: way1out = selectedWay[(1+Tag_Width+7*Data_Width)-1:(1+Tag_Width+6*Data_Width)]; 
            2'b01: way1out = selectedWay[(1+Tag_Width+6*Data_Width)-1:(1+Tag_Width+5*Data_Width)];  
            2'b00: way1out = selectedWay[(1+Tag_Width+5*Data_Width-1):(1+Tag_Width+4*Data_Width)];  
        endcase

        case(way0Bof)
            2'b11: way0out = selectedWay[(4*Data_Width)-1:3*Data_Width];
            2'b10: way0out = selectedWay[(3*Data_Width)-1:2*Data_Width]; 
            2'b01: way0out = selectedWay[(2*Data_Width)-1:1*Data_Width];  
            2'b00: way0out = selectedWay[(Data_Width)-1:0];
        endcase

        if(hit)begin
            if(hit1)begin
                data_out = way1out;
            end
            else begin
                data_out =way0out;
            end
        end
        else begin
            
        end
    end

    // write
    always_comb begin
        if(hit != 1)begin
             
        end
    end
    
endmodule
