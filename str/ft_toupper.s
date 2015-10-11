[BITS 64]

	global _ft_toupper

_ft_toupper:
	mov rax, rdi

	cmp rax, 'a'
	jl __fin
	cmp rax, 'z'
	jg __fin

	sub rax, 32
__fin:
	ret