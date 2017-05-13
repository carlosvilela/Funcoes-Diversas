.486
.model tiny

.code
main:

mov eax, 0h ; Zera o Registrador
mov ebx, 0h ; Zera o Registrador
mov edx, 0h ; Zera o Registrador

mov ax, 011h ; 17
mov bx, 02h ; 2

div bx ; 17/2

; EAX = 00000008 -> Quociente
; EBX = 00000002 -> Divisor
; EDX = 00000001 -> Resto





end main

