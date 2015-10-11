[BITS 64]

global _ft_memset

_ft_memset:
	mov rbx, rdi
	mov rcx, rdx
	mov al, sil
	rep stosb
	mov rax, rbx
    ret