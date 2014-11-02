#include "../includes/libft.h"

char *ft_ltoa(long a) {
	char s[(int) NOTOND(sizeof(long)) + 2];
	char *buf;

	buf = s + NOTOND(sizeof(long)) + 1;
	if (a > 0) {
		while (a) {
			*--buf = '0' + (a % 10);
			a /= 10;
		}
	}
	else if (a == 0) {
		*--buf = '0';
	}
	else {
		while (a) {
			*--buf = '0' - (a % 10);
			a /= 10;
		}
	}
	return (ft_strdup(buf));
}