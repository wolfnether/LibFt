[bits 64]

	global free_wrapper
	extern _free

free_wrapper:
	push rbp
	mov rbp, rsp
	and rsp, -0xf
	call _free
	mov rsp, rbp
	pop rbp
	ret