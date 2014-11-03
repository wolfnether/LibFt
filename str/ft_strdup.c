#include "../includes/libft.h"

char *ft_strdup(const char *s){
	char *n;

	n = ft_strnew(ft_strlen(s));
	return (ft_strcpy(n, s));
}