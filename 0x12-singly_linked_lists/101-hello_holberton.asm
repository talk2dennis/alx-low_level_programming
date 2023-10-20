section .data
    helloMsg db 'Hello, Holberton',10
    msgLen equ $ - helloMsg

section .text
    global main 

    main:
    ; Write the message to stdout
    mov eax, 4         ; syscall number for sys_write
    mov ebx, 1         ; file descriptor 1 is stdout
    mov ecx, helloMsg  ; pointer to the message
    int 0x80           ; call kernel

    ; Exit the program
    mov eax, 1         ; syscall number for sys_exit
    xor ebx, ebx       ; exit code 0
    int 0x80           ; call kernel

