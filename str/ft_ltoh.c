#include "../includes/libft.h"

char *ft_ltoh(long unsigned a) {
	char s[(int) NOTONX(sizeof(long)) + 2];
	char *buf;

	buf = s + NOTONX(sizeof(long)) + 1;
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