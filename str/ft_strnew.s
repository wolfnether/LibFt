[BITS 64]

	global _ft_strnew
	extern _ft_memalloc
	
_ft_strnew:
	inc rdi
	call _ft_memalloc
	ret