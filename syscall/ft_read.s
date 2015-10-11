[bits 64]

	global _ft_read

_ft_read:
	xor rax, rax
	mov	rax, 0x2000003
	syscall
	jnc fin
	mov rax, -1
fin:ret