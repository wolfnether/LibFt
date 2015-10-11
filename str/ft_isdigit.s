[BITS 64]

	global _ft_isdigit

_ft_isdigit:					;'0' <= rdi && rdi <= '9'
	cmp rdi, '0'
	jl __fin0					;rdi > '0'
	
	cmp rdi, '9'
	jg __fin0					;rdi < '9'
	
	mov rax, 1
	ret
__fin0:
	mov rax, 0
	ret