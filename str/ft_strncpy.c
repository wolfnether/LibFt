#include "../includes/libft.h"

char *ft_strncpy(char *dest, const char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && n--)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}