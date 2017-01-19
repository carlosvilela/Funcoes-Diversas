;conversao
;sub/add  al, 48          ; decimal
;sub/add  al, '0'         ; character code
;sub/add  al, 30h         ; hex
;sub/add  al, 0x30        ; hex again
;sub/add  al, 60q         ; octal
;sub/add  al, 00110000b   ; binary



org 100h

mov dx, offset frase
mov ah, 09h
int 21h

;mov al, 0h
mov ah, 01h
int 21h
sub al, 30h
mov valor1,al

;mov al, 0h
mov ah, 01h
int 21h
sub al, 30h
mov valor2, al


mov al, valor1
add al, valor2
mov resultado, al


mov ah,2h

mov dl,';'
int 21h

mov dl, ' '
int 21h

add valor1, '0'
mov dl,valor1
int 21h
 
mov dl,"+"           ;display + sign
int 21h

add valor2, '0'
mov dl,valor2
int 21h
 
 
mov dl,'='           ;display = sign
int 21h

add resultado, '0'
mov dl,resultado
int 21h
 
mov ah,4ch
int 21h




ret

frase db "Insira um valor de 2 digitos: $"

valor1 db 0
valor2 db 0

resultado db 0
