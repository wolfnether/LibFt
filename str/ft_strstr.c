#include "../includes/libft.h"

char *ft_strstr(const char *haystack, const char *needle){
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		if (!haystack[i + j] && needle[j])
			return (0);
		else if (!needle[j])
			return ((char *)haystack + i);
		else if (haystack[i + j] == needle[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}