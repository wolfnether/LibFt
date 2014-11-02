#include "../includes/libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n) {
	while (n-- && *(char *) src != c)
		*(char *) dest++ = *(char *) src++;
	if (n)
		return (dest + 1);
	return (NULL);
}