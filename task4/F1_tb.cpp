#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VF1.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 5000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int lights = 0; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  VF1 * top = new VF1;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("F1.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T4: F1");
  vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst_tick = 0;
  top->rst_fsm = 0; 
  top->rst_delay = 0;
  top->rst_lfsr = 0;
  top->en_lfsr = 1; 
  //string time_elapsed = 0; 
  
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    // Display toggle neopixel
    vbdBar(top->data_out & 0xFF);
    // set up input signals of testbench
    top->rst_tick = (simcyc < 2);    // assert reset for 1st cycle
    top->rst_fsm = (simcyc < 2);
    top->rst_delay = (simcyc < 2);
    top->rst_lfsr = (simcyc < 2);
    top->N = vbdValue();
    top->trigger = vbdFlag();
    vbdCycle(simcyc);

    /* if (top->data_out == 0) {
      vbdInitWatch(); 
      if (vbdFlag()) {
        printf("Time elapsed: %d\n", vbdElapsed());
      }
    } */

    if (Verilated::gotFinish() || (vbdGetkey() == 'q'))  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
