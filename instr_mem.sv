//This module is managed by Guanxi Lu
//Instruction memory is from 0xBFC00000 to 0xBFC00FFF

module instr_mem#(
    parameter A_length = 12, // Address width is 12 bits
    parameter D_length = 8   // Data width is 8 bits = 2 bytes
)(
    input logic [A_length-1:0] A, 
    output logic [31:0] RD
);

logic [D_length-1:0] rom_array [2**A_length-1:0]; // Array size is 4096



initial $readmemh("instrmem1.mem", rom_array);


// Assuming A already has the offset (0xBFC00000) subtracted by the system ???
//assign RD = {rom_array[A+3], rom_array[A+2], rom_array[A+1], rom_array[A]};
assign RD = {rom_array[A], rom_array[A+1], rom_array[A+2], rom_array[A+3]};

endmodule
