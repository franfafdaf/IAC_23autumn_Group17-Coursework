module HazardUnit #(
    parameter DATA_WIDTH = 32
) (
    //forwarding
    input logic[DATA_WIDTH-1:0] RD1E,
    input logic[DATA_WIDTH-1:0] RD2E,
    input logic[4:0]            Rs1E,
    input logic[4:0]            Rs2E,
    input logic[4:0]            RdM,
    input logic[4:0]            RdW,

    input logic                 RegWriteM,
    input logic                 RegWriteW,

    input logic[DATA_WIDTH-1:0] ResultW,
    input logic[DATA_WIDTH-1:0] ALUResultM,

    output logic[DATA_WIDTH-1:0] SrcA0E,
    output logic[DATA_WIDTH-1:0] SrcB0E,

    //stall
    input logic[4:0]             Rs1D,
    input logic[4:0]             Rs2D,
    input logic[4:0]             RdE,
    input logic[1:0]             ResultSrcE,

    output logic                 StallF,
    output logic                 StallD,
    output logic                 FlushE,
    
    //flush
    input logic                  PCSrcE,
    output logic                 FlushD
);
    //forward
    logic[1:0] ForwardAE;
    logic[1:0] ForwardBE;
    //stall
    logic      ResultSrcE0;
    assign     ResultSrcE0 = ResultSrcE[0];

    //flush
    logic      lwStall;

    // forwarding
    always_comb begin
        if (((Rs1E == RdM) & RegWriteM) & (Rs1E != 0)) ForwardAE = 2'b10;       // Forward from Memory stage 
        else if (((Rs1E == RdW) & RegWriteW) & (Rs1E != 0)) ForwardAE = 2'b01;  // Forward from Writeback stage 
        else ForwardAE = 2'b00;                                                 // No forwarding (use RF output)

        case (ForwardAE)
            2'b00: SrcA0E = RD1E; 
            2'b01: SrcA0E = ResultW;        
            2'b10: SrcA0E = ALUResultM;     
            default: SrcA0E = 32'b0;   
        endcase

        if (((Rs2E == RdM) & RegWriteM) & (Rs2E != 0)) ForwardBE = 2'b10;       // Forward from Memory stage 
        else if (((Rs2E == RdW) & RegWriteW) & (Rs2E != 0)) ForwardBE = 2'b01;  // Forward from Writeback stage 
        else ForwardBE = 2'b00;                                                 // No forwarding (use RF output)

        case (ForwardBE)
            2'b00: SrcB0E = RD2E; 
            2'b01: SrcB0E = ResultW;        
            2'b10: SrcB0E = ALUResultM;     
            default: SrcB0E = 32'b0;   
        endcase
    end

    // stall
    assign lwStall = ResultSrcE0 & ((Rs1D == RdE)|(Rs2D == RdE)); 
    assign StallF = lwStall;
    assign StallD = lwStall;

    //flush
    assign FlushD = PCSrcE;
    assign FlushE = lwStall | PCSrcE;
    
endmodule
