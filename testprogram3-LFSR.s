    addi a3, zero, 0x7f # 0100_0000         07 f0 07 93
    
    countdown_random: 
    srli t1, a3, 2                          00 27 d2 93
    andi t1, t1, 0x1                        00 12 f2 93
    srli t2, a3, 6                          00 67 d3 13
    andi t2, t2, 0x1                        00 13 73 13
    xor t1, t1, t2                          00 62 c2 b3
    andi t2, a3, 0x3f # 0011_1111           03 f7 f3 13
    slli t2, t2, 1                          00 13 13 13
    add t1, t1, t2                          00 62 82 b3
    andi a3, t1, 0x7f                       07 f2 f7 93
    jal ra, countdown_random                fd df f0 ef
