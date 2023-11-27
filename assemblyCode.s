.text                           
.equ light_timer, 0xFF         ; Define light_timer constant (address for a timer)
.equ light_port, 0xFE          ; Define light_port constant (address for light control)
.equ button_port, 0xFD         ; Define button_port constant (address for button input)
.equ all_lights, 0b11111111       ; Define all_lights constant (binary representation of 5 lights on)
.equ no_lights, 0x0           ; Define no_lights constant (all lights off)
.equ button_pressed, 0x1      ; Define button_pressed constant (button signal)
.equ random_timer, 0xfff

; a1: dataMem pointer
; a0: number of light counter
; a3: random time counter


main:                          
    JAL     ra, wait_for_button         ; Jump to wait_for_button subroutine and link
    LI      a0, 0x01                    ; Load the initial light pattern into register a0 (00001)
    LI      t0, 8                       ; Load the number of lights into register t0
    LI      a3, 0

turn_on_next_light:
    LW      a1, light_port(a0)          ; turn on light accodring to the content in data mem
    JAL     ra, normal_wait             ; Jump to wait subroutine and link

    ADDI    a0, a0, 1                   ; Shift the lights pattern in a0 left by 1 (turn on the next light)
    BNE     t0, a0, turn_on_next_light  ; If the light counter is not 8, continue the loop

    JAL     ra, random_wait             ; all lights on  

turn_off_all_lights:
    LI      a0, 0                       ; reset a0 to 0
    LW      a1, no_lights               ; Store the value of a0 to the light port (turn off all lights             
    JAL     ra, main

normal_wait:
    LBU     a1, light_timer             ; load the normal light counter
loop_n:
    ADDI    a1, a1 -1                   ; loop until a1 is 0 
    BNE     a1, 0, loop_n
    RET

random_wait:
    BNE     a3, 2**8-1,  random_reset        ; check whether need to reset the random
    LBU     a1, random_timer(a3)             ; load the random time from DataMem
loop_r:
    ADDI    a1, a1, -1                       ; loop until time out
    BNE     a1, 0, loop_r
    RET

; wait_for_button:                                    ; Wait function to check for button press
;     LBU     a1, button_port                         ; Load the value from the button port into register a1
;     BNE     a1, button_pressed, wait_for_button     ; If button press bit is not equal, keep waiting
;     RET                      

random_reset:
    LI  a3, 0                                   ;reset the random timer to 0
    RET

