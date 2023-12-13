## Personal Statement of Haocheng Fan

- [Contributions](#contributions) 
  - [Summary](#summary)
  - [Modifications in the Single Cycle Processor Section](#modifications-in-the-single-cycle-processor-section)
  - [Single Cycle Version Debug and Testing](#single-cycle-version-debug-and-testing)
  - [Pipelined Processor](#pipelined-processor) 
  - [Pipelined Version Debug and Testing](#pipelined-version-debug-and-testing)
  - [2-Way Cache Processor](#2-way-cache-processor)
  - [Cache Version Debug and Testing](#cache-version-debug-and-testing)
- [Mistakes I Made](#mistakes-i-made)
- [Special Designs](#special-designs)
1. [Single Cycle Processor Debugging and Testing](#single-cycle-processor-debugging-and-testing)
2. [Pipelined Processor Development](#pipelined-processor-development)
3. [Cache Implementation](#cache-implementation)
- [Learnt in this Project](#learnt-in-this-project)
    - [Knowledge](#knowledge)
    - [Programming Languages](#programming-languages)
    - [Tools](#tools)
    - [Note Language](#note-language)
    - [Skills](#skills)
- [Future Goals](#future-goals)

----

## Contributions

----

### Summary

I'm mainly resiponsible for the **debug and testing of single cycle processor**, **consttrcutiof of pipelined proseccor** and its corresposnding **debug and testing**, and the **modification of cache version**. A MacBook Air was purchased by me specifically for this course, as my Windows PC was unable to connect to vbuddy. I also do the job as the repo master, to build the github repossitoeryt and modify the repo page with Guanxi

  
### Modifications in the Single Cycle Processor Section

#### Commits and Debugging
The single cycle processor section has undergone several key modifications, as detailed in the following commits:

- **Control Unit, MainDecode, and ALUDecode:**
  In commit [`296baaf`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/296baaf513f4e8ec553caf4e8feb459ab987700a), significant debugging was performed on the `Control Unit`, `mainDecode`, and `ALUDecode`.

- **Datamem, Instruction Mem, and Top:**
  Commit [`b17e918`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/b17e918bd95512817b331d454390872abb4e5f8b) focused on debugging the `datamem`, `instruction mem`, and `top`.

- **PC and Regfile:**
  In commit [`82f2d82`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/82f2d82677d34c992c6c302656fb9fe5cd4f4ad5), there was a debug of `pc` and `regfile`.

#### Register File Optimization
The initial version of the register file contained redundant `if` statements, leading to confusion and compiler warnings due to missing conditions like `else`. To streamline this, I simplified the logic to use a single condition based on the write enable signal. Now, the content of the target register is replaced only when the positive clock click is active, and the write enable signal is enabled.

#### Data Memory Module Consolidation
Commit [`9f5a249`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/9f5a24999856b424e760067505dd4d85696d9ea6) marks the consolidation of three memory modules into one `datamem`. The initial version, provided by a group member, consisted of separate files: `datamem.sv` for reading data, `memory_out.sv` for switching between LBU and LW modes, and `memory_in.sv` for managing store operations with SB and SW instructions. To reduce complexity, these have been merged into a single file, simplifying connections in the `top.sv` file.

#### Other Component Modifications
Additional modifications across other components include correcting incorrectly set signal sizes, fixing variable recognition issues caused by inconsistent use of uppercase and lowercase letters, and resolving some SystemVerilog syntax errors, like omitting blank lines after `endmodule`.

### Single cycle version debug and testing

- in commit[0e5bcc5](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/0e5bcc5eaca9eedd887e2bb71e0f42cbf340641f) and other commit with name test and modify, the testing of the single cycle version of processor.
- In the process of debugging, after resolving grammar and connection issues, the first notable problem was the absence of signal on the vbuddy screen. Initially using instructions from lab4 (which involve `addi` and `bne` instructions), the issue persisted. Examination of the VCD file revealed a discrepancy between the expected and actual instructions. The problem was traced back to the instruction memory module, where instructions were being loaded in the wrong order due to endianness issues. Adjusting the instruction memory module to load instructions in little-endian format, as opposed to big-endian, resolved this issue.
-  The most challenging bug in the single-cycle processor was related to the `SB` instruction, where the issue of a massive `VCD` file size (1 GB) indicated a problem. The `SB`and `LW`instructions were incorrectly implemented, causing the processor to be stuck in a loop. Correcting these errors was crucial for proper processor operation.
-  Further debugging led to the discovery of an issue in the second loop of the processor's operation, where data was not being updated correctly. The processor was supposed to load a value from a specific address, increment it, and store it back. However, it was repeatedly loading the initial value of zero. After extensive investigation, the issue was identified in the handling of the store byte (SB) instruction. The design erroneously added 24 zero bits to the byte being stored, which interfered with the data storage process. Correcting this error resolved the issue, allowing for accurate data representation.


### Pipelened processor

- in commit[1c8b3b5](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/1c8b3b515f4128b4a561c20a929516556fecf323), the flush, stall and forward function in hazard control unit is added to the pipelined version.

- in commit[b0a731b](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/b0a731bf8b34876275449e684cc3f78f5034d5a3), and several previous commit, the buidling of 4 flip flop that separeate the sategs.
- my design of the pipelined version rely on the graph provided in the lecture slide as this graph shows, 4 stage and one hazard control unit ios added to the single cycle version, there's also changes on the `control unit` and `decode unit` to fit in the pipelined version. 

  

### Pipelined version debug and testing

- in commit[891ee88](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/891ee88a181cea1bb0545e017e88b7c0679a9761), bug of the pieplined version is fixed.
- 

### Implementing Hazard Control
In developing the pipelined processor, several modules were added, including a hazard control unit and flip-flops for pipeline staging. The hazard control unit was designed based on the book's content, with comments annotating the functionality of each section. It handles three main hazards: forwarding, stalling, and flushing. Forwarding is used when an instruction requires data that has not yet been written back, stalling occurs when data dependencies necessitate pausing the pipeline, and flushing is necessary during jump instructions to remove irrelevant instructions from the pipeline stages.

### Pipeline Modifications and Debugging
Renaming logic stages (like fetch and decode) and adjusting small logic aspects were necessary to accommodate the pipelined architecture. One significant challenge encountered was an issue with the multiplexer selecting inputs for the data memory, which was traced back to a misconnection at the top level. Correcting this resolved the issue, enabling proper functioning of the pipelined processor.

### 2-way Cache processor


## Cache Implementation

### Simplifying the Cache Design
Initially, the team aimed for a complex cache design (4-way, 8-set, 128-bit block size with write-back functionality). However, due to complexity, the design was simplified to a 2-way set associative cache. The cache was segmented into smaller components like valid bits, tag, data, and least recently used (LRU) bits. This modular approach allowed for easier initialization and hit detection.


### Cache version debug and testing

  
  

----
## mistakes i make
----

### Wrong conncetion of port for data writen to Data memory

in the building of the pipelined version, the `SrcBE` port for `ALU` module should conncet tothe mux infraont of it, which switcht between the `WriteDataE` and the mux controled by `ForwardBE`, but i fasely connet the ouput of `RD2E` to the `SrcBE`, so that the forwarding and writing of data  is exculede to the `ALU`, so that wrong plot is shown.

----
## Special Designs
----

### Enhanced `testbench` for Improved Efficiency and Graphical Display

#### Optimizations in Output Handling
In analyzing the reference assembly code for the probability density function, an interesting behavior of `vbuddy` was noted. Specifically, the output to `vbuddy` (variable `a0`) materializes after a sequence of three operations: cleaning, building, and displaying data. This means that during multiple cycles, the initial output of `vbuddy` could be zero. Considering the additional time taken by plotting, an optimization was introduced in the `testbench`. Now, graphs are plotted only when `a0` holds a non-zero value, significantly enhancing efficiency.
``if (plot  ==  0  &&  top->a0  !=  0) {
plot  =  1;
}
if (plot  >=  1) {
if(count  ==  3){
vbdPlot(int(top->a0), 0, 255);
count  =0;
vbdCycle(simcyc);
}
else{
count  =  count  +1;
}
plot  +=  1;
}
if (plot  >  960) {
break;
}``

#### Limiting Redundant Graph Plots
It was also observed that the final loop, which generates the PDF graph, tends to repeat itself. To address this, a modification was made to set a maximum plotting limit within the `testbench`. This ensures that only one complete, meaningful graph is displayed, eliminating redundant visual outputs.

#### Sampling Mechanism for Graph Display
Further, the `testbench` has been refined to include a counting mechanism. Under this new system, a graph is plotted only after `a0` has been non-zero three times, effectively sampling one out of every three occurrences. This approach balances the need to display a complete PDF graph on the `vbuddy` screen, while avoiding an overload of information and maintaining a clear, concise visual representation.

These improvements to the `testbench` are expected to save time and provide a more efficient and visually effective way to interpret the data.

  




----
## Learnt in this Porject
----
### Knowledge
-  **Deep and not abstruct understanding to risc-v**: Through the process of building the processor during this project, I have gained a substantial practical understanding. The four-week coursework has been instrumental in deepening my comprehension of the various modules within the CPU and their interrelations. This hands-on experience has provided a more thorough and nuanced grasp of the inner workings of a processor.

### Programming Languages
-  **SystemVerilog**: A Hardware Description Language (HDL) offering the construction of architecture of computer.
-  **Verilator**: Useful for compiling SystemVerilog programs into C++ projects for simulating.
### Tools
-  **Git**: Essential for version control and managing repository structure.
 -  **vcd**: file format that used for displaying waveforms.
### Note Language
-  **Markdown**: the language that can be augmented with HTML for advanced functionality in taking note.
### Skills
- **Utilizing Waveform Analysis for Troubleshooting**: Waveform analysis is an essential tool in the debugging process. By closely examining the behavior of signals on a clock-by-clock basis, we can effectively identify and address any anomalies or unexpected behaviors in the design. This method offers a detailed and precise approach to refining our project.
- **The Importance of Comprehensive Record-Keeping**: Maintaining detailed records, both on an individual and team level, is of utmost importance. This systematic approach to documentation ensures that every decision and change is well-recorded and easy to reference.
----
## Future Goals
----
If given another opportunity, I would focus on implementing the single and pipelined processor versions more efficiently and with greater attention to detail. This would potentially allow for the completion of the more complex cache module. Also, the used instruction will be added to the `control unit` so that this processor can deal with more situations.
