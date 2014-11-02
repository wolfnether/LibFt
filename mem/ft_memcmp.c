#include "../includes/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n) {
	while (*(char *) s1 == *(char *) s2 && n--) {
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}