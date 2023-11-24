init:
    addi s1, zero, 0x1
    addi s2, zero, 0xff
    addi s3, zero, 0x3
    addi a3, zero, 0x1

rst:
    addi a0, zero, 0x0
    addi a4, zero, 0x0
    addi t0, zero, 0x0
    jal  zero, mainloop

mainloop:
    beq  t0, s1, fsm
    srli a2, a3, 0x3    
    andi a2, a2, 0x1    
    xor  a2, a2, a3     
    andi a2, a2, 0x1    
    slli a3, a3, 0x1    
    add  a3, a3, a2     
    andi a3, a3, 0xf    
    jal  ra, mainloop

fsm:
    jal  ra, lightdelay
    slli t1, a0, 0x1
    addi a0, t1, 0x1
    bne  a0, s2, fsm
    jal  zero, increment

increment:
    beq  a4, a3, rst
    jal  ra, lightdelay
    addi a4, a4, 0x1
    jal  ra, increment

lightdelay:
    addi  a1, zero, 0x0
    addi  t2, zero, s3
delay_loop:
    addi  a1, a1, 0x1
    bne   a1, t2, delay_loop
    RET      