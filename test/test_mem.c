#include <stdio.h>
#include <limits.h>
#include "../includes/libft.h"

int test_str();

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

	//memdup
	test2 = ft_memdup(test, 10);
	if(ft_memcmp(test, test2, 10))
		return (8);
	free(test2);
	ft_memmove(test + 2, test, 5);
	if(ft_memcmp(test, "4545673000", 10))
		return (9);
	test2 = ft_memalloc(10);
	ft_bzero(test, 10);
	if(ft_memcmp(test, test2, 10))
		return (10);
	free(test);
	free(test2);
	printf("test mem OK!\n");
	return (test_str());
}

int test_str() {
	char *test;
	if(ft_atoi("10") != 10)
		return (1);
	if(ft_atoi("-10") != -10)
		return (2);
	test = ft_ltoa(INT_MIN);
	if(ft_atoi(test) != INT_MIN)
		return (3);
	free(test);
	test = ft_ltoa(INT_MAX);
	if(ft_atoi(test) != INT_MAX)
		return (4);
	free(test);
	test = ft_ltoa(10);
	if(ft_strcmp(test, "10"))
		return (5);
	free(test);
	test = ft_ltoa(-10);
	if (ft_strcmp(test, "-10"))
		return (6);
	free(test);
	test = ft_itoh(10);
	if(ft_strcmp(test, "A"))
		return (7);
	free(test);
	test = ft_itoh(-10);
	if(ft_strcmp(test, "FFFFFFF6"))
		return (7);
	printf("test str OK!\n");
	return (0);
}