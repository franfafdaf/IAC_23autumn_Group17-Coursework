#include "Vpc_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);

    Vpc_top* top = new Vpc_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("pc_top.vcd");

 
    top->clk = 1;
    top->rst = 1; // Start in reset
    top->PCSrc = 0;
    top->ImmExt = 0;

    int time = 0; 

    // Simulation for 10 clock cycles
    for (int cycle = 0; cycle < 10; cycle++) {
        if (cycle == 1) {
            top->rst = 0; // Release reset
        } else if (cycle == 2) {
            top->PCSrc = 1; // JAL instruction
            top->ImmExt = 2; // Jump to address 4
        } else if (cycle == 3) {
            top->PCSrc = 0; // Increment PC
        } else if (cycle == 4) {
            top->PCSrc = 1; // Another JAL
            top->ImmExt = 8; // Jump to address 8
        }

        // Toggle clock and evaluate
        for (int i = 0; i < 2; i++) {
            top->clk = !top->clk;
            top->eval();
            tfp->dump(time++);
        }
    }

    top->final();

    // Close VCD
    if (tfp) {
        tfp->close();
    }

    // Clean up
    delete top;
    delete tfp;
    return 0;
}
