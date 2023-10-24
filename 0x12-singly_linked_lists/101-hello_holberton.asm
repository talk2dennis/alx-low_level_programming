section .data
    helloMsg db "Hello, Holberton",10, 0
    format: db "%s", 0 

section .text
    global main
    extern printf 

    main:
    ; Write the message to stdout
    push rbp
    mov rdi, format 
    mov rsi, helloMsg
    mov rax, 0
    call printf
    pop rbp
    mov rax, 0
    ret
