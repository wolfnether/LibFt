[BITS 64]

	global _ft_strdup
	extern _ft_strnew, _ft_strlen, _ft_strcpy
	
_ft_strdup:
	push rdi
	call _ft_strlen

	mov rdi, rax
	call _ft_strnew

	test rax, rax
	jnz $+3
	ret

	mov rdi, rax
	pop rsi
	call _ft_strcpy
	ret