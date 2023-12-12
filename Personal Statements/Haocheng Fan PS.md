## Personal Statement of Haocheng Fan

- What you Contributed 
- Reflection about what you have learned in this project
- Mistakes you made
- Special Design Distribution
- What you might do differently if you were to do it again or have more time
  
Single cycle processor section modification

Single cycle version debug and testing
Pipelened processor
Pipelined version debug and testing
2-way Cache processor
Cache version debug and testing


Single cycle processor section modification
1. data memory

the intial version of data memory provided by group member to me consists of three individual fiels, which is the datamem.sv, which used for thor the reading of data from .mem fiel, memory_out.sv, which is used for the swtiching between LBU and LW mode, and memoey_in.sv, which is resposible for the switching of store operation, changing from the SB and SW instruyion according to different input signal. this is too complex, so I combined them into one file, to simplifiy connection in the top.sv file

2. register file

the inital version of register fiel contains duplicated if judgement, which leads to misunderstand to the people who read this code, also, the loss of all conditions, like else... makes the compiler keep on showing warining. to fix this, I just use the one condition to dicided whetehre the content of register fiel is replaced, the write enable signal. only in the positive clock clik and write enable signal is enabled, the target rgister is replaced its content.
3. other components
for other components, the modification are mainly change the faslely set size of signal, the unrecognized variabel due to the miss use of capital letter and samll letter, and some grammer issue with systemverilog, like forggeting to add a blank line after the endmodule

Single cycle version debug and testing
For the doit.sh, it just follow the common as all the labs before, first clean the old data stored, and the produce the vcd file to see the wave of the erach sgianl.
for the testbench, after reading the reference aseembly code for probability density function, I found that the output to vbuddy, the a0, will appear after three loops, which clean, build and show the data, which means for a large number of cycles, the output of vbuddy will be 0, since the plotting of vbuddy also take time, i add a condition to hte testbench that, only when the ao is none zero value, the graph is plotted.???

also, since the last loop that shows the PDF graph for the data is repeating, i set the maximum of plot time for the testbench, so that only one complete graph is shown. 

In the debuging, after fix all the grammar and connection issue, the first problem appear is that, the first problem appeared is that, there 's no signal in the screen of vbuddy. I first use the instruction from the lab4,which kust use addi and bne instrution, there's till on signal. So i checked the vcd file. the problem is the isntrution is different fromn the actual instrution, so i check back to the instruiyon memory, the order is wrong, for the provided instuion, pdf.hex file the loading of instrution should be little endiatn, instead of large endian, so i change the order of reading in the instrution memory moducle, and test the counter instruion, the correct graph showsm the adding line. so i turn back to the pdf instruion 

so i go abck to the vcd file to check the problem, for the instrution that just use add or addi, they work well, as they're just from lab4. 
then it seems that the all the instution excecurted just limited to the loop1, which means the instruion are stuck in loop one, which means the jalr, the jump type isntrution not work. after add the sginal that used for enable jal instruion, it seems that the jump opertion is not enabled correctly, so back to the control unit, and check with the isntrutyion list on the end othe Digital design and architecture of risc-v , the probelm is got. the way of immediate value located in the insturyion is different from the current design, like for >>>>>>>

after this chagne, the program work well, but still not show the plotting. aftet use the vcd,  i found that it stuck in the second loop, which is load a word from data, and each time the data repeat from the .mem file the numebr is add one and store back to the place. this is for calculting the density of each value of the data. in this vserion, the cpu laod o from the percific place, add 1 , and next time it got to the same place, the cpu still laod 0, instead of 1, so that there's no value larger than 200, which will break the cycle for calcualting densityt. sicne the gram keep looping, the size of the vcd file is even 1.2 GB! take a long time to load the vcd file.
