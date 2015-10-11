[BITS 64]

global _ft_bzero

_ft_bzero:
	mov rcx, rsi
	mov al, 0
	rep stosb
    ret