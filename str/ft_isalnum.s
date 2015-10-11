[BITS 64]

	global _ft_isalnum
	extern _ft_isdigit, _ft_isalpha

_ft_isalnum:
	call _ft_isalpha
	test rax, rax
	jnz f
	call _ft_isdigit
f:	ret