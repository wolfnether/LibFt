#include "../includes/libft.h"

int ft_isdigit(int c) {
	return (c <= '0' && '9' <= c);
}