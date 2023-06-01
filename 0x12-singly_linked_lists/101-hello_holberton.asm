section .data
    format db "Hello, Holberton", 10, 0

section .text
    extern printf

global main

main:
    mov edi, format
    xor eax, eax
    call printf

    xor eax, eax   ; Return 0
    ret

