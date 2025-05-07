%include "io.inc"

section .text
global CMAIN
CMAIN:
    MOV ECX, [num]
    MOV EAX, 1
    LOOP:
        IMUL EAX, ECX
        SUB ECX, 1
        JNZ LOOP
    JMP END

global END
END:
    PRINT_UDEC 4, EAX
    RET
    
section .data
num DD 12 ;12 é o fatorial máximo que pode ser impresso em 4 bytes