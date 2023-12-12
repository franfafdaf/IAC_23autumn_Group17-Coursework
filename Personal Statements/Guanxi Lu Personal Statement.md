- What you Contributed 
- Reflection about what you have learned in this project
- Mistakes you made
- Special Design Distribution
- What you might do differently if you were to do it again or have more time


using test programs

don't cares

需要做得更好：加强对git的使用，gitignore

## Guanxi Lu Personal Statement

## My Contribution
### Summary
My contributions primarily focus on the Single Cycle and Cache Versions. In the Single Cycle version, I was tasked with developing the **Control Unit**, **Instruction Memory**, **Extend Unit**, **Top Level Design** and the **F1 Assembly Language Program**. Additionally, [Haocheng](https://github.com/franfafdaf) and I collaborated on debugging the design. For the Cache Version, I selected the cache parameters (2-way associative, 4-word block size, write-through cache) and **designed the corresponding block diagram**. [Haocheng](https://github.com/franfafdaf) took charge of the implementation phase.

Furthermore, I undertook administrative duties within our team. These included managing the **repository structure**, **test and upload design results**, and **authoring the group's joint statement**. As the author of the joint statement, my design ideas are included in the [joint statement]().

### Control Unit, Instruction Memory and Extend Unit 
- In [742b3f2](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/742b3f2b9d3cbdc882d3ebd4e2a44154c933a736), a primilinary version that includes `Control Unit`, `Instruction Memory` and `Extend Unit` was developed. 
- In [7ad151b](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/7ad151bcdcd05703ceac779554277482868779ec), additional control signals `LdSrc` and `StSrc` are implemented. 
- In [b205608](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/b20560856b1a776b41823b173115e150de2bb01f), the consistancy issue was fixed for the three units. 
- In [66ca29e](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/66ca29e78ad11d884464effced1b961cd896e20f), added another control signal `JSrc` (`JalSrc` in the subsequent versions) to support `JAL` and `JALR` instructions. 
- In [3b546db](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/tree/3b546dbbe2ff62547c72be2c922010a1a72b18d2), implemented `ANDI` instruction. 
- In [ece7da9](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/tree/ece7da9992e138253141a8770041873322f633da), implemented `XOR` instruction. 

### F1 Assembly Language Program
- In [688cef7](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/tree/688cef764ed9856d7f1a0f72c6e3f784b42277b2), test LFSR algorithm. 
- In [1f43366](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/tree/1f43366cbbf2e1cbd74327ff4b293625f8f256f4), test the F1 program. 
- In [0252720](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/tree/0252720c67880ce14876fee235f90722fae7fdbf), updated `F1.mem` and `instr_mem.sv` for little-endian. 


### Debug
- In [b1c012e](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/b1c012e75d69ed7a718de6036ab7f22745ecbd9a), merged `memory_i` and `memory_o` to main memory. 
- In [fcc45b1](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/fcc45b10d2b2fc1b60bf25297f469b2e6ff83e5d), modified `DataMemory` for `SB` instruction. 
- In [](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/tree/20441ad6e2f968ab042d45c96b7800301764193a), included `trigger` in design to comply with the F1 Algorithm. 
- In [1f43366](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/tree/1f43366cbbf2e1cbd74327ff4b293625f8f256f4), corrected initial value for `PC`, and correctly hardwire `x0` to 0. 


### Top Level Design
- In [8acd52b](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/8acd52b568e53151bcaa33f863c420eae30cb694), `top.sv` was created. 
- In [9b217b3](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/9d217b3e988e312c5cde4419e6781a7314f40d2f), checked for wire names for consistency. 


## What I've learnt in this project

## Mistakes I've made

for SB instruction 

## Special Design Decisions

## What I might do differently