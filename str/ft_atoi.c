#include "../includes/libft.h"

int ft_atoi(const char *nptr) {
	int i;
	int neg;

	i = 0;
	neg = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		neg = *nptr++ == '-' ? -1 : 1;
	while (ft_isdigit(*nptr)) {
		i *= 10;
		i += *nptr++ - '0';
	}
	return (i * neg);
}