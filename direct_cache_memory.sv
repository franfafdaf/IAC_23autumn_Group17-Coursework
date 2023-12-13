module DataMemory#(
    parameter DATA_WIDTH = 32
    parameter Tag_Width = 27,
    parameter Set_Width = 3,
)(
    input  logic                  clk,          // Clock input
    input  logic                  WE,           // Write Enable signal
    input  logic                  StSrcM,       // Store Type signal
    input  logic                  LdSrcM,       // Load Type signal
    input  logic [DATA_WIDTH-1:0] A,            // Address input
    input  logic [DATA_WIDTH-1:0] WD,           // Write Data input
    output logic [DATA_WIDTH-1:0] RD            // Read Data output
);

    logic [7:0] data_array [2**17-1 : 0]; 
    
    // cache
    logic valid [2**Set_Width-1:0];
    logic [Tag_Width-1:0] tag [2**Set_Width-1:0];
    logic [7:0] data [2**Set_Width-1:0][1:0];
    logic hit;

    initial $readmemh("gaussian.mem", data_array, 17'h10000);

    // input
    logic [Tag_Width-1:0] inputTag;
    logic [Set_Width-1:0] inputSet;
    assign inputTag = A[31:5];
    assign inputSet = A[4:2];

    // hit
    always_comb begin
        if ((tag[inputSet] == inputTag) && (valid[inputSet])) begin
            hit = 1'b1;
            $display("hit");
        end
        else begin
            hit = 1'b0;
            $display("miss");
        end
    end

    // write
    always_ff @(posedge clk) begin
        if ((WE == 1) && (StSrcM == 0)) begin           // SW
            if (hit) begin
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
            else begin
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
        end

        else    begin                            // SB
            if (hit == 1'b1) begin
                // write through to cache
                data[inputSet][2'b11]<= WD[7:0];
                // write through to memory
                data_array[A] <= WD[7:0];
            end
            else begin
                // write through to cache
                valid[inputSet] <= 1'b1;
                tag[inputSet] <= inputTag;
                data[inputSet][2'b11]<= WD[7:0];
                // write through to memory
                data_array[A] <= WD[7:0];
            end
        end
    end

    // read
    always_comb begin
        if (LdSrcM) begin           // LBU
            if (hit) begin
                // read from cache
                RD = {{24{1'b0}}, data[inputSet][2'b11]};
            end
            else begin
                // read from memory
                RD = {{24{1'b0}}, data_array[A]};
                // memory write to cache
                valid[inputSet] <= 1'b1;
                tag[inputSet] <= inputTag;
                data[inputSet][2'b11]<= data_array[A];
            end
            end
        else begin                   // LW
            if (hit) begin
                // read from cache
                RD = {data[inputSet][2'b00], data[inputSet][2'b01], data[inputSet][2'b10], data[inputSet][2'b11]};
            end
            else begin
                // read from memory
                RD = {data_array[A+3], data_array[A+2], data_array[A+1], data_array[A]};
                // memory write to cache
                valid[inputSet] <= 1'b1;
                tag[inputSet] <= inputTag;
                data[inputSet][2'b11]<= data_array[A];
                data[inputSet][2'b10]<= data_array[A+1];
                data[inputSet][2'b01]<= data_array[A+2];
                data[inputSet][2'b00]<= data_array[A+3];
            end
        end

    end

endmodule
