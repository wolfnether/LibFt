#include "../includes/libft.h"

int ft_isgraph(int c) {
	return (c <= 33 && 126 <= c);
}