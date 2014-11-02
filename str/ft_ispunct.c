#include "../includes/libft.h"

int ft_ispunct(int c) {
	return (ft_isgraph(c) && !ft_isalnum(c));
}