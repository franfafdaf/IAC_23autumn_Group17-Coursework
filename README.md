## Table of contents 
- [Table of contents](#table-of-contents)
- [Project Brief](#project-brief)
- [Personal Information](#personal-information)
- [Individual Contributions](#individual-contributions)
- [Repo Structure](#repo-structure)
- [Single Cycle Design](#single-cycle-design)
  - [Design Overview: From Lab4 to Project](#design-overview-from-lab4-to-project)
  - [Program Counter](#program-counter)
  - [Instruction Memory](#instruction-memory)
  - [Extend Unit](#extend-unit)
  - [Control Unit](#control-unit)
    - [1. Control Unit Overview](#1-control-unit-overview)
    - [2. ALU Signals](#2-alu-signals)
    - [3. Register and Memory Signals](#3-register-and-memory-signals)
    - [4. Jump Signals](#4-jump-signals)
    - [5. Extend Signal](#5-extend-signal)
  - [Data Memory](#data-memory)
  - [ALU](#alu)
  - [Top Level Design](#top-level-design)
  - [Testbench](#testbench)
  - [Shell Script](#shell-script)
  - [Assembly Language (F1)](#assembly-language-f1)
  - [F1 Design VS Ref Design](#f1-design-vs-ref-design)
    - [1. Data Memory](#1-data-memory)
    - [2. Trigger Signal](#2-trigger-signal)
    - [3. Testbench](#3-testbench)
- [Pipeline Design](#pipeline-design)
    - [Design Overview](#design-overview)
    - [Forwarding Logic](#forwarding-logic)
    - [Stall Logic](#stall-logic)
    - [Flush Logic](#flush-logic)
- [Data Memory Cache Design](#data-memory-cache-design)
  - [Design Overview](#design-overview-1)
  - [Direct Mapped Cache](#direct-mapped-cache)
    - [Parameters](#parameters)
    - [Read and Write Policy](#read-and-write-policy)
    - [Implementation](#implementation)
  - [2-Way Associative Cache](#2-way-associative-cache)
    - [Parameters](#parameters-1)
    - [Read and Write Policy](#read-and-write-policy-1)
    - [Implementation](#implementation-1)
- [Tests](#tests)
  - [Test Instructions](#test-instructions)
  - [Reference Program](#reference-program)
    - [Desired Results](#desired-results)
    - [Test Results](#test-results)
  - [F1 Program](#f1-program)
    - [Desired Results](#desired-results-1)
    - [Test Results](#test-results-1)



----
## Project Brief
----

This project aims to build a reduced RISC-V RV32I Processor that is able to execute two programs, as specified in the project brief. Tests are taken to verify the processor design and F1 Algorithm. 

Two additional stretch goals are specified for advanced implementation:
1. Pipelined RV32I design.
2. Data Memory Cache.

Through joint efforts, Group 17 has successfully implemented the F1 algorithm in assembly language, verified the program and RV32I design, implemented a pipelined RV32I, and included data memory cache. 
 
----
## Personal Information
----

| Name         | CID     | Github     | Email                        | Link to Personal Statement                                                                                                                                  |
|--------------|---------|------------|------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Tingxu Chen  | 2221097 | ccchloe510 | tingxu.chen22@imperial.ac.uk | [Personal Statement](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/main/Personal%20Statements/Tingxu%20Chen%20Personal%20Statement.md) |
| Yiyao Zhou   | 2213516 | TaylorZYY  | yiyao.zhou22@imperial.ac.uk  | [Personal Statement](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/main/Personal%20Statements/Yiyao%20Zhou%20Personal%20Statement.md)  |
| Haocheng Fan | 2262158 | franfafdaf | frank.fan22@imperial.ac.uk   | [Personal Statement](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/main/Personal%20Statements/Haocheng%20Fan%20PS.md)                  |
| Guanxi Lu    | 2233412 | lgxi24     | guanxi.lu22@imperial.ac.uk   | [Personal Statement](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/main/Personal%20Statements/Guanxi%20Lu%20Personal%20Statement.md)   |

<br>

----
## Individual Contributions
----

<br>

| Version                  | Section                              | File Name              | Tingxu Chen | Yiyao Zhou | Haocheng Fan | Guanxi Lu |
|--------------------------|--------------------------------------|------------------------|-------------|------------|--------------|-----------|
| **SingleCycle_Ref**          | PC                                   | pc_top.sv              | X           |            | P            |           |
|                          | Instruction Memory                   | instr_mem.sv           |             |            |              | X         |
|                          | Extend                               | extend.sv              |             |            | P            | X         |
|                          | Register File                        | reg_file.sv            |             | X          | P            | P         |
|                          | Control Unit                         | ALU_decode.sv          |             |            | p            | X         |
|                          |                                      | control_unit.sv        |             |            | P            | X         |
|                          |                                      | main_decode.sv         |             |            | P            | X         |
|                          |                                      | PCSrc_Decode           |             |            | P            | X         |
|                          | Data Memory                          | DataMemory.sv          | X           |            | P            | P         |
|                          |                                      | DataMux.sv             | X           |            | P            |           |
|                          | ALU                                  | alu_top.sv             |             | X          |              |           |
|                          | Testbench and Shell Script           | doit.sh                |             |            | X            |           |
|                          |                                      | top_tb.cpp             |             |            | X            |           |
|                          | Debug and Testing                    | top.sv                 |             |            | P            | X         |
|                          |                                      | `debug`                |             |            | X            | X         |
| **SingleCycle_F1**           | Assembly Language                    | F1.s                   | U           | U          | U            | X         |
|                          |                                      | F1.mem                 |             |            |              | X         |
|                          | Testbench and Shell Script           | top_tb.cpp             |             |            | P            | X         |
|                          | Debug and Testing                    | `debug`                |             |            | X            | X         |
| **Pipelined_NOP_F1**         |                                      | F1.s                   | U           | U          |              |           |
|                          |                                      | F1.mem                 | U           | U          |              |           |
| **Pipeline_NOP_Ref**         |                                      | pdf.s                  | U           | U          |              |           |
|                          |                                      | pdf.hex                | U           | U          |              |           |
| **Pipelined_Ref**            | Pipelining                           | Stage1.sv              |             |            | X            |           |
|                          |                                      | Stage2.sv              |             |            | X            |           |
|                          |                                      | Stage3.sv              |             |            | X            |           |
|                          |                                      | Stage4.sv              | U           |            | X            |           |
|                          |                                      | Stage.sv               |             |            | X            |           |
|                          | Hazard Unit                          | HazardUnit.sv          | U           | U          | X            |           |
|                          | Debug and Testing                    | `debug`                |             |            | X            |           |
| **Pipelined_F1**             | Debug and Testing                    | `debug`                |             |            | X            |           |
| **Cache_Unused_Direct&4way** | Direct Mapped Cache                  | direct_mapped_cache.sv | U           | U          |              |           |
|                          | 4-Way Associative Cache              | cache.sv               | U           | U          |              |           |
| **Cache_Ref_Direct_Mapped**  |                                      | direct_cache_memory.sv |             |            |              | X         |
|                          |                                      | `debug`                |             |            |              | X         |
| **Cache_Ref_2Way**           | 2-Way Block Size 1 Associative Cache | Cache.sv               |             |            | X            |           |
|                          |                                      | CacheMux.sv            |             |            | X            |           |
|                          |                                      | `debug`                |             |            | X            |           |
| **Administrative**           | Repo Master                          | `Repo Master`          |             |            | P            | X         |
|                          | Joint Statement                      | `Joint Statement`      |             |            | P            | X  |

Note: 
`X` = Full Participation
`P` = Partial Participation (modification or debug)
`U` = Unused Version


> **Note:** We would like to acknowledge that, due to inadvertent errors in version control, the commit history on the `top` branch may not accurately represent the contributions of the group members. Notably, some files from the `top` branch, which were subsequently merged into the `SingleCycle_F1`, `SingleCycle_Ref`, `Pipelined_F1`, and other branches, were copied instead of being merged from the individual branches (`FHC`, `LGX`, `ZYY`, `CTX`). As a result, in the event of any conflicts, please refer to the table mentioned above for accurate attribution of work.

----
## Repo Structure
----
The group decided to control the version in the following way:
- Each member completes their own section in their own branch.
- One member merges the individual work together, creating `top.sv` for testing.
- Members test and debug the `Single Cycle` version on the `top` branch.
- Once the `Single Cycle` versions are completed, they are separately stored in a new branch.
- Members continue developing the `Pipelined` and `Cache` versions on the `top` branch.
- Once the `Pipelined` and `Cache` versions are completed, they are separately stored in a new branch.
- The final version and `test` folders are completed.

The repo structure can be viewed in the picture below.

<div align="center">
  <img src="Images/Repo Structure.png" alt="Repo Structure">
</div>

<br>

**Note: Only the `test` folder in `SingleCycle_F1` and `Pipelined F1` branches contains F1 Program.**
<br>
This policy leads to both advantages and drawbacks:
- During the individual work stage, all the group members work on separate branches, ensuring their work is not disrupted.
- After all sections are merged, only one final version exists, and all members debug the same version.

- Individual contributions may become unclear, with contributions possibly being attributed incorrectly to different team members due to the commit history, especially when all individual branches are merged. This issue may be mitigated with increased familiarity with Git commands.
- Only one or two members can debug at a time, as simultaneous debugging by more members might cause version conflicts.

-----
## Single Cycle Design
----
### Design Overview: From Lab4 to Project
Lab4 requires group members to complete a reduced RV32I design, to execute a program that consists only two instructions, `ADDI` and `BNE`.

```s
main: 
    addi    t1, zero, 0xff      # load t1 with 255
    addi    a0, zero, 0x0       # a0 is used for output 

mloop: 
    addi    a1, zero, 0x0       # a1 is the counter , init to 0

iloop: 
    addi    a0, a1, 0x0         # load a0 with a1
    addi    a1, a1, 0x1         # increment a1
    bne     a1, t1, iloop       # if a1 == 255, jump to iloop
    bne     t1, zero, mloop     # else always branch to mloop
```

The design, as illustrated in the diagram below, adheres closely to the Project's framework. However, the ALU block is notably simplified, performing only addition (`+`) and subtraction (`-`) operations. This simplification results in a significantly reduced control logic.

![Reduced RV32I CPU](Images/microarchitecture.jpg)

<p align="center">
    <span style="color: grey;">
        Reduced RV32I CPU, Cited from  
        <a href="https://github.com/EIE2-IAC-Labs/Lab4-Reduced-RISC-V?tab=readme-ov-file#the-microarchitecture-of-the-reduced-risc-v-cpu">Project Brief</a>
    </span>
</p>

In the project, the increase in the number of instructions to be implemented necessitates a more intricate control logic. This complexity arises from the introduction of additional control signals and the expansion in the bit number of some signals. 

Moreover, a generalized logic must be established to accommodate various types of instructions, including those within the same category. For instance, the `JALR` and `ADDI` instructions are both of I-type, yet they exhibit significant functional differences. Consequently, it is imperative to maintain simplicity in the design (avoiding excessive use of multiplexers or additional blocks) while ensuring the accurate implementation of the desired instructions.

Additionally, the project incorporates a `Data Memory` block to execute instructions like `LW` and `SW`. Following this modification, a memory map, as displayed below, is utilized as a reference for the design. This memory map delineates the allocation of memory for the Instruction Memory and Data Memory, and all designs are expected to adhere strictly to this layout.

<div align="center">
  <img src="Images/memory.jpg" alt="Memory">
</div>

<p align="center">
    <span style="color: grey;">
        Memory Map, Cited From 
        <a href="https://github.com/EIE2-IAC-Labs/Project_Brief/blob/main/TeamProject.md#learning-the-rv32i-instruction-set">Project Brief</a>
    </span>
</p>

The Project Brief provides a design example, as shown in the diagram below, which introduces several new control signals. 

<div align="center">
  <img src="Images/single-cycle.jpg" alt="Sample RV32I CPU">
</div>

<p align="center">
    <span style="color: grey;">
        Sample RV32I CPU, Cited from 
        <a href="https://github.com/EIE2-IAC-Labs/Project_Brief?tab=readme-ov-file#single-cycle-rv32i-design">Project Brief</a>
    </span>
</p>

However, it was discovered in practice that this structure is insufficient for implementing all the required signals. For example, the `JALR` instruction necessitates the program counter (`PC`) to become `RS1 + ImmExt`, a functionality not supported by the current design. Furthermore, specific blocks like the `Control Unit` and `Data Memory` require refined designs, either to simplify the structure or to accommodate particular instructions, which will be elucidated in subsequent sections.

In light of these findings, we modified the design (as depicted in the diagram below) to provide an appropriate structure for executing all the instructions in our program. Detailed explanation of specific blocks will be provided in the sections below. 

![Overview](/Images/Overview.png)
<p align="center">
    <span style="color: grey;">
        Single Cycle Design Overview
    </span>
</p>

Among all the RV32I instructions, 18 are implemented, covering all 6 types of instructions. The **List of Instructions** is shown in the table below.
 
| No | Type   | Instruction | No | Type   | Instruction |
|----|--------|-------------|----|--------|-------------|
| 1  | R-type | ADD         | 12 | S-type | SW          |
| 2  |        | SUB         | 13 |        | SB          |
| 3  |        | AND         | 14 | B-type | BEQ         |
| 4  |        | XOR         | 15 |        | BNE         |
| 5  | I-type | ADDI        | 16 | U-type | LUI         |
| 6  |        | SLLI        | 17 |        | AUIPC       |
| 7  |        | SRLI        | 18 | J-Type | JAL         |
| 8  |        | ANDI        |    |        |             |
| 9  |        | LW          |    |        |             |
| 10 |        | LBU         |    |        |             |
| 11 |        | JALR        |
### Program Counter
The program counter (`PC`) determines which instruction will be executed in each cycle. In this design, the Instruction Memory starts from `BFC00000` and extends to `BFC00FFF`, indicating that the initial value of PC (set to `0` in Lab4) should be `BFC00000`. 

**Typically, the PC increments by 4** due to the nature of byte addressing. In our CPU, each memory location holds 1 byte of data/instruction (equivalent to 8 bits). Given that the instruction and data widths in the RV32I CPU are both 32 bits, occupying 4 memory locations, the PC must increase by 4 to execute the next instruction.

However, there are special cases in our design where the PC is relocated to a different value, as outlined in the table below.

| Instruction | Operation on PC  |
|-------------|------------------|
| BEQ         | PC = PC + Imm12  |
| BNE         | PC = PC + Imm12  |
| JAL         | PC = PC + Imm20  |
| JALR        | PC = RS1 + Imm12 |

What's more, the `rst` signal sets `PC` to the start of the program. Once `rst` is asserted, the value of `PC` becomes `BFC00000`

Operations on the PC can be classified easily, allowing for straightforward implementation in our design.

- A MUX determines if a `Jump` or `Branch` operation is required.
- For `Branch` instructions, the operation is always `PC = PC + Imm12`.
- For `Jump` instructions, the CPU needs to determine whether to add `PC` or `RS1` to `ImmExt`, with the value of `ImmExt` varying based on the instruction type.

![PC](/Images/PC.png)
<p align="center">
    <span style="color: grey;">
        Program Counter
    </span>
</p>


### Instruction Memory
Instruction memory stores the executable instructions. As defined by the memory map, Instruction Memory spans 12 bits (from `BFC00000` to `BFC00FFF`). Consequently, the address length (`A_length`) is set to 12 bits. Additionally, since the data follows byte-addressing, the data length (`D_length`) is set to 8 bits.

In this design, the Instruction Memory comprises a memory array with a size of $2^{12} = 4096$ blocks. During each cycle, 4 blocks are concatenated to form the data output (`RD(Instr)`).

It is important to note that RISC-V is a byte-addressing processor employing a little-endian format, where the least significant byte is stored in the lower address. For instance, if the machine code is `F1F2F3F4`, it is stored as follows:

```
Location:   00 01 02 03
Data:       F4 F3 F2 F1 
```
Therefore, the assembly of `RD` from the memory array is executed using the following SystemVerilog assignment:
```SystemVerilog
assign RD = {rom_array[A+3], rom_array[A+2], rom_array[A+1], rom_array[A]};
```

### Extend Unit
The Extend Unit is responsible for fetching parts of the instruction and extending them according to the Instruction Set Architecture (ISA). Among the six types of instructions in RV32I, the I-type, S-type, B-type, U-type, and J-type require extension.

![Instruction Extend](/Images/Instruction%20Extend.png)
<p align="center">
    <span style="color: grey;">
        Cited from RV32I ISA
    </span>
</p>

There are two key points to note. Firstly, all immediates in RV32I are sign-extended. Secondly, the union of bits covered by the immediates is `31:7`; therefore, fetching these instruction bits would be sufficient.

Our group has designed a mapping for the `ImmSrc` with corresponding extension operations, as demonstrated in the table below. Given that five types of instructions require extension, three bits of `ImmSrc` are necessary.

| ImmSrc[2:0] | 000                                 | 001                                              | 010                                                            | 011                                                              | 100                             | 101        | 110        | 111        |
|-------------|-------------------------------------|--------------------------------------------------|----------------------------------------------------------------|------------------------------------------------------------------|---------------------------------|------------|------------|------------|
| Type        | I-type                              | S-type                                           | B-type                                                         | J-type                                                           | U-type                          | Unoccupied | Unoccupied | Unoccupied |
| Extension Operation | `{{20{Instr[31]}}, Instr[31:20]}` | `{{20{Instr[31]}}, Instr[31:25], Instr[11:7]}` | `{{20{Instr[31]}}, Instr[7], Instr[30:25], Instr[11:8], 1'b0}` | `{{12{Instr[31]}}, Instr[19:12], Instr[20], Instr[30:21], 1'b0}` | `{Instr[31:12], {12{0}}}` |

In the `Extend` Unit, mapping the decoded `ImmSrc` to the appropriate extension operations is straightforward.

### Control Unit
The Control Unit is pivotal in determining the control signals based on instructions. It fetches three segments, `Opcode`, `funct3`, and `func75` from `Instr`, and a distinct signal `Zero` from the `ALU`. These four output signals collectively decide the control signals, determining the operations of other blocks in the processor. 

#### 1. Control Unit Overview
The table below presents the control signals corresponding to the 18 instructions implemented in the RV32I CPU design. Each instruction type is distinguished by different colors. Among which, blue columns represent input signals, while grey columns (`PCSrc` and `ALUControl[2:0]`) indicate signals requiring two-layer decoding.

<div align="center">
  <img src="Images/Control Signal.png" alt="Control Signals">
</div>
<p align="center">
    <span style="color: grey;"> 
    Control Signal Table
    </span>
</p>

The Control Unit is formed of three decoders:
- The `Main Decoder` utilizes `Opcode[5]` and `funct3` from `Instr`, decoding most signals and providing inputs for other decoders.
- The `PCSrc Decoder` decodes the `PCSrc` signal using the `Branch` and `Jump` signals from the `Main Decoder`, along with the `Zero` signal from the `ALU`.
- The `ALU Decoder` decodes the `ALUControl[2:0]` signal. It receives `ALUOp[1:0]` from the `Main Decoder`, as well as `Opcode[5]`, `funct3`, and `func75` from `Instr`.

The diagram below illustrates the hierarchical relationship among these three decoder units.

<div align="center">
  <img src="Images/Control Unit.png" alt="Control Unit">
</div>
<p align="center">
    <span style="color: grey;"> 
    Single Cycle Processor Control Unit
    </span>
</p>

**"Don't Care" signals are uniquely processed** since Verilator does not support them. In practical implementation, all "Don't Care" signals are set to 0. **This does not impact the overall result**, as these signals aren't expected to occur in any valid situations. 

#### 2. ALU Signals
The `ALUSrcA`, `ALUSrcB`, `ALUOp`, and `ALUControl` signals are categorized as ALU signals.

`ALUSrcA` and `ALUSrcB` determine the values for `SrcA` and `SrcB`, the input signals to the `ALU`. The potential inputs for `SrcA` are `PC` and `RD1`, and for `SrcB`, they are `RD2` or `ImmExt`. The decoding logic is as follows:

- R-type instructions use `RD1` and `RD2` respectively for `SrcA` and `SrcB`.
- I-type instructions use `RD1` and `ImmExt`.
- S-type instructions use `RD1` and `ImmExt`.
- B-type instructions, which compare two register values, use `RD1` and `RD2`.
- U-type instructions are more complex:
    - For the `LUI` instruction, which loads the immediate, `SrcA` is unused, and `SrcB` selects `ImmExt`.
    - The `AUIPC` instruction uses both `PC` and `ImmExt`.
- J-type instructions do not use `SrcA` or `SrcB`, rendering both `ALUSrcA` and `ALUSrcB` as "Don't Care"s.

`Main Decoder` provides an initial logic to generate `ALUOp`, varying for each instruction type. The association is shown in the following table, where I-type and S-type share the same `ALUOp` due to similar ALU usage in `Load` and `Store` instructions.

| Instruction Type | I&S | B  | R  | U  | J  |
|------------------|-----|----|----|----|----|
| ALUOp[1:0]       | 00  | 01 | 10 | 11 | XX |

The `ALU Decoder` then deciphers the `ALUControl` signal, with each value representing a specific operation. A special case is `110`, designated for "Select SrcB" and aligning with the `LUI` instruction's sole selection of the sign-extended immediate.

| ALUControl[2:0] | 000 | 001 | 010 | 011 | 100 | 101 | 110         | 111           |
|-----------------|-----|-----|-----|-----|-----|-----|-------------|---------------|
| ALU Operation   | Add | Subtract | AND | OR  | Shift Right | XOR | Select SrcB | Shift Left |

#### 3. Register and Memory Signals
`ResultSrc`, `MemWrite`, `RegWrite`, `LdSrc`, and `StSrc` are categorized as Register and Memory Signals.

The RV32I design offers three alternatives for the `Result` signal written to the Register File:
- For instructions that use ALU, `ResultSrc` is `00`, directly passing the ALU result to the register.
- For `Load` instructions that fetch from memory, `ResultSrc` is `01`, writing data from memory to the register.
- For `JAL` and `JALR` instructions, where `RD = PC + 4`, `ResultSrc` is `10`, and `PCPlus4` is written to the register.

`MemWrite` and `RegWrite` signals follow straightforward decode logic:
- `MemWrite` is set only for `Store` instructions; otherwise, it is 0.
- `RegWrite` is 0 for S-type and B-type instructions, which do not write to the register. When relevant, `LdSrc` and `StSrc` act as `SELECT` bits of the MUX. The decoding logic for the two `Load` and `Store` instructions used is simple.

`LdSrc` operates solely for `Load` instructions, while `StSrc` is specific to `Store` instructions. In other scenarios, their values are considered "Don't Care"s:
- `LdSrc` equals 1 for `LBU` instructions, otherwise indicating `LW`.
- `StSrc` equals 1 for `SB` instructions, otherwise indicating `SW`.

#### 4. Jump Signals
`Branch`, `Jump`, `PCSrc`, and `JalSrc` are categorized as Jump Signals.

`Branch` and `Jump` detect whether an instruction is a Jump or Branch type, setting their values to 1 accordingly.

The `PCSrc` signal indicates if the `PC` is to be redirected to a specific value. When `Jump` is 1, so is `PCSrc`. For B-type Instructions, the `Zero` signal is also considered: `PC` is redirected for `BEQ` only if `Zero` is True, and for `BNE`, the opposite applies.

`JalSrc` is specific to `Branch` and `Jump` instructions:
- Its value is 1 for `BEQ`, `BNE`, and `JAL`, indicating `PC` added to `ImmExt`.
- For `JALR`, `JalSrc` is 0, where `RS1` is added to `ImmExt`.

#### 5. Extend Signal
`ImmSrc` is the sole Extend signal, dictating the extension methodology for the immediate part of the instruction. `ImmSrc` varies across different instruction types, and its relationship with each type is detailed in the [Extend Unit Section](#extend-unit), and the table is also attached below. The table below outlines how `ImmSrc` is assigned based on the instruction type:

| ImmSrc[2:0] | 000                                 | 001                                              | 010                                                            | 011                                                              | 100                             | 101        | 110        | 111        |
|-------------|-------------------------------------|--------------------------------------------------|----------------------------------------------------------------|------------------------------------------------------------------|---------------------------------|------------|------------|------------|
| Type        | I-type                              | S-type                                           | B-type                                                         | J-type                                                           | U-type                          | Unoccupied | Unoccupied | Unoccupied |
| Extension Operation | `{{20{Instr[31]}}, Instr[31:20]}` | `{{20{Instr[31]}}, Instr[31:25], Instr[11:7]}` | `{{20{Instr[31]}}, Instr[7], Instr[30:25], Instr[11:8], 1'b0}` | `{{12{Instr[31]}}, Instr[19:12], Instr[20], Instr[30:21], 1'b0}` | `{Instr[31:12], {12{0}}}` |

### Data Memory
Data Memory facilitates the execution of `Load` and `Store` instructions. For `Load` instructions, data from memory written to registers, whereas for `Store` instructions, data from registers is written to memory.

The diagram below depicts the structure of `Load` and `Store` instructions. `Load` instructions, which are I-type, read data from the memory location `RS1 + Imm[11:0]` and write it to `RD`, with `funct3` differentiating various `Load` types. Conversely, `Store` instructions are S-type, where data from the register `RS2` is written to the memory location `RS1 + Imm[11:0]`, and here too, `funct3` serves to distinguish among different `Store` types.

![Load&Store](/Images/Load&Store.png)
<p align="center">
    <span style="color: grey;">
        Load & Store Structure, Cited from RV32I ISA
    </span>
</p>

As indicated in the memory map, Data Memory spans from `00000000` to `0001FFFF`, necessitating an address length of 17 bits. Adhering to byte-addressing, the data length (`DATA_WIDTH`) is also set to 8 bits. Consequently, Data Memory comprises a memory array of $\(2^{17} = 131072\)$ blocks.

For the standard `LW` (load word) instruction, Data Memory transfers data from memory to register using a little-endian format. The reverse process is applied for the `SW` (store word) instruction. However, the assembly language also requires the implementation of `LBU` (load byte unsigned) and `SB` (store byte). `LBU` loads the least significant 8 bits, extended to 32 bits without sign extension, into the register. `SB` **alters only the specific memory block** addressed by `RS1 + Imm[11:0]` with the least significant 8 bits of `RS2`, rather than the entire word.

To facilitate this, two additional control signals, `LdSrc` and `StSrc`, are introduced (as detailed in the [Control Unit](#3-register-and-memory-signals) section). These figure out the exact `Load` or `Store` instruction being executed, ensuring the correct corresponding operation.

Further, the Single Cycle Data Memory is conceptualized as a primary memory **with two auxiliary functional blocks**. For `Store` instructions, data passes through an additional `Store` block before entering the `Memory` block. Conversely, for `Load` instructions, data traverses an extra `Load` block before being written to registers.


![Data Memory](/Images/Data%20Memory.png)

### ALU
The ALU is responsible for executing arithmetic and logic operations. In our design, it processes two inputs, `SrcA` and `SrcB`, to produce the output `ALUResult`. 

A MUX is responsible for selecting the appropriate values for SrcA and SrcB respectively. The possible inputs for `SrcA` are `PC` and `RD1`, while for `SrcB`, they are `RD2` or `ImmExt`. The control logic governing these selections is detailed in the [preceding section](#2-alu-signals).

Within the ALU, the operations are determined by the `ALUControl[2:0]` signal, as depicted in the table below. The implementation of these operations follows a straightforward logic.


| ALUControl[2:0] | 000 | 001      | 010 | 011 | 100            | 101 | 110         | 111           |
|-----------------|-----|----------|-----|-----|----------------|-----|-------------|---------------|
| ALU Operation   | Add | Subtract | AND | OR  | Shift Right | XOR | Select SrcB | Shift Left |

### Top Level Design
The top-level design of the system serves as an integrative platform, combining all submodules and establishing the necessary bus connections, thereby exemplifying the concept of hierarchical design. The top-level design encompasses the following modules:

```
pc_top              instr_mem       regfile             alu_top 
control_unit        extend          DataMemory          DataMux
```

Concurrently, assignment statements are utilized to map portions of the bus to specific logic signals. These mappings are highlighted in red in the accompanying diagram.

<div align="center">
  <img src="Images/Top.png" alt="Assembly Language">
</div>


### Testbench
In this section we mainly discuss the testbench for Reference Program. The design incorporates three top-level signals: `clk`, `a0`, `rst`. 

In the testbench for the Reference Program, both `clk` and `rst` are initialized to a value of 1. Subsequently, at each clock cycle, `rst` is set to 0, and the value of `a0` is dumped to a VCD file. A boolean variable, `plot`, is used to monitor the status of `a0`. A non-zero value of `a0` denotes the successful completion of the build process, thus `plot` will enable the plotting on Vbuddy. Furthermore, the program is designed to terminate after a specific number of cycles, which varies depending on the version (either 960 or 1920 cycles).

The testbench for the F1 program differs from that of the Reference Program, details of which are elaborated in the [following section](#f1-design-vs-ref-design).


### Shell Script
The shell script employs Verilator to convert Verilog code into C++, which also includes the C++ testbench.

The roles of the shell script are outlined as follows:
- Clearing out data from previous simulations.
- Use Verilator to convert Verilog into C++.
- Build the C++ project.
- Executing the simulation file.

### Assembly Language (F1)
The reference program is designed to build and display the probability distribution function (PDF) for four signals, employing an algorithm structured as **Initialisation - Build - Display**.

- During the **Initialisation** stage, each `a1` value (representing a "bin") is reset, preparing the bins for data accumulation.
- The **Build** stage involves iterating through the data array. Here, counts are added to respective bins based on the data value, e.g., for a data value of `EE`, the count in the `EE` bin is incremented. This stage terminates when the count in any bin reaches `max_count` or upon completion of the iteration.
- The **Display** stage sees the program iterating through the PDF array, loading count numbers into the `a0` register, and generating the corresponding output.

```s
# PDF program
.text
.equ base_pdf, 0x100
.equ base_data, 0x10000
.equ max_count, 200
main:
    JAL     ra, init  # jump to init, ra and save position to ra
    JAL     ra, build
forever:
    JAL     ra, display
    J       forever

init:       # function to initialise PDF buffer memory 
    LI      a1, 0x100           # loop_count a1 = 256
_loop1:                         # repeat
    ADDI    a1, a1, -1          #     decrement a1
    SB      zero, base_pdf(a1)  #     mem[base_pdf+a1) = 0
    BNE     a1, zero, _loop1    # until a1 = 0
    RET

build:      # function to build prob dist func (pdf)
    LI      a1, base_data       # a1 = base address of data array
    LI      a2, 0               # a2 = offset into of data array 
    LI      a3, base_pdf        # a3 = base address of pdf array
    LI      a4, max_count       # a4 = maximum count to terminate
_loop2:                         # repeat
    ADD     a5, a1, a2          #     a5 = data base address + offset
    LBU     t0, 0(a5)           #     t0 = data value
    ADD     a6, t0, a3          #     a6 = index into pdf array
    LBU     t1, 0(a6)           #     t1 = current bin count
    ADDI    t1, t1, 1           #     increment bin count
    SB      t1, 0(a6)           #     update bin count
    ADDI    a2, a2, 1           #     point to next data in array
    BNE     t1, a4, _loop2      # until bin count reaches max
    RET

display:    # function send PDF array value to a0 for display
    LI      a1, 0               # a1 = offset into pdf array
    LI      a2, 255             # a2 = max index of pdf array
_loop3:                         # repeat
    LBU     a0, base_pdf(a1)    #   a0 = mem[base_pdf+a1)
    addi    a1, a1, 1           #   incr 
    BNE     a1, a2, _loop3      # until end of pdf array
    RET
```

In the F1 program, a similar algorithm is adopted, structured as **Initialisation - Generation Light Up - Countdown**. The detailed process is as follows:
- In the `Init` section, thresholds are established, including the fixed countdown value.
- The `rst` section is responsible for resetting the variables.
- During the `mainloop` loop, a 7-bit LFSR (Linear Feedback Shift Register), initialized at 0x7F, is generated.
- In the `light_up` loop, the output register `a0` incrementally increases from `0000_0000` to `0000_0001`, and ultimately to `1111_1111`. Following each increment, the program enters the `lightdelay` loop to perform a fixed-number countdown.
- The `lightdelay` and `final_random` loops conduct countdowns based on a fixed number and a pre-generated random number, respectively.
- Upon completion of the countdown in `final_random`, the program returns to the `rst` section to reinitialize all values.

The algorithm's flow is visually represented in the diagram below, with straight lines illustrating unconditional jumps, and red curves indicating conditional branches.

<div align="center">
  <img src="Images/Assembly Language.png" alt="Assembly Language">
</div>

### F1 Design VS Ref Design
Upon testing the Single Cycle design on Reference program, the design is modified to accomodate the F1 program as explained above. There are a few points that differs F1 design from Ref Design. 

#### 1. Data Memory
The Reference Program utilizes `load` and `store` instructions such as `LW` and `SB`. However, the F1 design omits these instructions, resulting in no data being written to or read from the Data Memory.

This design choice is linked to the method of pseudo-random number generation in the F1 program. Before the trigger signal is asserted, the program iterates through a loop generating random numbers.

One alternative could involve pre-generating all random numbers and storing them in the data memory. Subsequently, the program could map the `PC` value to a specific location in the data memory to read the random number. However, `PC` would be a constant value at the point where a random number is requested to be loaded. In this case, this approach would transform the random number into a constant, as a fixed one in random number series would exist for a fixed `PC`. 

Another strategy might be to generate a new random number each time `PC` changes, making the random number a by-product of the varying `PC`. However, this could significantly increase the program's complexity, an unnecessary complication.

For the data memory of the reference program, the diagram below illustrates the memory organization. The `data_array` consists of pre-generated values from memory files like `sine.mem`, while the `pdf_array` represents the accumulation in each "bin." Separate memory segments are allocated for `data_array` and `pdf_array`.

<div align="center">
  <img src="Images/memory_map.jpg" alt="Memory Map Reference Program">
</div>
<p align="center">
    <span style="color: grey;"> 
    Cited from 
        <a href="https://github.com/EIE2-IAC-Labs/Project_Brief/tree/main/reference#new-memory-map">Reference Program</a>
    </span>
</p>

#### 2. `Trigger` Signal
A significant difference between the F1 and Reference Programs is the `trigger` signal. As described in the [Project Brief](https://github.com/EIE2-IAC-Labs/Project_Brief/tree/main?tab=readme-ov-file#learning-the-rv32i-instruction-set), "The trigger signal is used to initiate the F1 light sequence in the RISC-V."

<div align="center">
  <img src="Images/RISC-V_F1.jpg" alt="F1 Overview">
</div>
<p align="center">
    <span style="color: grey;"> 
    RV32I F1 Overview, Cited from 
        <a href="https://github.com/EIE2-IAC-Labs/Project_Brief/tree/main?tab=readme-ov-file#learning-the-rv32i-instruction-set">Project Brief</a>
    </span>
</p>

In the `F1.s` assembly program, the `t0` register (`x5`) is used to represent the `Trigger` signal. At the beginning of the `mainloop`, its value is compared with the pre-defined `s1` register to determine if the `trigger` signal has been activated, as depicted in the program extract below.

```s
# F1.s
init:
    addi s1, zero, 0x1      /* trigger destination set as 1 */
...
rst:
...
    addi t0, zero, 0x0      /* t0 is trigger */

mainloop:
    beq  t0, s1, light_up   /* trigger? */
...
``` 

In physical testing, the push-button switch on the Vbuddy functions as the `trigger`. This is configured in the testbench with the line 

```C++
top->trigger = vbdFlag();
``` 

Additionally, Register `t0` in the register file is designated for the trigger signal. Therefore, an extra line is incorporated into `reg_file.sv` to facilitate this:
```SystemVerilog
assign     register[5] = trigger;
```
The modified `reg_file.sv` is illustrated as the diagram below. 
<div align="center">
  <img src="Images/Regfile F1.png" alt="F1 Overview">
</div>


#### 3. Testbench
As mentioned earlier, the F1 Program employs a distinct testbench from that of the Reference Program. In this testbench, the 32-bit output `a0` is transformed into an 8-bit `data_out` by masking the top 24 bits. Subsequently, the `vbdBar()` function is invoked to display `data_out` on the neopixel.


----
## Pipeline Design
----

### Design Overview
Pipelining is a highly useful and widely applied technique in processor design. Through pipelining, performance can be greatly enhanced. Our pipelined processor design divides the single-cycle processor into five stages:

- **F:** Fetch Instruction
- **D:** Decode
- **E:** Execute ALU
- **M:** Memory Read and Write
- **W:** Write Register

It's worth mentioning that instructions will not necessarily use all of these five stages. Pipelining executes different stages for different instructions in the same cycle. For example, after the first instruction completes the **F** stage, the second instruction executes its **F** stage at the same time as the first instruction executes its **D** stage.

Although this technique seems simple, it also raises problems: data hazards and control hazards can exist. A straightforward way to deal with hazards is to add `NOP` instructions between the "useful" ones, which can reduce performance. A more advanced method is to introduce a Hazard Unit to implement **Forwarding**, **Stall**, and **Flush**.

The following diagram (modified based on [H&H Digital Design and Computer Architecture, RISC-V Edition: RISC-V Edition](https://www.sciencedirect.com/book/9780128200643/digital-design-and-computer-architecture)) illustrates the Pipelined Processor design with a Hazard Unit, as implemented in our project.

The pipelined version is applied to both the F1 Program and the Reference Program.

  <div align="center">
    <img src="Images/hazard.png" alt="Pipeline with Hazard Unit">
  </div>

### Forwarding Logic
Forwarding is necessary when the result of an instruction is required by subsequent instructions before it has been written back to the register. Consider the following program snippet as an example, where the value of `s8` needs to be forwarded:
```s
add s8, s4, s5
sub s2, s8, s3
or  s9, s6, s8
and s7, s8, t2
```
Forwarding can be effectively implemented by integrating MUXes before the ALU to select its operands. In practice, the implementation of this logic can be structured as follows:

```SystemVerilog
//forwarding
if (((Rs1E == RdM) & RegWriteM) & (Rs1E != 0)) ForwardAE = 2'b10;       // Forward from Memory stage 
else if (((Rs1E == RdW) & RegWriteW) & (Rs1E != 0)) ForwardAE = 2'b01;  // Forward from Writeback stage 
else ForwardAE = 2'b00;                                                 // No forwarding (use RF output)
```

### Stall Logic
A Stall is necessary when a subsequent instruction requires data from the destination register of a previous instruction. For instance, in the program below, `s7` needs to be stalled. This means that the second line must wait for the first line to finish in order to receive the correct data:
```s
lw  s7, 40(s5)
and s8, s7, t3
or  t2, s6, s7
sub s3, s7, s2
```

To support stalls, enable inputs (EN) are added to the Fetch and Decode pipeline registers, along with a synchronous reset/clear (CLR) input for the Execute pipeline register. If data needs to be cleared, `FlushE` is used to flush the data. In practice, the implementation of this logic can be structured as follows:

```SystemVerilog
//stall
assign lwStall = ResultSrcE0 & ((Rs1D == RdE)|(Rs2D == RdE)); 
assign StallF = lwStall;
assign StallD = lwStall;
```

### Flush Logic
Flush operations are chosen for addressing control hazards, which occur when a pipelined processor is uncertain about the next instruction to fetch due to an unresolved branch decision. 
Initially, a prediction is made regarding whether the branch will be taken. If this prediction turns out to be incorrect, the results from the incorrectly predicted path must be discarded, a process known as incurring a branch misprediction penalty.

In practice, the implementation of this logic can be structured as follows:

```SystemVerilog
//flush
assign FlushD = PCSrcE;
assign FlushE = lwStall | PCSrcE;
```



----
## Data Memory Cache Design
----

### Design Overview

In CPU architecture, caches play a crucial role in enabling quick read/write operations, thereby enhancing performance. This is achieved by exploiting two key principles: temporal locality and spatial locality. Temporal locality is based on the premise that if data is used once, it's likely to be accessed again soon. Conversely, spatial locality posits that when data is accessed, adjacent data is likely to be needed in the near future. 
Our project has developed two distinct cache designs: Direct Mapped Cache and 2-Way Associative Cache. Notably, both designs utilize a single word as the block size, focusing primarily on leveraging temporal locality. 
Further, as discussed earlier, our F1 program didn't use Data Memory. In this sense, only the Reference Program version using cache is developed. 

### Direct Mapped Cache

#### Parameters:

- **Capacity:** 8 words
- **Block Size:** 1 word
- **Number of Sets:** 8
- **Number of Ways:** 1
- **`Tag_WIDTH`:** 29 bits
- **`Set_WIDTH`:** 3 bits

  <div align="center">
    <img src="Images/direct_mapped_cache.png" alt="Direct Mapped Cache">
  </div>

#### Read and Write Policy

- **Read Policy**
  - **Hit:** Data is directly read from the cache.
  - **Miss:** Data is fetched from memory and then loaded into the cache.
<br>
  <div align="center">
    <img src="Images/Cache_Read.png" alt="Cache Read Policy">
  </div>

- **Write Policy**
  Since a write-through policy is adopted, data is written simultaneously to both the cache and the memory. This approach simplifies implementation but may lead to reduced performance under high write volumes.
<br>
  <div align="center">
    <img src="Images/Cache_Write.png" alt="Cache Write Policy">
  </div>

#### Implementation

- **Overview**
  The cache is integrated with the memory system. Since "memory passes data to cache", implementing cache and memory as separate blocks would complicate the configuration where data can be transferred bidirectionally. The design is illustrated in the diagram below.
<br>
  <div align="center">
    <img src="Images/Cache Memory.png" alt="Cache-Memory Integration">
  </div>

- **Hit Logic**
  A hit occurs when the `inputTag` matches the cache's `tag` and the `valid` bit is set to `TRUE`. The logic can be expressed as:
```SystemVerilog
assign hit = ((tag[inputSet] == inputTag) && (valid[inputSet]));
```
- **Write Logic**
  Write operations realize to `SW` and `SB` instructions. In our write-through approach, data is concurrently written to both the cache and memory. This method ensures data consistency between cache and memory but might impact performance under heavy write operations. The design updates the `tag` and `Hit` signals simultaneously during write operations, and for Hit cases, the singals remain their previous values.

- **Read Logic**
  Read operations realize `LW` and `LBU` instructions. They are implemented using a state machine:
  - In the event of a Hit, the next state is `from_cache`.
  - In the event of a Miss, the next state is `from_memory`.

  <div align="center">
    <img src="Images/state_machine_cache.png" alt="State Machine for Cache Read">
  </div>

  For Miss cases, in addition to updating the `tag` and `Hit`, the data is passed from memory to cache.

  Special attention is given to `LBU` and `SW` instructions, which involve partial word read/write operations through byte addressing. 
  
  Further, Unlike standard word-aligned addressing, RV32I employs byte addressing. Hence, our design adjusts the bit layout for `Set` and `Tag` to accommodate this difference. The last two bits of the address are used for byte offset in byte-addressed systems, allowing for `00`, `01`, `10`, or `11` as possible values. Consequently, we designate the last three bits as `Set` and the preceding 29 bits as `Tag`.

### 2-Way Associative Cache

#### Parameters:

- **Capacity:** 16 words
- **Block Size:** 1 word
- **Number of Sets:** 8
- **Number of Ways:** 2
- **`Tag_WIDTH`:** 29 bits
- **`Set_WIDTH`:** 3 bits

  <div align="center" style="width: 60%; margin: auto;">
    <img src="Personal Statements/../Images/2-wayCache.png" alt="2-way Cache">
  </div>

#### Read and Write Policy

- **Read Policy**
  - **Hit:** Data is directly read from the cache.
  - **Miss:** Data is fetched from memory and then loaded into the cache.

- **Write Policy**
  Adopting a write-through policy, data gets written concurrently to both the cache and the memory. While this method eases implementation, it can potentially diminish performance, especially with a high volume of write operations.

#### Implementation

- **Overview**
  The 2-way cache is designed with a connection to the data memory and a cache multiplexer. This connection serves to fetch data in the event of a miss during a read operation. Within the cache, each block is equipped with `tag` and `valid` components to determine whether the block's content is a hit. When a hit occurs (with hit logic set to 1), the multiplexer selects the cache's output as the memory stage output. Conversely, when there's a cache miss (hit logic is 0), the output selection opts for the data memory's output, which is then loaded into the cache block. This configuration ensures efficient data retrieval and storage within the memory hierarchy of the system. 
- **Hit Logic**
  A hit occurs when the `inputTag` matches the cache's `tag` and the `valid` bit is set to `TRUE`. The logic can be expressed as:
```SystemVerilog
  if ((valid[inputSet][way]) && (tag[inputSet][way] == inputTag)) begin // find the block
```
- **Least Recently Used**
  The `lru` (Least Recently Used) logic determines which cache way has been more recently accessed. If way 1 is identified as more recently used (indicated by `lru`=1), this suggests a higher probability of it being accessed again soon, due to temporal locality. Consequently, subsequent write or read operations will target the content in the alternative way, maintaining the same `tag` and `set`, but differing in the way used.
```verilog
  if (LdSrcM && hit) begin
        lru[inputSet] <= !lru[inputSet]; // rest the least used 
      end
```
- **Write Logic**
  Write operations are executed for and `SB` instructions. In our write-through scheme, data is simultaneously written to both the cache and memory. This approach maintains data consistency between cache and memory, though it may affect performance during intensive write operations. The design involves updating the `tag` and `Hit` signals concurrently during these write operations. In instances of a cache hit, these signals retain their previous values.

- **Read Logic**
  When a hit occurs, the output is sourced from the cache memory. Conversely, in the event of a miss, data is loaded to the sepcific block in cache from data memory, and the output for the current cycle is derived from this data memory.
  
----
## Tests
----

### Test Instructions
1. Configure Vbuddy
- For Windows user, type 
```
ls /dev/ttyUSB*
```
- For Mac user, type 
```
ls /dev/tty.u*
```
- Copy the name of the USB device
- Go to `rtl/vbuddy.cfg`, paste the name, don't forget the line breaks
2. Go to terminal, type 
```
source doit.sh
```
3. A `.vcd` file will be generated while Vbuddy demonstrating the test results

### Reference Program
#### Desired Results
This program aims to generate the probability distribution function (PDF) for four distinct signals. The theoretical PDFs for these signals are depicted as follows:
- `sine.mem`: a sine wave signal
- `triangle.mem`: a triangular wave signal
- `gaussian.mem`: a noise signal with a Gaussian distribution
- `noisy.mem`: a noisy sine wave signal

<table>
  <tr>
    <td style="text-align: center;"><img src="/Images/sine.jpg" alt="sine"><br><span style="color: grey;">Sine</span></td>
    <td style="text-align: center;"><img src="/Images/triangle.jpg" alt="triangle"><br><span style="color: grey;">Triangle</span></td>
  </tr>
  <tr>
    <td style="text-align: center;"><img src="/Images/gaussian.jpg" alt="gaussian"><br><span style="color: grey;">Gaussian</span></td>
    <td style="text-align: center;"><img src="/Images/noisy.jpg" alt="noisy"><br><span style="color: grey;">Noisy</span></td>
  </tr>
</table>

To change the displayed signal, please go to Data Memory and modify the file name on the line
```
initial $readmemh("sine.mem", data_array, 17'h10000);
```
#### Test Results

### F1 Program
#### Desired Results
This program is designed to simulate the F1 light mechanism, as detailed in the [previous section](#assembly-language-f1):
- Initially, all 8 lights illuminate simultaneously at a unit step **(assumed as 0x8 in our program)**.
- Once all 8 lights are lit, the program initiates a random number countdown **(we using a 7-bit random number, which may take longer than expected)**.
- Upon completion of the countdown, all lights turn off synchronously.

#### Test Results
Attached below are the test results for `SingleCycle_F1`. For the results (video & `.vcd` file) of other branches, refer to the `test` folders. 

**Video**

https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/assets/115477676/a2bccc1f-33a7-404b-9d0b-ee208160491f

**Waveform Explained**
  <div align="center">
    <img src="/Images/SingleCycle_F1.drawio.png" alt="F1 Waveform">
  </div>
