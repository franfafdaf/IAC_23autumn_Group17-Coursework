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