module hazard_unit(
    input logic [4:0] RdE,
    input logic [4:0] Rs1E,
    input logic [4:0] Rs2E,
    input logic [4:0] RdM,
    input logic [4:0] RdW,
    input logic [4:0] Rs1D,
    input logic [4:0] Rs2D,
    input logic RegWriteM,
    input logic RegWriteW,
    input logic ResultSrcE,
    input logic PCSrcE,
    output logic [1:0] ForwardAE,
    output logic [1:0] ForwardBE,
    output logic StallF,
    output logic StallD,
    output logic FlushE,
    output logic FlushD
);

logic lwStall;

always_comb begin
    ForwardAE = 2'b00;
    ForwardBE = 2'b00;
    
    // Forwarding
    if ((Rs1E == RdM) && RegWriteM && (Rs1E != 0)) begin
        ForwardAE = 2'b10;
    end else if ((Rs1E == RdW) && RegWriteW && (Rs1E != 0)) begin
        ForwardAE = 2'b01;
    end

    if ((Rs2E == RdM) && RegWriteM && (Rs2E != 0)) begin
        ForwardBE = 2'b10;
    end else if ((Rs2E == RdW) && RegWriteW && (Rs2E != 0)) begin
        ForwardBE = 2'b01;
    end

    // Stall
    lwStall = ((Rs1D == RdE) || (Rs2D == RdE));
    StallF = lwStall;
    StallD = lwStall;

    // Flush
    FlushE = lwStall || PCSrcE;
    FlushD = PCSrcE;

end

endmodule