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

back to the dat memory file, everything seems to be fine, really wired, so i go check other files, also nothing wrong. the took me two days, when i turn back to the summary of set for isntrution from the book, for the store byte(SB) instrution, it just says that address 7:0 = rd2(7:0), which just store a byte, but in our design, 24 zero bits are added as extend to this instuion, which may just romove the data in the 3 front adress, or just not been recognized by the cpu itseld. after fixing this probeldm, the correct version of the data is shown. 

Pipelened processor
for the pipelined processor, there's several moducles need to be added, the hazard control unit and the 4 flip flop which used to seperate the signle cycle processor to a pipelined version. First I concentrate on the hazard unit, I build the logic accoridng to hte conetent on book, and use comment to note the function of each part, since there's mainly three hazaed that need to be control: the forwaring, stall and flush.
for forwarding, when the next instruiton need the data in register file, but the first instruyion haven't finish, the data can be forwad to next instrution, which won't influence the performance of the cpu. for the stall, when stalling, there

when flush, it occurs when there's a jump instrution, when the jump happen, the previous instrution is loaded , but they are acutally not need, so when the juamp control enabled, these instution should be removed from each flip flop.

i rename the logic in each stage, like the fetech, decode, with a prefix and change small logic to fit the pipelined version, like in the signle cycle version, the pc decode, which used to decide the value of next pc, is include in the control unit, but for now it needed to be moved out to be an independt unit to fit the pipelined logic.


 after a lot change on the renaming and connecting in the top level, i tun the reference programming, noting is shown in vbuddy screen, back to the vcd file, it seems that that the processor again stuck in the last loop, but there's nothing wrong with the SB logic this time, when i add more related signal on the wave viewer, i found the proeblem, the mux that slelect the input to the data memory not work properly. so back to the top level, i found there's a miss conncetion with this port, after fix this problem, the correct graph is shown.



 Cache

 at first, our group want to have a 4-way, 8set, block size 128 bit cache with write back function, but it's too complex to finish, so the desgin return back to the 2 -way version, to simplify the used bit logic I keep the control siganl from the data mem, to control the performance. the cache is sepearet into smaller register file, like the valid, tag, data and lru. in this way, for loop can be sued to initialied the valid and lru each time the cpu is started, and whether the block is hit or not can also be easily found.










I bought buy a macbook air for this course, as my windows pc can't connect to the vbuddy.


what i did:
I'm mainly for debuging and testing for each modelu, from singlecycle to cache. So I need to read all the files and understand the interaction of them with other files.

In the single-cycle processor implementation, the most challenging bug I encountered was with the SB (store byte) instruction. During testing, I noticed the VCD file size was a massive 1 GB, which seemed unusual for waveform data. Upon examining the waveform, I observed that the third cycle was stuck in a loop, and the 'a0' register value remained zero. A closer look at the loop revealed a counter alternating between 1 and 0, preventing an exit from the loop. The processor used bne, SB, LW, and addi instructions. Since addi was previously verified in lab4, I ruled it out as a cause. Bne seemed unlikely to be the issue, so I suspected the problem might lie with the SB or LW instruction.

Reviewing the SystemVerilog file and its connections at the top level, everything appeared normal. Consulting the instruction table in the Hennessy and Patterson book, I noticed that for SB, only the byte itself should be sent to the data memory without any offset. However, we incorrectly added a 24-bit zero offset to the byte to be stored. This error could cause the RISC-V processor to misinterpret the instruction as a store word or to clear the contents of the three preceding addresses, resulting in the LW instruction always retrieving zero in each loop and failing to increment beyond 1.

The second issue involved the bne instruction, where the immediate value was incorrectly assigned. This error is crucial as the immediate handling in bne differs from other instructions.


after using a small test instutyion to test these instrion, work , but stilo not work in the main reference program.




for the Pipelined version, there's something wrong with the SB instrutyion again, but the bug is quickly find by me: there's an error connecitng in the top file, which keep the RD2 of the data mem connected to the alu output, instead of switching with the control of alusrc in the hazard and control unit. the pipreline work well after I change the incorrect connecitng line.

sepcial design:
in the testbench, i nned to plot the a0 to show the pdf of the sample sigal. after reading the instruyion, I find that there's three loop before ploting, which means if I just plot ao, it will take a long time until the graph change to non-zero value. So in the test bench, I modify the code so that it is only ploted when the data is non-zero. then, when i run the code, the vbuddy suddenly jumo to the place where the pdf graph is ploting, which is in arounf thousand or ten thousand of cycles. with this special design, a lot of time for testing is saved.





if i have again chance, i will finish the sigle and pipelined version more queickly, with more cautious implemetation of the logic to reduce the error. in this way i can implement the cache which is completed.