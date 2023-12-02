module DataMemory_reg #(
  parameter WIDTH = 32
)(
  // Control signals
  input logic    clk,
  input logic RegWriteE,
  input logic [1:0] ResultSrcE,
  input logic MemWriteE,
  input logic StSrcE,
  input logic LdSrcE,
  // Data signals
  input logic [WIDTH-1:0] ALUResultE,
  input logic [WIDTH-1:0] WriteDataE,
  input logic [4:0] RdE,
  input logic [WIDTH-1:0] PCPlus4E,

  output logic RegWriteM,
  output logic [1:0] ResultSrcM,
  output logic [WIDTH-1:0] ALUResultM,
  output logic [WIDTH-1:0] ReadDataM,
  output logic [4:0] RdM,
  output logic [WIDTH-1:0] PCPlus4M
);
  
logic [WIDTH-1:0] WriteDataM;
logic MemWriteM;
logic StSrcM;
logic LdSrcM;

always_ff @(posedge clk) begin
    //control signals
    RegWriteM <= RegWriteE; 
    ResultSrcM <= ResultSrcE;
    MemWriteM <= MemWriteE;
    StSrcM <= StSrcE;
    LdSrcM <= LdSrcE;
    //others
    ALUResultM <= ALUResultE;
    WriteDataM <= WriteDataE;
    RdM <= RdE;
    PCPlus4M <= PCPlus4E;
end

DataMemory my_datamem (
   .clk (clk),
   .WE (MemWriteM),
   .StSrc (StSrcM),
   .LdSrc (LdSrcM),
   .A (ALUResultM) ,  
   .WD (WriteDataM),
   .RD (ReadDataM)
);

endmodule
