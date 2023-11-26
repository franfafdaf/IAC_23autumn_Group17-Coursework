# `pc_top` Module Overview

## Inputs
- `clk`: Clock signal for synchronizing the update of the PC value.
- `rst`: Reset signal that sets the PC to 0 when asserted.
- `PCSrc`: Control signal determining sequential execution or jump.
- `ImmExt`: Immediate extension value for calculating jump target address.

## Output
- `PC`: Current value of the program counter.

## Internal Signals
- `PC_Plus`: Next PC value for sequential execution.
- `PC_Target`: Target PC value for jump instructions.
- `PCNext`: Next PC value to be loaded in the upcoming cycle.

## Functionality Summary
- PC value is updated based on `clk` and `rst`.
- When `PCSrc` is high, PC jumps to the `PCTarget`.
- When `PCSrc` is low, PC increments sequentially.





