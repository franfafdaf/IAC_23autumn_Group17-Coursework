main: 
    addi a0, zero, 0x0
    addi a2, zero, 24   //a2 is the counter for fixed period
    addi a3, zero, 0xff //a3 is the destination value
    jal ra, countdown_fix 

increase: 
    slli a0, a0, 1
    addi a0, a0, 1
    beq a0, a3, random_main
    addi a2, zero, 24
    jal ra, countdown_fix

countdown_fix:
    addi a2, a2, -1
    bne a2, zero, countdown_fix
    jal ra, increase

random_main:
    auipc a4, 0x0   //load the program counter to a4
    jal ra, countdown_random

countdown_random:
    addi a4, a4, -1
    addi a5, zero, 0x7f //t0 is initialised value of 7 bit LFSR
    bne a4, zero, random_generate
    jal ra, countdown_final

random_generate:
    srli t0, a5, 2
    andi t0, t0, 0x1
    srli t1, a5, 6
    andi t1, t1, 0x1
    xor t0, t0, t1
    andi t1, a5, 0x3f //0011_1111
    slli t1, t1, 1
    add t0, t0, t1
    jal ra, countdown_random

countdown_final:
    addi t0, t0, -1
    bne t0, zero, countdown_final
    addi a0, zero, 0x0

    
