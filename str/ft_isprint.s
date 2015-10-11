[BITS 64]

	global _ft_isprint

_ft_isprint:					; space to ~ (32 <= c && c <= 126)
	cmp rdi, 32
	jl __fin0

	cmp rdi, 126
	jg __fin0

	mov rax, 1
	ret

__fin0:
	mov rax, 0
	ret
	