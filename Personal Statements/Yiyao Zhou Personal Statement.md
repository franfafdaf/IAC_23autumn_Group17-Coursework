# Yiyao Zhou's Personal Statement
CID:02213516, Github username:TaylorZYY
##  introduction
In this project, I focused on developing the Register File, Arithmetic Logic Unit (ALU) including the related MUX and two forms of Cache mechanisms. In my personal statement,I am going to explain my work in the following 6 parts:

1. **Register File**
2. **ALU**
3. **Cache**(Collaboration with [Tingxu Chen](https://github.com/ccchloe510))
   - Together with my collaborator, we developed two types of cache mechanisms. In order to show our joint effort, I will mainly explain the Direct Mapped Cache. The 4-Way Associative Cache is only breifly mentioned, please refer to Tingxu Chen's personal statement for more details.
     - **Direct Mapped Cache**
     - **4-Way Associative Cache**
4. **Reflections and Learning**
5. **Challenges and Mistakes**
6. **Future Improvements**

## 1.Register File
---
- **Overview:**
  The `reg_file.sv` module reads from two registers and writes to one register when the write enable signal goes high. It provides direct access to register 10.
  
- **inputs:**
  - **clk:** The clock signal
  - **A1, A2, A3:** 5-bit addresses for the registers to be read (`A1`, `A2`) and written to (`A3`)
  - **WD3:** 32-bit data to be written into the register file
  - **WE3:** Write enable signal

- **outputs:**
  - **RD1, RD2:** 32-bit data outputs from the register file
  - **a0:** Output that provides the value of register 10

- **process：**
  - **[Commit 1](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/d94e1befc5d36e04be753a4ef233814ac497f58f#diff-5c39103c31f3e119753d68911c878fa39988cd4de9c3cc06e7aaf1d9d2958f19)：** Implement basic read and write operations as in Lab4.
  - **[Commit 2](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/c0e69e03d02652aec5b61339886b209ef51ea6a2#diff-5c39103c31f3e119753d68911c878fa39988cd4de9c3cc06e7aaf1d9d2958f19)：** Add output `a0`.
  - **[Commit 3](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/529f67693a8ccd2bb43c26deecb8fb17b132fcf5#diff-5c39103c31f3e119753d68911c878fa39988cd4de9c3cc06e7aaf1d9d2958f19)：** Introduce a write enable signal to control writing to the registers.
  - **[Final Commit](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/zyy/reg_file.sv)：** Implement simpler logic that allows direct access to the register 10 via `a0`.

## 2.ALU
---
- **Overview:**
  The `alu_top.sv` module provides arithmetic and logical operations based on two input operands and a control signal.

- **inputs:**
  - **PC:** 32-bit Program Counter input
  - **RD1，RD2:** 32-bit input operands
  - **ImmExt:** 32-bit immediate value
  - **ALUControl:** 3-bit control signal that determines the operation
  - **ALUSrcA:** Control signal that selects between `PC` and `RD1` for the first operand
  - **ALUSrcB:** Control signal that selects between `ImmExt` and `RD2` for the second operand

- **outputs:**
  - **ALUResult:** 32-bit output of the ALU result
  - **Zero:** A flag that is set to high when the `ALUResult` is zero

- **operations：**
  | ALUControl | operation |
  | --- | --- |
  | 000 | Addition |
  | 001 | Subtraction |
  | 010 | Bitwise AND |
  | 011 | Bitwise OR |
  | 100 | Shift right |
  | 101 | Bitwise XOR  |
  | 110 | Select SrcB |
  | 111 | Shift left |

- **process：**
  - **Commit 1:** Including two modules: [`alu.sv`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/d94e1befc5d36e04be753a4ef233814ac497f58f#diff-7328527108921190114124240be003807f1752fc4f983e48a6afe6d6bcb0f614) which implements operations such as addition, subtraction, logical AND, OR, and set-on-less-than;[`alu_mux.sv`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/d94e1befc5d36e04be753a4ef233814ac497f58f#diff-d6b6e8aff2b0168e90f117dfa03ad18d9b768d722b348757c2102024e73ed1a2) , which is a multiplexer that selects between `ImmExt` and `RD2` based on a control signal.
  - **Commit 2:** Add the `select SrcB` operation to [`alu.sv`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/7345375a0b4e8bc7f3dd586fa49cd512d13bf2cd#diff-7328527108921190114124240be003807f1752fc4f983e48a6afe6d6bcb0f614) and introduce a third moudle [`alu_muxA.sv`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/7345375a0b4e8bc7f3dd586fa49cd512d13bf2cd#diff-de4d8b3c8e991ce440888ff69cacf4e0b8818dbeab5bbbf8682b3a24034c787b), which is a multiplexer that selects between `PC` or `RD1` based on another control signal. Rename the previous mux to `alu_muxB.sv`.
  - **[Commit 3](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/955da2c89e8f682db81bf4f261d2c1b8cdae13c8#diff-7328527108921190114124240be003807f1752fc4f983e48a6afe6d6bcb0f614)：** Add the output signal `Zero` to the `alu.sv` module, which is set to high when the result of the ALU operation is zero.
  - **[Commit 4](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/715015b5cad5e7bbc58dddd9a8f0a6462aee4fdb#diff-5b9ecc708d963edcd24c32bf9cd4e7a12c763cd97c7466af6e13d1e216d29197)：** Realised the inefficiency of writing alu and mux separately and integrate `alu.sv` with two multiplexers into a single `alu_top.sv` module, adding left and right shift operations at the same time.
  - **[Final Commit](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/dc42ba4dc7e3517c82bb2f021b54b46461644aff#diff-5b9ecc708d963edcd24c32bf9cd4e7a12c763cd97c7466af6e13d1e216d29197)：** change the SLT operation to Bitwise XOR according to the requirements.

## 3.Cache
---
- ## Direct Mapped Cache(not used in the final design)
---
- **Overview:**
  The `Direct_Mapped_Cache.sv` module provides faster access than accessing data from main memory by caching frequently accessed data.

- **Parameters:**
  - **SET_WIDTH:** Set width is 3 bits
  - **OFFSET_WIDTH:** Block offset width is 2 bits
  - **TAG_WIDTH:** Tag width is 27 bits
  - **DATA_WIDTH:** Data width is 32 bits
  - **CACHE_LINES:** The Number of sets is 8

- **inputs:**
  - **clk:** The clock signal
  - **data_in:** Data input
  - **address_in:** Address input
  - **we:** Write enable signal
 
- **outputs:**
  - **data_out:** Data output 
  - **cache_hit:** Cache hit signal

- **process：**
  - Commit [`Direct_Mapped_Cache.sv`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/f1bca92fce395beb0b1330499e958dae02881769#diff-d29105ddbb68ea273f52e96338e1ba6509ff0b50cea9a278542b7bb8a495e361) with 8 sets，each containing 8 blocks with valid bits to indicate the validity of the data in that block.  It compares the tag from the input address with the one stored in the cache, if it matches,then hit, the data is returned. When the write enable is high, it writes new data into the cache, updating the tag and the valid bit simultaneously. This cache is tested individually by [`cache_tb.cpp`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/f1bca92fce395beb0b1330499e958dae02881769#diff-8e873dc7cac9d2eb54a4449c28bf5dc29968945f19603d74e7302d1c017a3f19) which gives the [results](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/tree/Cache/test) that we expected.

- ## 4-Way Associative Cache
---
（Only breifly mentioned in my personal statement）

A 4-Way Associative Cache with 8 sets and 32 blocks. It uses a write-back policy and employs a `replace_way_flag` to determine which cache lines should be overwritten with new data.

## 4.Reflections and Learning
---
Through this project，I improved my System Verilog coding skills and gained knowledge about how different components function with in a processor. I learnt how to use GTKwave and write testbenches to debug and test the accuracy of the code. Working on the cache, I gained a deeper understanding of its functions. Constructing it myself made me more enlightened that I didn't achieve from just attending lectures. 

Beside the parts I have already mentioned in my statement, I also tried on solving hazard by writing a [hazard unit](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/b98ee8cd204eebbf93d30359dfa0a3c23daa19db) and by introducing NOPs into [`F1.s`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/Pipelined_NOP_F1/rtl/F1.s) and [`pdf.s`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/Pipelined_NOP_REF/rtl/pdf.s). Although my efforts were only based on a basic understanding from textbooks, and the hazard unit was insufficinet for the final design, I still learnt from this experience.

In addition, I learnt how to use GitHub to share and collaborate on code with my teammates, as well as to track and manage changes to it.

## 5.Challenges and Mistakes
---
When writing the System Verilog code, I was overly focused on its 'orderliness'. I separated many components that could have been consolidated into a single module, believing it would look more pleasing. However, this only decreased efficiency and unintentionally caused difficulties for my teammates.

## 6.Future Improvements
---
As mentioned in the project breif, the cache is a "toy" exercise cause our data memory is already a single-cycle and very fast. It is really hard to tell weather the 4-Way Associative Cache performs better than the Direct Mapped Cache. With more time, I would explore using a processer that is more complex and requires more memory in order to demonstrate that the cache does improve the speed of data memory.
