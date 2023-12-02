module WriteBack #(
  parameter WIDTH = 32
)(
  input logic    clk,
  input logic RegWriteM,
  input logic [1:0] ResultSrcM,

  input logic [WIDTH-1:0] ALUResultM,
  input logic [WIDTH-1:0] ReadDataM,
  input logic [4:0] RdM,
  input logic [WIDTH-1:0] PCPlus4M,

  output logic RegWriteW,
  output logic [4:0] RdW,
  output logic [WIDTH-1:0] ResultW
);

logic [1:0] ResultSrcW;

logic [WIDTH-1:0] ALUResultW;
logic [WIDTH-1:0] ReadDataW;
logic [WIDTH-1:0] PCPlus4W;

always_ff @(posedge clk) begin
    //control signals
    RegWriteW <= RegWriteM; 
    ResultSrcW <= ResultSrcM;
    //others
    ALUResultW <= ALUResultM;
    ReadDataW <= ReadDataM;
    RdW <= RdM;
    PCPlus4W <= PCPlus4M;
end

DataMux my_DataMux (
  .ALUResultW (ALUResultW),
  .ReadDataW (ReadDataW),
  .PCPlus4W (PCPlus4W),
  .ResultW (ResultW),
  .ResultSrcW (ResultSrcW)
);

endmodule
