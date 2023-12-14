module DataMemory#(
    parameter DATA_WIDTH = 32, 
    parameter Tag_WIDTH = 29, 
    parameter Set_WIDTH = 3
)(
    input  logic                  clk,         // Clock input
    input  logic                  WE,          // Write Enable signal
    input  logic                  StSrc,       // Store Type signal
    input  logic                  LdSrc,       // Load Type signal
    input  logic [DATA_WIDTH-1:0] A,           // Address input
    input  logic [DATA_WIDTH-1:0] WD,          // Write Data input
    output logic [DATA_WIDTH-1:0] RD           // Read Data output
);

    logic [7:0] data_array [2**17-1 : 0]; 
    logic hit;

    initial $readmemh("noisy.mem", data_array, 17'h10000);
    typedef enum {from_cache, from_memory} my_state;
    my_state current_state, next_state;


    // cache
    logic valid [2**Set_WIDTH-1:0];
    logic [Tag_WIDTH-1:0] tag [2**Set_WIDTH-1:0];
    logic [7:0] data [2**Set_WIDTH-1:0][3:0];

    // input
    logic [Tag_WIDTH-1:0] inputTag;
    logic [Set_WIDTH-1:0] inputSet;
    assign inputTag = A[31:3];
    assign inputSet = A[2:0];


    assign hit = ((tag[inputSet] == inputTag) && (valid[inputSet]));



    // write
    always_ff @(posedge clk) begin
        if ((WE == 1) && (StSrc == 0)) begin           // SW
            // change cache
            valid[inputSet] <= 1'b1;
            tag[inputSet] <= inputTag;
            // write through to cache
            data[inputSet][2'b11]<= WD[7:0];
            data[inputSet][2'b10]<= WD[15:8];
            data[inputSet][2'b01]<= WD[23:16];
            data[inputSet][2'b00]<= WD[31:24];
            // write through to memory
            data_array[A] <= WD[7:0];
            data_array[A+1] <= WD[15:8];
            data_array[A+2] <= WD[23:16];
            data_array[A+3] <= WD[31:24];
        end

        else if ((WE == 1) && (StSrc == 1))    begin                            // SB
            // write through to cache
            valid[inputSet] <= 1'b1;
            tag[inputSet] <= inputTag;
            data[inputSet][2'b11]<= WD[7:0];
            // write through to memory
            data_array[A] <= WD[7:0];
        end
    end

    always_comb begin 
        if (hit) current_state = from_cache;
        else current_state = from_memory;
    end

    // state output
    always_comb begin
        case (current_state)
            from_cache: if (LdSrc) RD = {{24{1'b0}}, data[inputSet][2'b11]};
                        else RD = {data[inputSet][2'b00], data[inputSet][2'b01], data[inputSet][2'b10], data[inputSet][2'b11]};
            from_memory: if (LdSrc) RD = {{24{1'b0}}, data_array[A]};
                         else RD = {data_array[A+3], data_array[A+2], data_array[A+1], data_array[A]};
        endcase
    end

    // display
    always_comb begin
        case (current_state)
            from_cache: $display("DataMemory: hit");
            from_memory: $display("DataMemory: miss");
            
        endcase
    end


    // use memory to update cache
    always_comb begin
        if (current_state == from_memory) begin
            valid[inputSet] = 1'b1;
            tag[inputSet] = inputTag;
            if (LdSrc) begin 
                data[inputSet][2'b11] = data_array[A];
            end
            else begin 
                data[inputSet][2'b11] = data_array[A];
                data[inputSet][2'b10] = data_array[A+1];
                data[inputSet][2'b01] = data_array[A+2];
                data[inputSet][2'b00] = data_array[A+3];
            end
        end
    end

endmodule
