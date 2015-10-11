[BITS 64]
	global _ft_strcat
	extern _ft_strlen

_ft_strcat:
	push rdi

	call _ft_strlen
	sub rdi, 1
	push rdi
	
	mov rdi, rsi
	call _ft_strlen
	pop rdi
	
	mov rcx, rax
	rep movsb
	mov BYTE[rdi],0
	pop rax
	ret