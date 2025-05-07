%include "io.inc"

section .text
global CMAIN
CMAIN:
    MOV ECX, [num]
    CMP ECX, 1 ; Se for 1, não é primo
    JE NOTPRIME
    SUB ECX, 1
    CMP ECX, 1 ; Se for 2, é primo
    JE PRIME
    LOOP:
        MOV EAX, [num]
        MOV EDX, 0
        IDIV ECX
        CMP EDX, 0
        JE NOTPRIME
        SUB ECX, 1
        CMP ECX, 1
        JNE LOOP
    JMP PRIME

global PRIME
PRIME:
    PRINT_UDEC 1, 1
    RET
          
global NOTPRIME
NOTPRIME:
    PRINT_UDEC 1, 0
    RET
    
section .data
num DD 23