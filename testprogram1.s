.text 
main: 
    addi a2, a2, 255
    addi a3, a3, 4
    add a0, a2, a3
    sb a0, 3(a3)   
    lw a1, 3(a3)
    addi a2, zero, 257
    addi a3, zero, 4
    add a0, a2, a3
    sw a0, 3(a3)
    lw a1, 3(a3)
    lbu a2, 3(a3)