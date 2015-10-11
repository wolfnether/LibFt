[bits 64]

	global _ft_memmove
	extern malloc_wrapper, free_wrapper, _ft_memcpy

_ft_memmove:
	push r12
	push r13
	push r14
	push r15
	
	mov r12, rdi
	mov r13, rsi
	mov r14, rdx

	mov rdi, r14
	call malloc_wrapper
	mov r15, rax

	mov rdi, r15
	mov rsi, r13
	mov rdx, r14
	call _ft_memcpy

	mov rdi, r12
	mov rsi, r15
	mov rdx, r14
	call _ft_memcpy

	mov rdi, r15
	call free_wrapper

	mov rax, r12

	pop r15
	pop r14
	pop r13
	pop r12
	ret