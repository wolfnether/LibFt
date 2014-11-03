#include "../includes/libft.h"

int ft_strncmp(const char *s1, const char *s2, int n){
	while (*s1 && *s2 && *s1 == *s2 && n--)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}