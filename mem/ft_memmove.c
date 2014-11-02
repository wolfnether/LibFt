#include "../includes/libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
	void *tmp;

	tmp = malloc(n);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}