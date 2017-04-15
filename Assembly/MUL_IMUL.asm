.686p
.model small

.code
start:

mov eax, 02h
mov ebx, 03h
mov ecx, 04h

imul ebx, ecx ; pode multiplicar com qualquer registrador
; EBX*ECX = (resultado no primeiro - EBX)

mul ecx ; multiplica apenas com o registrador eax, ax, etc..
; EAX*ECX = (Resultado apenas no EAX)



end start
