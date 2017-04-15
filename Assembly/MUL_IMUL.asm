.686p
.model small

.code
start:
;Multiplicar com numeros negativos
mov eax, 0h
sub eax, 02h ; EAX = -2
mov ebx, 0h
sub ebx, 02h ; EBX = -2


imul ebx ; IMUL para numeros negativos e MUL para numeros positivos


end start
