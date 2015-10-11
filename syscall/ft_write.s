[BITS 64]

global _ft_write

_ft_write:
	xor rax, rax
	mov rax, 0x2000004
	syscall
	ret