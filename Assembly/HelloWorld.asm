org 100h

mov dx, offset msg1
mov ah, 09h
int 21h

mov dx, offset msg2
mov ah, 09h
int 21h


ret         

msg1 db "Hello World",0ah, 0dh, "$"
msg2 db "welcome $"
