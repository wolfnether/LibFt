#include "../includes/libft.h"

char *ft_itoa(int a) {
	char s[(int) NOTOND(sizeof(int)) + 2];
	char *buf;

	buf = s + NOTOND(sizeof(int)) + 1;
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