[bits 64]

	global _ft_memalloc
	extern _malloc, _bzero

_ft_memalloc:
	push r12
	push rbp
	mov rbp, rsp
	and rsp, -0xf				;16 bits stack align

	mov r12, rdi

	call _malloc

	test rax, rax
	jz fin

	mov rsi, r12
	mov r12, rax
	
	mov rdi, rax
	call _bzero

	mov rax, r12

fin:
	mov rsp, rbp
	pop rbp
	pop r12
	ret