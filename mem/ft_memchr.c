#include "../includes/libft.h"

void *ft_memchr(const void *s, int c, size_t n) {
	while (n--) {
		if (*(char *) s++ == (unsigned char) c)
			return ((void *) s - 1);
	}
	return (NULL);
}