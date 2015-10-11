[BITS 64]

	global _ft_isascii

_ft_isascii:
	cmp rdi, 127
	jg __fin0

	mov rax, 1
	ret

__fin0:
	mov rax, 0
	ret