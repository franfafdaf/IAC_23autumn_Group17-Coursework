init:
    addi s1, zero, 0x1      
    addi s2, zero, 0xff     // 0xff represents all lights on
    addi s3, zero, 0x3      // Fixed delay
    addi a3, zero, 0x1      // Seed for LFSR

rst:
    addi a0, zero, 0x0      // Turn off all lights
    addi a4, zero, 0x0      // Reset random delay counter
    addi t0, zero, 0x0      // Reset temp register

mainloop:
    beq  t0, s1, fsm       // Check if it's time to start light sequence
    srli a2, a3, 0x3       //LFSR
    andi a2, a2, 0x1
    xor  a2, a2, a3
    andi a2, a2, 0x1 
    slli a3, a3, 0x1 
    add  a3, a3, a2 
    andi a3, a3, 0xf
    jal  ra, mainloop      

fsm:
    jal  ra, lightdelay    
    slli t1, a0, 0x1       // Shift left temp bits
    addi a0, t1, 0x1       // Add 1 to shifted temp bits (turn on next light)
    bne  a0, s2, fsm       // Continue if not all lights are on
    jal  ra, randomdelay   // Jump to random delay after all lights are on

randomdelay:
    beq  a4, a3, rst       // If random delay is met, reset (turn off lights)
    addi a4, a4, 0x1       // Increment delay counter
    jal  ra, randomdelay   // Continue random delay

lightdelay:
    addi  a1, a1, 0x1      
    bne   a1, s3, lightdelay // Continue delay if not met
    addi  a1, zero, 0x0    // Reset counter
    RET

