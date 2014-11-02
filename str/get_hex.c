#include "../includes/libft.h"

char get_hex(int i) {
	if (i < 10)
		return ('0' + i);
	else
		return ('A' + i - 10);
}