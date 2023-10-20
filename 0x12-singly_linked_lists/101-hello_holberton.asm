section .data
    hello db "Hello, Holberton",0   ; The string to print

section .text
    global main
    extern printf

main:
    sub rsp, 8                      ; Align the stack
    mov rdi, hello                  ; Load the address of the string
    call printf                     ; Call printf
    add rsp, 8                      ; Restore the stack

    mov rax, 60                     ; syscall: exit
    xor rdi, rdi                    ; status: 0
    syscall                         ; Call the kernel
