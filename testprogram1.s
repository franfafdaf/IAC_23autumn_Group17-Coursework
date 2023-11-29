.text 
main: 
    addi a2, a2, 13
    addi a3, a3, 4
    add a0, a2, a3 //a0 = 17 =0b10001
    sb a0, 3(a3)    //store 4 in mem[7]
    lw a1, 3(a3)
    addi a2, zero, 15
    addi a3, zero, 4
    add a0, a2, a3
    sw a0, 3(a3)
    lw a1, 3(a3)
    lbu a2, 3(a3)