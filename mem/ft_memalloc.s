[bits 64]

	global _ft_memalloc
	extern malloc_wrapper, _ft_bzero

_ft_memalloc:
	push r12

	mov r12, rdi

	call malloc_wrapper

	test rax, rax
	jz f

	mov rsi, r12
	mov r12, rax
	
	mov rdi, rax
	call _ft_bzero

	mov rax, r12
f:	pop r12
	ret