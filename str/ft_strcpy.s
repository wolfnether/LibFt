[bits 64]

	global _ft_strcpy
	extern _ft_strlen
	
_ft_strcpy:
	mov r12, rdi
	mov r13, rsi
	mov rdi, rsi
	call _ft_strlen
	mov rcx, rax
	mov rdi, r12
	mov rsi, r13
	rep movsb
	mov rax, r12
	ret