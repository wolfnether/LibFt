#include "../includes/libft.h"

char *ft_ptoh(void *p) {
	if (sizeof(p) == sizeof(int))
		return ft_ltoh((unsigned long) p);
	else if (sizeof(p) == sizeof(long))
		return ft_ltoh((unsigned long) p);
	return (ft_strdup("0"));
}