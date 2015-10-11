[bits 64]

	global _ft_memccpy

_ft_memccpy:
l:	test rcx, rcx
	jz nf
	dec rcx
	cmp [BYTE rsi],dl
	je f
	mov al, [rsi]
	mov [rdi], al
	inc rdi
	inc rsi
	jmp l
	
f:	mov rax, rdi
	inc rax
	jmp e

nf:	mov rax, 0
e:	ret