#include "../includes/libft.h"

char *ft_strncat(char *dest, const char *src, int s){	int i;
	size_t j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] && s--)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = 0;
	return (dest);
}