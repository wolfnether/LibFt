#include "../includes/libft.h"

long ft_atol(const char *nptr) {
	long i;
	int neg;

	i = 0;
	neg = 1;
	while (ft_isblank(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		neg = *nptr++ == '-' ? -1 : 1;
	while (ft_isdigit(*nptr)) {
		i *= 10;
		i += *nptr++ - '0';
	}
	return (i * neg);
}