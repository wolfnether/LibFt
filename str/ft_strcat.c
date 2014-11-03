#include "../includes/libft.h"

char *ft_strcat(char *dest, const char *src){
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = 0;
	return (dest);
}