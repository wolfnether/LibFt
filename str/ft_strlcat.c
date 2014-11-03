#include "../includes/libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size){
	size_t	sizet[2];

	sizet[0] = ft_strlen(src);
	sizet[1] = ft_strlen(dst);
	if (sizet[1] >= size)
		return (sizet[0] + size);
	size -= sizet[1] + 1;
	while (*dst)
		dst++;
	while (*src && size--)
		*dst++ = *src++;
	*dst = 0;
	return (sizet[0] + sizet[1]);
}