#include "../includes/libft.h"

int ft_isprint(int c) {
	return (c == ' ' || ft_isgraph(c));
}