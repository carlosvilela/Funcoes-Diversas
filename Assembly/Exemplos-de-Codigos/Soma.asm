; Desenvolvido em Visual Studio 2012 com MASM
.686p
.model tiny

.code
main proc

mov eax, 05h	; move 05h para o registrador eax
mov ebx, 02h	; move 02h para o registrador ebx
add eax, ebx	; soma ebx ao eax e deixa o resultado em eax

main endp
end main
