#include "../includes/libft.h"

char *ft_strrchr(const char *s, int c){
	size_t i;

	i = ft_strlen(s);
	s += i;
	while (i--)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}