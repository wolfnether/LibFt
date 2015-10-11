[BITS 64]

	global _ft_isalpha
	extern _ft_islower, _ft_isupper
	
_ft_isalpha:
	call _ft_islower
	test rax, rax
	jz f1
	call _ft_isupper
	ret
f1:	mov rax, 1
	ret