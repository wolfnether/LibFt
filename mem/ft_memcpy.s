[BITS 64]

global _ft_memcpy

_ft_memcpy:
	mov rax, rdi
	mov rcx, rdx
	rep movsb
    ret