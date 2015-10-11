[bits 64]

	global malloc_wrapper
	extern _malloc

malloc_wrapper:
	push rbp
	mov rbp, rsp
	and rsp, -0xf
	call _malloc
	mov rsp, rbp
	pop rbp
	ret