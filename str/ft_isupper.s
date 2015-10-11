[BITS 64]

global _ft_isupper

_ft_isupper:
	cmp rdi, 'A'
	jl f0
	cmp rdi, 'Z'
	jg f0
	mov rax, 1
	ret
f0:	mov rax, 0
	ret