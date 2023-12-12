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


### Top Level Design
- In [8acd52b](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/8acd52b568e53151bcaa33f863c420eae30cb694), `top.sv` was created. 
- In [9b217b3](https://github.com/franfafdaf/IAC_23autumn_Group17-Coursework/commit/9d217b3e988e312c5cde4419e6781a7314f40d2f), checked for wire names for consistency. 


## What I've learnt in this project

## Mistakes I've made

## Special Design Decisions

## What I might do differently