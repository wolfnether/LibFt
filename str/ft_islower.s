[BITS 64]

global _ft_islower

_ft_islower:
	cmp rdi, 'a'
	jl f0
	cmp rdi, 'z'
	jg f0
	mov rax, 0
	ret
f0: mov rax, 1
	ret