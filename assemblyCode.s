.text                       ; Start of code section
.equ light_timer, 0xFF     ; Define light_timer constant (address for a timer)
.equ light_port, 0xFE      ; Define light_port constant (address for light control)
.equ all_lights, 0b11111   ; Define all_lights constant (binary representation of 5 lights on)
.equ no_lights, 0x00       ; Define no_lights constant (all lights off)

main:                       ; Main program start
    LI a0, 0x01            ; Load the initial light pattern into register a0 (00001)
    LI t0, 5               ; Load the number of lights (5) into register t0 for countdown

turn_on_next_light:
    SB light_port, a0      ; Store the value of a0 to the light port (turn on lights)
    CALL wait              ; Call the wait function to pause between lights

    SLL a0, a0, 1          ; Shift the lights pattern in a0 left by 1 (turn on the next light)
    SUBI t0, t0, 1         ; Decrement the light counter
    BNEZ t0, turn_on_next_light ; If the light counter is not zero, continue the loop

    CALL wait              ; Call wait to hold all lights on for a moment
    LI a0, no_lights       ; Load the no_lights pattern into register a0 (turn off all lights)
    SB light_port, a0      ; Store the value of a0 to the light port (turn off all lights)
    J main                 ; Jump back to main to restart the sequence

turn_off_all_lights:
    LI a0, no_lights       ; Load the no_lights pattern into register a0
    SB light_port, a0      ; Store the value of a0 to the light port (turn off all lights)
    CALL wait              ; Call the wait function to pause before the end

    J main                 ; Jump back to main to restart the sequence

wait:                       ; Wait function to create delay between light changes
    LI t1, light_timer     ; Load the address of the timer
    
wait_loop:
    LBU a1, t1             ; Load the current timer value
    BNEZ a1, wait_loop     ; Loop until the timer value is zero
    RET                    ; Return from the wait function
