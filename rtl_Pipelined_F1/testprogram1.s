.text 
main: 
    addi a2, a2, 255            # 0f f6 06 13
    addi a3, a3, 4              # 00 46 86 93
    add a0, a2, a3              # 00 d6 05 33
    sb a0, 3(a3)                # 00 a6 81 a3
    lw a1, 3(a3)                # 00 36 a5 83
    addi a2, zero, 257          # 10 10 06 13
    addi a3, zero, 4            # 00 40 06 93
    add a0, a2, a3              # 00 d6 05 33
    sw a0, 3(a3)                # 00 a6 a1 a3
    lw a1, 3(a3)                # 00 36 a5 83
    lbu a2, 3(a3)               # 00 36 c6 03