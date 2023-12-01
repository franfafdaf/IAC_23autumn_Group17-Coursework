    addi a5, zero, 0x7f # 0100_0000                         07 f0 07 93
    srli t0, a5, 2                  00 27 d2 93
    andi t0, t0, 0x1                    00 12 f2 93
    srli t1, a5, 6                  00 67 d3 13
    andi t1, t1, 0x1                    00 13 73 13
    xor t0, t0, t1                  00 62 c2 b3
    andi t1, a5, 0x3f # 0011_1111                   03 f7 f3 13
    slli t1, t1, 1                  00 13 13 13
    add t0, t0, t1                  00 62 82 b3
    andi t0, t0, 0x3f                   03 f2 f2 93
    jal ra, countdown_random