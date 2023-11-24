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

# `sign_extend` Module Overview

The `sign_extend` module is responsible for sign-extending immediate values based on different instruction types in a RISC-V CPU architecture.

## Inputs
- `ImmSrc`: 3-bit signal determining the type of instruction and hence the immediate format to use.
- `instr`: Full instruction word from which the immediate value is extracted.

## Output
- `ImmExt`: Sign-extended immediate value, ready for use in subsequent CPU operations.

## Functionality Summary
The module examines the `ImmSrc` input and performs one of the following operations based on its value:
- **I-type (3'b000)**: Sign-extends the 12-bit immediate from bits [31:20].
- **S-type (3'b001)**: Sign-extends the 12-bit immediate combining bits [31:25] and [11:7].
- **B-type (3'b010)**: Sign-extends the 12-bit immediate formed by bits [31], [7], [30:25], and [11:8], adding a 0 at the least significant bit for byte alignment.
- **J-type (3'b011)**: Sign-extends the 20-bit immediate from bits [31], [19:12], [20], and [30:21], adding a 0 at the least significant bit for byte alignment.
- **U-type (3'b100)**: Takes the upper 20 bits of the immediate from bits [31:12] and appends 12 lower-order 0s, as U-type immediates are for upper immediate loads.
- For any other value of `ImmSrc`, the default behavior is to treat it as an I-type.



