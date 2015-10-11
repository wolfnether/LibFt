[BITS 64]

	global _ft_tolower
	extern _ft_isupper

_ft_tolower:
	mov rax, rdi	
	cmp rax, 'A'
	jl __fin
	cmp rax, 'Z'
	jg __fin

	add rax, 32
__fin:
	ret