
## Personal Statement of Haocheng Fan


- [Personal Statement of Haocheng Fan](#personal-statement-of-haocheng-fan)
- [Contributions](#contributions)
  - [Summary](#summary)
  - [Debug and Testing in the Single Cycle Processor Section](#debug-and-testing-in-the-single-cycle-processor-section)
    - [Commits and Debugging](#commits-and-debugging)
    - [Register File Optimization](#register-file-optimization)
    - [Data Memory Module Consolidation](#data-memory-module-consolidation)
    - [Debugging process](#debugging-process)
    - [Other Component Modifications](#other-component-modifications)
  - [Build of Pipelened processor](#build-of-pipelened-processor)
  - [Debug  and  testing of Pipelined  version](#debug--and--testing-of-pipelined--version)
  - [Building of 2-way Cache](#building-of-2-way-cache)
  - [Testing of 2-way Cache](#testing-of-2-way-cache)
- [Mistakes](#mistakes)
  - [Wrong  conncetion  of  port  for  data  writen  to  Data Memory](#wrong--conncetion--of--port--for--data--writen--to--data-memory)
  - [Wrong assginment of tag and set bit in cache](#wrong-assginment-of-tag-and-set-bit-in-cache)
- [Special  Designs](#special--designs)
  - [Enhanced testbench](#enhanced-testbench)
    - [Optimizations  in  Output  Handling](#optimizations--in--output--handling)
    - [Sampling  Mechanism  for  Graph  Display](#sampling--mechanism--for--graph--display)
    - [Limiting  Redundant  Graph  Plots](#limiting--redundant--graph--plots)
  - [Pipelined Control Unit](#pipelined-control-unit)
  - [2 -way Cache read and write](#2--way-cache-read-and-write)
- [Learnt  in  this  Porject](#learnt--in--this--porject)
  - [Knowledge](#knowledge)
  - [Programming  Languages](#programming--languages)
  - [Tools](#tools)
  - [Note  Language](#note--language)
  - [Skills](#skills)
- [Future  Goals](#future--goals)

  

----

## Contributions

----
### Summary

My primary responsibilities included handling the **debugging and testing of the single-cycle processor**, **constructing and subsequently debugging and testing the pipelined processor**, as well as **developing, debugging, and testing the 2-way cache version**. In addition to these technical tasks, I also took on the role of repository master, managing and updating our project's GitHub repository and authoring the section on the 2-way cache in our joint statement.


### Debug and Testing in the Single Cycle Processor Section

  

#### Commits and Debugging

The single cycle processor section has undergone several key modifications, as detailed in the following commits:

  

-  **Control Unit, MainDecode, and ALUDecode:**

In commit [`296baaf`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/296baaf513f4e8ec553caf4e8feb459ab987700a), significant debugging was performed on the `Control Unit`, `mainDecode`, and `ALUDecode`.


-  **Datamem, Instruction Mem, and Top:**

In commit [`b17e918`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/b17e918bd95512817b331d454390872abb4e5f8b) focused on debugging the `datamem`, `instruction mem`, and `top`.

  

-  **PC and Regfile:**

In commit [`82f2d82`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/82f2d82677d34c992c6c302656fb9fe5cd4f4ad5), there was a debug of `pc` and `regfile`.

  

#### Register File Optimization

The initial version of the register file contained redundant `if` statements, leading to confusion and compiler warnings due to missing conditions like `else`. To streamline this, I simplified the logic to use a single condition based on the `write enable` signal. Now, the content of the target register is replaced only when the positive clock click is active, and the `write enable` signal is enabled. 

```verilog
  always_ff @(posedge clk) begin
      if ((WE3 == 1'b1) && (A3 != 0)) register[A3] <= WD3;
  end
```
#### Data Memory Module Consolidation

In Commit [`9f5a249`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/9f5a24999856b424e760067505dd4d85696d9ea6) marks the consolidation of three memory modules into one [`datamem.sv`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/SingleCycle_Ref/rtl/DataMemory.sv). The initial version, provided by a group member, consisted of separate files: `datamem.sv` for reading data, `memory_out.sv` for switching between `LBU` and `LW` modes, and `memory_in.sv` for managing store operations with `SB` and `SW` instructions. To reduce complexity, these have been merged into a single file, simplifying connections in the `top.sv` file.

  

#### Debugging process 
The first significant challenge encountered during debugging involved an absence of signal output on the vbuddy screen. Despite utilizing lab4 instructions, including `addi` and `bne`, the issue persisted. A detailed examination of the VCD file uncovered a mismatch between expected and actual instructions. This problem was traced back to the instruction memory module, where an endianness mismatch was causing incorrect instruction loading. By adjusting the module to load instructions in little-endian rather than big-endian format, this critical issue was resolved.

```verilog
  assign RD = {rom_array[A+3], rom_array[A+2], rom_array[A+1], rom_array[A]};
```
  

-  **Resolving the SB Instruction Bug**: A particularly challenging bug related to the `SB` (store byte) instruction was identified when the `VCD` file size unexpectedly reached 1 GB. This anomaly suggested a looping error within the processor, primarily involving the `SB` and `LW` (load word) instructions. These instructions were initially implemented incorrectly, causing the processor to repeatedly execute the same set of operations. Addressing and correcting these implementation errors were vital for the processor to function correctly.



-  **Second Loop Data Update Issue**: Further debugging efforts led to the discovery of a problem in the processor's second operational loop, where data was not being updated as intended. The processor was designed to load a value from a specific address, increment this value, and then store it back. However, it continually loaded an initial value of zero, failing to execute the intended operation. This issue was eventually traced to an error in handling the `SB` instruction, where 24 zero bits were incorrectly appended to the stored byte, disrupting the data storage process. Correcting this design flaw was crucial, enabling the processor to accurately update and represent data.

```verilog
 always_ff @(posedge clk) begin
        if (WE == 1 && StSrc == 0) begin        // SW
            data_array[A] <= WD[7:0];
            data_array[A+1] <= WD[15:8];
            data_array[A+2] <= WD[23:16];
            data_array[A+3] <= WD[31:24];
        end
        else if(WE ==1 && StSrc ==1 ) begin
            data_array[A] <= WD[7:0];           // SB
        end
    end 
```

#### Other Component Modifications

Additional modifications across other components include correcting incorrectly set signal sizes, fixing variable recognition issues caused by inconsistent use of uppercase and lowercase letters, and resolving some SystemVerilog syntax errors, like omitting blank lines after `endmodule`.

-  **Commit Analysis and Testing**: Commit [`0e5bcc5`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/0e5bcc5eaca9eedd887e2bb71e0f42cbf340641f) and others labeled 'test and modify' were pivotal in testing the single-cycle version of the processor. This phase was critical in identifying and addressing various issues.






### Build of Pipelened processor

<div align="center">
  <img src="Personal Statments/../../Images/Pipelined.png" alt="Pipeliend Structure">
</div>

- in commit [1c8b3b5]((https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/1c8b3b515f4128b4a561c20a929516556fecf323)), the flush, stall and forward function in hazard control unit is added to the pipelined version.

- in file [HazardUnit.sv](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/Pipelined_F1/rtl/HazardUnit.sv), my design of the `hazard unit` in shown. Hazard unit deal with 3 situations that leads to error output in pipelined processor.

-  1. Data hazards by redirecting data from one pipeline stage to a previous stage. Instead of waiting for an intermediate result to go all the way through the pipeline to be written back to a register, the result is forwarded directly to an earlier stage where it is needed. To deal with this `forwarding` is used. 
For instance, if an instruction writes a value to a register that the next instruction immediately needs, the hazard unit can forward this value directly from the write-back stage to the input of the execution stage of the subsequent instruction. This reduces or eliminates the need for stalls in many cases.
```verilog
	if (((Rs1E == RdM) & RegWriteM) & (Rs1E != 0)) ForwardAE = 2'b10; // Forward from Memory stage
	else  if (((Rs1E == RdW) & RegWriteW) & (Rs1E != 0)) ForwardAE = 2'b01; // Forward from Writeback stage
	else  ForwardAE = 2'b00; // No forwarding (use RF output)
	case (ForwardAE)
		2'b00: SrcA0E = RD1E;
		2'b01: SrcA0E = ResultW;
		2'b10: SrcA0E = ALUResultM;
		default: SrcA0E = 32'b0;
	endcase

	if (((Rs2E == RdM) & RegWriteM) & (Rs2E != 0)) ForwardBE = 2'b10; // Forward from Memory stage
	else  if (((Rs2E == RdW) & RegWriteW) & (Rs2E != 0)) ForwardBE = 2'b01; // Forward from Writeback stage
	else  ForwardBE = 2'b00; // No forwarding (use RF output)
	case (ForwardBE)
		2'b00: SrcB0E = RD2E;
		2'b01: SrcB0E = ResultW;
		2'b10: SrcB0E = ALUResultM;
		default: SrcB0E = 32'b0;
	endcase
``` 
- 2.  Data hazard occurs when a subsequent instruction depends on the result of a previous instruction that has not yet completed its execution. In a pipelined processor, different stages of instruction execution are overlapped. If one instruction needs data that is yet to be produced by another instruction, the pipeline may need to be `stalled`.
For example, if an instruction that loads data from memory is followed by an instruction that uses this data, the second instruction cannot proceed until the data is available. The hazard control unit halts the pipeline progression for a certain number of cycles, allowing time for the required data to become available.
```verilog
  assign lwStall = ResultSrcE0 & ((Rs1D == RdE)|(Rs2D == RdE)); 
  assign StallF = lwStall;
  assign StallD = lwStall;
```
- 3. Control hazards occur mainly due to branch instructions. When a branch instruction is executed, the outcome is not known until the execution stage. However, by that time, subsequent instructions may have already been fetched and decoded. If the branch is taken, and the fetched instructions are not part of the correct execution path, these instructions need to be `flushed` from the pipeline. The hazard control unit effectively resets or clears parts of the pipeline and fetches the correct set of instructions according to the branch outcome.
```verilog
    assign FlushD = PCSrcE;
    assign FlushE = lwStall | PCSrcE;
```
- in commit [`b0a731b`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/b0a731bf8b34876275449e684cc3f78f5034d5a3), and several previous commit, the buidling of 4 flip flop that separeate the sategs.
- in file [Stage1.sv](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/Pipelined_F1/rtl/Stage1.sv) the design of the first stage,  Fetch and Decode stage is shown. `clr` and `en` logic is used to suit the `hazard unit` for `stall` and `flush`.
```verilog
always_ff @(posedge clk) begin
    if (clr) begin
        //instr
        InstrD <= 0;
        //pc
        PCD<= 0;
        PC_PlusD <= 0; 
    end
    else if(en) begin
        //instr
        InstrD <= InstrD;
        //pc
        PCD<= PCD;
        PC_PlusD <= PC_PlusD; 
    end
    else begin
        //instr
        InstrD <= RDi;
        //pc
        PCD<= PCF;
        PC_PlusD <= PC_PlusF; 
    end
end
```
### Debug  and  testing of Pipelined  version

- in  commit [`891ee88`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/891ee88a181cea1bb0545e017e88b7c0679a9761), the biggest bug of the pieplined version is fixed.
I falsely connect the port in `top.sv`
Renaming  logic  stages (like  fetch  and  decode) and adjusting small logic  aspects  were  necessary  to  accommodate  the  pipelined  architecture. One  significant  challenge  encountered  was  an  issue with the  multiplexer  selecting  inputs  for  the  `data  memory`, which  was  traced  back  to  a  misconnection  at  the  top  level. Correcting  this  resolved  the  issue, enabling  proper  functioning  of  the  pipelined  processor.
```verilog
	.//WriteDataE(RD2E),

	.WriteDataE(SrcB0E),
```
If in this connection, the `forwarding` will not work.

- Previously, the control unit was composed of three distinct units: the PC decode, the ALU decode, and the main decode. These units were responsible for decoding instructions, but this setup was quite messy and prone to errors in connectivity. To streamline the process, I consolidated these components into a single file named `control_unit`, simplifying the overall design.
In file [ControlUnit.sv](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/Pipelined_Ref/rtl/ControlUnit.sv)


### Building of 2-way Cache 
<div align="center">
  <img src="Personal Statments/../../Images/2-wayCache.png" alt="Cache Structure">
</div>

- in file [`cache.sv`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/2-wayCache/rtl/Cache.sv) 

Initially, the  team  aimed  for  a  complex  cache  design (4-way, 8-set, 128-bit  block  size with write-back  functionality). However, due  to  complexity, the  design  was  simplified  to  a  2-way  set  associative  cache. The  cache  was  segmented  into  smaller  components  like  valid  bits, tag, data, and least  recently  used (LRU) bits. This  modular  approach  allowed  for  easier  initialization and hit  detection.

### Testing of 2-way Cache 

- in commit [`15f91b6`](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/15f91b6acd0cd94db00cfda61a78d0df64af065b), during the debugging, the output appeared similar to the expected one, but not identical. Revisiting `cache.sv`, I identified a potential issue with the else condition. Given that only the `LBU` and `SB` logic is executed in the instruction, other conditions should not trigger read or write operations in the `cache`. Therefore, only if conditions for `LBU`and `SB` instructions are maintained.
  
- The overall design is illustrated above. The cache receives inputs from `DataWrite`, `AddressIn`, and other control units. The `Hit` logic is determined by checking whether the data is already in the `cache`. If a hit occurs, the output of the memory stage will be sourced from the cache. Otherwise, it will be derived from the `data memory`. The selection of output is managed by the file `CacheMux.sv`().

- 1. Initalizaztion 
This segment initializes the least recently used logic and the valid logic of each block to 0. This implies that all the data in the blocks is invalid, and new data should be loaded first when encountered by the cache for the first time, indicating misses.
``` verilog
 // Initialization
  initial begin
    // set valid to 0
    for (int set = 0; set < setNum; set++) begin
        lru[set] = 0; // set lru to 0 
      for (int way = 0; way < wayNum; way++) begin
            valid[set][way] = 1'b0;
      end
    end
  end
```
- 2. Read 
When the tag and set number of a specific block match the incoming address, and the valid bit is 1 (indicating current content), these conditions, along with an enabled `LBU` instruction, dictate that the output to the next stage, the write-back stage, should originate from the cache.

```verilog
  // Read 
  always_comb begin
    // Default values
    hit = 1'b0; 
    dataOut = 32'b0; 
    for (int way = 0; way < wayNum; way++) begin
       if (LdSrcM) begin // lbu 
          if ((valid[inputSet][way]) && (tag[inputSet][way] == inputTag)) begin // find the block
                dataOut = {24{1'b0},data[inputSet][way][7:0]};
                hit = 1'b0;
            end
        end
    end
 end
```
- 3. Write 
The write policy here is write-through for simplicity. Hence, whenever the `SB` logic is activated, the input data is written to the corresponding location in the cache. Additionally, the least recently used `lru` is toggled to its opposite value to maintain temporal locality.

 ```verilog
  always_ff @(posedge clk) begin
    if (LdSrcM && hit) begin
      lru[inputSet] <= !lru[inputSet]; // rest the least used 
    end
    
    if (WE) begin
      // choose the way
      selectedWay <= lru[inputSet] ? 1'b0 : 1'b1; 
      // Update tag & valid
      valid[inputSet][selectedWay] <= 1'b1;
      tag[inputSet][selectedWay] <= inputTag;
      lru[inputSet] <= !lru[inputSet]; // rest the least used 
      // SB instruction
      if (StSrcM) begin
            data[inputSet][selectedWay][7:0] <=dataIn[7:0];
      end
    end
  end
```


----
## Mistakes
----

### Wrong  conncetion  of  port  for  data  writen  to  Data Memory

In the construction of the pipelined version, the `SrcBE` port for the `ALU` module should connect to the mux in front of it. This mux switches between WriteDataE and another mux controlled by `ForwardBE`. However, I mistakenly connected the output of RD2E to the `SrcBE`, which resulted in the exclusion of data forwarding and writing to the `ALU`, leading to an incorrect output display.

```verilog
.//WriteDataE(RD2E),

.WriteDataE(SrcB0E),
```

### Wrong assginment of tag and set bit in cache

In the development of the 2-way cache version, the overall plot appeared mostly accurate, yet some values were incorrect in the visualization. Upon inspecting the waveforms in the VCD file, it was evident that the values from the `cache` and `data memory` differed, indicating an error in the output. Closer examination of the address input revealed that incoming data was being stored at incorrect addresses. This discrepancy suggested a potential issue with how the tag and set were assigned.

The root of the problem turned out to be the handling of the byte offset. According to the textbook, a byte offset is necessary, and the textbook examples show word-addressed locations, such as 0x4, 0xc. However, in this project, aligned with the assembly code provided in the PDF, data in memory is loaded sequentially, meaning the addresses are continuous and do not jump by 4 as in the textbook examples.

After correcting this issue and adjusting for the continuous, word-addressing, the output plot aligned correctly with expectations. This fix resolved the discrepancies previously observed between the `cache`and `data memory` outputs.
Just like the old chinese phrase: "Blind faith in books is worse than having no books at all". 

```verilog
module Cache #(
  parameter tagSize = 29,
  parameter setSize = 3,
  parameter setNum = 8,
  parameter wayNum = 2
)
```  

----

## Special  Designs

----

### Enhanced testbench

#### Optimizations  in  Output  Handling

In  analyzing  the  reference  assembly  code  for  the  probability  density  function, an  interesting  behavior  of `vbuddy` was  noted. Specifically, the  output  to `vbuddy` (variable `a0`) materializes  after  a  sequence  of  three  operations: cleaning, building, and displaying  data. This  means  that  during  multiple  cycles, the  initial  output  of `vbuddy` could  be  zero. Considering  the  additional time  taken  by  plotting, an  optimization  was  introduced  in  the `testbench`. Now, graphs  are  plotted  only  when `a0` holds  a  non-zero  value, significantly  enhancing  efficiency.

```verilog
	if (plot == 0 && top->a0 != 0) {
		plot = 1;
	}
```
#### Sampling  Mechanism  for  Graph  Display

Further, the `testbench` has  been  refined  to  include  a  counting  mechanism. Under  this  new  system, a  graph  is  plotted  only  after `a0` has  been  non-zero  three  times, effectively  sampling  one  out  of  every  three  occurrences. This  approach  balances  the  need  to  display  a  complete PDF graph  on  the `vbuddy` screen, while  avoiding  an  overload  of  information and maintaining  a  clear, concise  visual  representation.
 ``` verilog
 if (plot >= 1) {
		if(count == 3){
			vbdPlot(int(top->a0), 0, 255);
			count =0;
			vbdCycle(simcyc);
		}
		else{
			count = count +1;	
		}
		plot += 1;
}
``` 
#### Limiting  Redundant  Graph  Plots

It  was  also  observed  that  the  final  loop, which  generates  the  PDF  graph, tends  to  repeat  itself. To  address  this, a  modification  was  made  to  set  a  maximum  plotting  limit within the `testbench`. This  ensures  that  only  one  complete, meaningful  graph  is  displayed, eliminating  redundant  visual  outputs. This limit value changes according to different memory contents.    

 ``` verilog
	 if (plot > 960) {
		 break;
	}
```
These  improvements  to  the `testbench` are  expected  to  save  time and provide  a  more  efficient and visually  effective  way  to  interpret  the  data.  

### Pipelined Control Unit

The architecture of the decode and control unit module required separation into different stages to accommodate the pipeline design. Specifically, the main decoding process occurs in the decode stage, while the `PC decode`, crucial for jumping or branching, takes place in the execution stage. To effectively align with this pipelined approach, the `control unit` has been split accordingly, ensuring that each stage handles its respective tasks efficiently. File [ControlUnit.sv](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/blob/Pipelined_Ref/rtl/ControlUnit.sv).


graph 


### 2 -way Cache read and write
Given that only the `LBU` and `SB` logic is executed in the instruction, other conditions should not trigger read or write operations in the `cache`. Therefore, only if conditions for `LBU`and `SB` instructions are maintained.

----

## Learnt  in  this  Porject

----

### Knowledge

- **Deep and not  abstruct  understanding  to  risc-v**: Through  the  process  of  building  the  processor  during  this  project, I have  gained  a  substantial  practical  understanding. The  four-week  coursework  has  been  instrumental  in  deepening  my  comprehension  of  the  various  modules within the CPU and their  interrelations. This  hands-on  experience  has  provided  a  more  thorough and nuanced  grasp  of  the  inner  workings  of  a  processor.

  

### Programming  Languages

- **SystemVerilog**: Knowing SystemVerilog is crucial for professionals in the fields of electronic design and hardware engineering, as these languages are the cornerstones of digital system design and FPGA/ASIC development. SystemVerilog extends these capabilities with advanced features for more efficient and robust hardware design, verification, and modeling. Mastery of these languages enables engineers to create and validate complex digital systems, making them indispensable tools in the design of modern electronic devices, from simple logic gates to intricate processors and integrated circuits.


- **Verilator**: Understanding the functionality of Verilator is essential for hardware designers and system developers, as it stands as one of the leading open-source tools for hardware simulation and verification. Verilator specializes in converting Verilog code into C++ or SystemC, enabling faster simulation speeds compared to traditional event-driven simulators. This feature is particularly valuable for large-scale designs and complex digital systems, allowing for more efficient testing and debugging processes. By integrating Verilator into their workflow, developers can significantly enhance the accuracy and speed of their hardware verification cycles, a critical aspect in the development of reliable and high-performance electronic systems.

### Tools

- **Git&Github**: Using Git and GitHub is crucial in software development for efficient version control and collaboration. Git allows developers to track and manage changes in their codebase, while GitHub provides a central platform for storing code, facilitating team collaboration through features like pull requests and issue tracking. Additionally, GitHub acts as a cloud backup and offers tools for automation, making it a valuable resource for individual developers and teams alike.

### Note  Language

- **Markdown**: Markdown is highly valued for its simplicity, readability, and versatility, making it a popular choice in software development and content creation. Its straightforward syntax is easy to learn and read, enhancing the focus on content rather than formatting. Markdown files are widely supported across various platforms and can be seamlessly converted to other formats like HTML and PDF. This universal compatibility, coupled with its strong presence in communities like GitHub, makes Markdown an essential tool for creating clear, structured documentation, README files, and online posts, ensuring effective communication and collaboration in diverse digital environments.

### Skills

- **Utilizing  Waveform  Analysis  for  Troubleshooting**: Waveform  analysis  is  an  essential  tool  in  the  debugging  process. By  closely  examining  the  behavior  of  signals  on  a  clock-by-clock  basis, we  can  effectively  identify and address  any  anomalies or unexpected  behaviors  in  the  design. This  method  offers  a  detailed and precise  approach  to  refining  our  project.

- **The  Importance  of  Comprehensive  Record-Keeping**: Maintaining  detailed  records, both  on  an  individual and team  level, is  of  utmost  importance. This  systematic  approach  to  documentation  ensures  that  every  decision and change  is  well-recorded and easy  to  reference.
- **Enhanced Teamwork with Group Members**: Improved collaboration is achievable through the use of Git, as it allows teams to efficiently track progress and revert to earlier stages when needed. The commit history in Git provides clear insights into each member's contributions, making it easier to understand the current workload of others and ensuring that no one falls behind.
xe

----

## Future  Goals

----

Given another chance, I would concentrate on optimizing the implementation of both the single and pipelined processor versions, dedicating more attention to detail to enhance efficiency. Such improvements could pave the way for successfully completing a more complex `cache` module. Additionally, I would expand the `control unit` to include a broader range of instructions, equipping the processor to handle a wider variety of scenarios.
