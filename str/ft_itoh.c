#include "../includes/libft.h"

char *ft_itoh(unsigned a) {
	char s[(int) NOTONX(sizeof(int)) + 2];
	char *buf;

	buf = s + NOTONX(sizeof(int)) + 1;
	if (a > 0) {
		while (a) {
			*--buf = get_hex(a % 16);
			a /= 16;
		}
	}
	else if (a == 0) {
		*--buf = '0';
	}
	else {
		while (a) {
			*--buf = get_hex(a % 16);
			a /= 16;
		}
	}
	return (ft_strdup(buf));
}