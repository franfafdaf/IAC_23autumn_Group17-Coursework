## Personal Statement of Tingxu Chen

## Overview
* [PC Module](#pc-module)
* [Data Memory Module](#data-memory-module)
  * [DataMemory](#datamemory)
  * [DataMux](#datamux)
* [Cache Module](#cache)
  * [Direct Mapped Cache](#direct-mapped-cache)
  * [4-Way Associative Cache](#4-way-associative-cache)
* [Mistakes I Made](#mistakes-i-made)
  * [Over-fragmentation](#over-fragmentation)
  * [Insufficient Consideration](#insufficient-consideration)
* [What I Learned](#what-i-learned)
  * [Technical Skills and Tools](#technical-skills-and-tools)
  * [Understanding CPU Architecture](#understanding-cpu-architecture)
* [Future Work](#future-work)

___

## PC Module

This module is central to controlling the program counter (PC) in the architecture. [(pc module commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/6aa6b993b8752f16c7e7337d3006bb28a0c2efe2)

- **Inputs:**
  - `clk`: Clock signal that drives the updates to the program counter.
  - `rst`: Reset signal that initializes the program counter to a predefined address.
  - `PCSrc`: Control signal to select the next value of the PC.
  - `JalSrc`: Control signal to determine the use of the jump address.
  - `ImmExt`: Immediate value for calculating branch addresses.
  - `RD1`: Register data used for jump address calculation.

- **Outputs:**
  - `PC_Plus`: The current PC value incremented by 4, typically used for the next sequential instruction address.
  - `PC`: The next program counter value that will be used by the CPU to fetch the next instruction.

- **Functionality:**
  - The `PC` module updates the program counter based on the provided control signals. It supports standard sequential execution, conditional branches, and jumps. On reset, it sets the PC to a starting address. When enabled, it selects the next PC value based on whether a branch or jump is being taken, or proceeds sequentially.

| Control Signal | Next PC Value               | Description                           |
|----------------|-----------------------------|---------------------------------------|
| `PCSrc`        | `PC_Target` or `PC_Plus`    | Selects between branch target and the next sequential address. |
| `JalSrc`       | `PC_Jump` or `RD1`          | Selects between the jump target and register-based jump address. |

![pc image](../Personal%20Statements/Images/ctx_pc_module.png)
___

## Data Memory Module

### DataMemory

The `DataMemory` module is a critical component that simulates the memory of a CPU. It manages two main operations: storing data into memory and retrieving data from it.

- **Inputs:** 
  - `clk`: Clock signal to synchronize operations.
  - `WE`: Write enable signal for allowing data storage.
  - `StSrc`, `LdSrc`: Signals indicating the type of storage or load operation.
  - `A`: Address in memory where data is stored or retrieved.
  - `WD`: Data to be written into the memory.

- **Outputs:** 
  - `RD`: Data read from the memory.

- **Functionality:** 
  - This module efficiently handles various memory operations, such as reading and writing data. It is designed to work with different types of data load and store instructions, ensuring that data is accurately manipulated according to the CPU's requirements.


In the initial phase of developing the DataMemory module, my focus was primarily on basic load and store operations, specifically handling whole words (32 bits). The first version of the module was straightforward, catering only to these whole-word operations.[(1st version commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/0cbc6d43edb3240f4cd97543063ee1066876af62) As the project progressed, my teammates introduced additional functionality for byte-wise manipulation, allowing us to handle more granular data operations. This enhancement was crucial for operations like SB (store byte) and LBU (load byte unsigned), providing us the flexibility to work with single bytes.So, firstly i only used 'BE' to represent the type of operation.[(2nd version commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/99389ef5d3e26b237e4acf8a502acc6dee36b1b6)
```systemverilog
input logic BE, // Byte enable signal
```
```systemverilog
    always_ff @(posedge clk) begin
         if (WE) begin
             if (BE) begin                //SB
                 mem_array[A] <= WD[7:0];
             end
             else begin                   //SW
                 mem_array[A] <= WD[7:0];
                 mem_array[A+1] <= WD[15:8];
                 mem_array[A+2] <= WD[23:16];
                 mem_array[A+3] <= WD[31:24];
             end
         end
     end

     always_comb begin
         if (BE) begin                        //LBU
             RD = {24'b0, mem_array[Address]};
         end
         else begin                           //LW
             RD = {mem_array[A+3], mem_array[A+2], mem_array[A+1], mem_array[A]};
         end
     end
```
At first, i added 2 blocks to prepare for the correct version of data to be loaded and stored separately. I tried to prepare data in correct version in advance like this:[(3rd version mem in commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/5a9c7c1e9ffbeaf08a1180077f31225f7d7f63c3),
```systemverilog
always_comb begin
     if (StSrc) begin                 //SB
         WD_o ={RD[31:8], WD_i[7:0]}; 
     end
     else begin                      //SW
         WD_o = WD_i;
```
Then, loaded them in the correct format in an independent file like this: [(3rd version mem out commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/6a3e3c46f9b6ce6c86b8ad880c43fbbbe5dadce8)
```systemverilog
always_comb begin
     if (LdSrc) begin                //LBU
         RD_o = {{24'b0}, RD_i[7:0]};
     end
     else begin                      //LW
         RD_o = RD_i;
     end
 end
```
Therefore, in the ram register, we only needed to process them as normal data instead of considering the detailed operation type. Finally, i wrote a top to combine these 3 separate files together to implement the data memory module.[(top combination commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/8f2f756e7f3fa9c44dd746199804985639e9df6f).Unfortunately, this led to complications, and the module didn't function as expected. For the final version, it worked in a single module which was similar and more logical than the 2nd version.[(final version commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/87b4f5e04cdb38b76a5298fe1c16340e928a8256)

### DataMux

This module functions as a data selector. It chooses between different data inputs and directs the chosen data to its output based on a 2-bit control signal.

| Control Signal (`ResultSrc`) | Data Selected |
|-------------------------------|---------------|
| `2'b00`                       | ALU Result (`ALUResult`) |
| `2'b01`                       | Data Memory Read (`ReadData`) |
| `2'b10`                       | Program Counter Increment (`PC_Plus`) |
| Default                       | Zero (32'b0) |

Each input corresponds to a specific scenario in CPU operations, and the `DataMux` selects the appropriate data path in a flexible manner. [(data mux module commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/c4a6135593346b9a64454955b24c7be1a8a59d7b)

![Data module](../Personal%20Statements/Images/ctx_data_module.png)
___

## Cache

### Direct Mapped Cache

Yiyao and I initially implemented a direct-mapped cache approach.The module operates with inputs like the clock signal, address input, and data input, and outputs the data retrieved from the cache along with a hit signal indicating successful data retrieval.[(direct module commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/f1bca92fce395beb0b1330499e958dae02881769) We also write a simple testbench to test for the very basic scenarios. I co-authored this part with Yiyao Zhou and the details of the logic would be in her personal statement.
___

### 4 Way Associative Cache

Since the Direct_mapped_cache was not enough, we implemented a 4-way associative cache with 8 sets independently.[(4-way module commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/e72619723225143b5b0abf1c6b6e8e16d904c5c5) Each set in this cache comprises four lines, and each line is equipped with its own valid and dirty bits. The valid bit in each line indicates whether the data in that line is valid, while the dirty bit shows if the data has been modified since being loaded into the cache.

For the hit processing logic:

- **Hit Detection**: The `hit` signal indicates whether the current cache access has resulted in a hit or a miss. A hit means the data requested by the CPU was found in the cache.

- **Iterating Over Ways**: The `for` loop iterates over the four possible 'ways' in a set of the cache. In a 4-way set-associative cache, there are four potential places (ways) where the requested data might be stored.

- **Selecting the Correct Data**: The `if` statement inside the loop checks the `hit_ways` array to determine which way contains the data that caused the hit. The `hit_ways` array is indexed by the same index as the cache's ways. If `hit_ways[i]` is true, it means the requested data is in way `i` of the current set.

- **Outputting the Data**: When the correct way is identified, the data from that way is assigned to `data_out`, which is the output of the cache module.

- **Handling Misses**: If there's no hit (`hit` is false), it means the requested data was not found in the cache. 

For the replacement strategy:

- **Function of 'replace_way_flag':** This flag is an array where each entry corresponds to a cache set. The value stored in each entry of this array indicates the next line within the respective set that should be replaced.

- **Determining Which Line to Replace:** When a cache miss occurs and all lines in the target set are valid, the cache control logic looks at the 'replace_way_flag' for that set to decide which line to overwrite.

- **Cycling Through Lines:** The value in 'replace_way_flag' is typically incremented each time a line in the set is replaced. For instance, if the current value is 0, indicating the first line was most recently replaced, the next line to be replaced would be line 1, and so on. 

- **Updating the 'replace_way_flag':** After a line is replaced, the replace_way_flag for that set is updated to point to the next line in sequence. 

And then, i wrote a very simple [(testbench commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/84f29ab0822bfa9234d42771058c10a2ff3abcf0) to test the performance of output in different scenarios. For example, some basic tests like this in order to check if the correct hit or miss is detected. 
```c++
         // Repeated writes to the same address
         if (cycle >= 50 && cycle < 55) {
             cache->we = 1;  // Enable write
             cache->address_in = 0x1000;
             cache->we = 0;  // Disable write after repeated writes
         }

         // Read from an unwritten address (expect cache miss)
         if (cycle == 60) {
             cache->we = 0;
             cache->address_in = 0x1020;  // Unwritten address
         }

        // Pipeline Stall Test
         if (cycle == 80) {
             cache->we = 1; // Start write
             cache->address_in = 0x1200;
             cache->data_in = 0x6666;
             // Simulate stall by not changing we to 0 in the next cycle
         }
```
It shows the correct results for basic data_out and hit/miss according to the waveform and the corresponding 'check-and-print' statements.[(test results commit)](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/59443453a40fd88c791f7923187867f79f513738)

___

## Mistakes I made

### Over-fragmentation

In my initial design, I divided the program counter's functionality into overly granular components, such as for `pc_module`, i initially devided it into `pc_plus` and `pc_mux`. This level of decomposition, while granular, imposed a significant burden when it came to integration. The fine dissection provided clear insight into each part's operation but complicated the process of ensuring they worked seamlessly as a whole. An example of this was the segmentation of the PC, which, while making each function clear, made the overall connectivity and integration more cumbersome.

### Insufficient Consideration

The second area of improvement was in comprehensive consideration. My contributions to the [Hazard Unit](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/ctx/hazard_unit.sv) and the [Write Back Stage](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/ctx/WriteBack.sv), for instance, lacked in addressing all the design specifications needed for a robust implementation. They were crafted with an understanding of the general functionality but did not adequately anticipate the intricacies of the entire system's operation, leading to their eventual non-use.

## What I Learned

Throughout the project, I have gained significant knowledge and skills, which I've categorized into two main learning areas:

### Technical Skills and Tools

#### SystemVerilog
Learning SystemVerilog was a cornerstone of my technical development during this project. It was essential for writing simulations and hardware models, allowing me to create accurate representations of the components I was designing. This language provided the means to express hardware design and verification constructs, which was critical for the project.

#### Git
Using Git for version control was another crucial skill I developed. It enabled me to manage changes to the codebase efficiently, collaborate with teammates, and maintain a history of the project's evolution. The ability to revert to previous versions and branch off for new features or tests was invaluable.

### Understanding CPU Architecture

Through the process of updating the [F1](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/0a2a302c688c5d771017f65c39dc40badde29d7a#diff-459ccd3741eab6ef299332d555a1d48bb4194ae7abcec5e2fcf713b273713f4f) and [PDF](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/07987e2013d860883f839faf3294c1c5e5626840#diff-e913dcf4ac9ab2c024452e14dc5f97453138975767976ff363552c00333a4e45) code.For example, in F1 assembly code here,ensuring that the andi instruction doesn't execute too quickly before the result of the srli instruction is available.
```assembly
   srli t1, a3, 2          /* LFSR */     
     nop
     nop
     nop
     andi t1, t1, 0x1
```
incorporating `nop` instructions to resolve software hazards, ensuring safe data processing in pipelined executions, my comprehension of pipelined CPU operations has deepened. 

#### CPU Operation
Working on this project has enhanced my understanding of the RISC-V CPU's operations. I've become familiar with the intricacies of how a CPU processes data and executes instructions, which has been one of the most valuable aspects of my learning.

#### Problem-Solving and Adaptability
Lastly, this project tested my problem-solving abilities and taught me to be adaptable. I learned to quickly adjust my strategies in response to new design challenges.
___

## Future Work

Given more time to enhance the project, I would explore the implementation of advanced memory management techniques. Specifically, adding functionality to handle more complex memory operations, like memory synchronization primitives, could significantly improve the module's utility in a broader range of applications.

