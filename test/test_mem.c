#include "../includes/libft.h"

int main()
{
	char *test;
	char *test2;

	test = strdup("123456789");

	//bzero
	ft_bzero(test, 10);
	if (memcmp(test, "123456789", 10) == 0)
		return (1);

	//memset
	ft_memset(test, '0', 10);
	if(memcmp(test, "0000000000", 10))
		return (2);

	//memcpy
	ft_memcpy(test, "112233", 5);
	if(memcmp(test, "1122300000", 10))
		return (3);

	//memccpy
	ft_memccpy(test, "456789", '8', 5);
	if(memcmp(test, "4567300000", 10))
		return (4);

	//memchr
	test2 = ft_memchr(test, '3', 10);
	if (test + 4 != test2)
		return (5);
	test2 = ft_memchr(test, '2', 10);
	if(test2 != 0)
		return (6);

	//memcmp
	if (ft_memcmp(test, test + 2, 5) == memcmp(test, test + 2, 5))
		return (7);
	return (0);
}