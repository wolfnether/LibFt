#include "../includes/libft.h"

int ft_isspace(int c) {
	return (c == ' ' || c == '\f' || c == '\n'
			|| c == '\r' || c == '\t' || c == '\t');
}