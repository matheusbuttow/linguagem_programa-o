%include "io.inc"

section .text
global CMAIN
CMAIN:
    MOV EAX, [num]
    MOV EBX, 1
    LOOP:
        CMP EBX, EAX
        JG END
        CALL ODD
        ADD EBX, 2
        JMP LOOP
        
global ODD
ODD:
    PRINT_UDEC 4, EBX
    PRINT_CHAR ' '
    RET
    
global END
END:
    RET
    
section .data
num DD 80