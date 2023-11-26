init:
    addi s1, zero, 0x1
    addi s2, zero, 0xff 
    addi s3, zero, 0x10
    addi a3, zero, 0x1 

rst:
    addi a0, zero, 0x0
    addi t0, zero, 0x0
    addi t1, zero, 0x0

loop:
    beq t0, s1, fsm
    srli a2, a3, 0x3
    andi a2, a2, 0x1
    xor  a2, a2, a3
    andi a2, a2, 0x1 
    slli a3, a3, 0x1 
    add  a3, a3, a2 
    andi a3, a3, 0xf
    jal  ra, mainloop

fsm:
    addi a0, a0, a0
    addi a0, a0, 0x1
    jal ra, lightdelay
    bne a0, s2, fsm

inrement:
    beq a3, t1, rst
    addi t1, t1, 0x1
    jal  ra, increment

lightdelay:
    addi  a1, a1, 0x1
    bne   a1, s3, lightdelay
    addi  a1, zero, 0x0
    RET