	[BITS 64]

	global _ft_strlen

_ft_strlen:
	mov rcx, -1
	mov rax, 0
	repnz scasb
	mov rax, rcx
	neg rax
	sub rax, 2
	ret