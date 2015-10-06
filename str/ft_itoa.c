/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:59:33 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 14:06:59 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa(int a)
{
	char s[NOTOND(sizeof(int)) + 2];
	char *buf;

	ft_bzero(s, NOTOND(sizeof(int)) + 2);
	buf = s + NOTOND(sizeof(int)) + 1;
	if (a > 0)
	{
		while (a)
		{
			*--buf = (char)('0' + (a % 10));
			a /= 10;
		}
	}
	else if (a == 0)
		*--buf = '0';
	else
	{
		while (a)
		{
			*--buf = (char)('0' - (a % 10));
			a /= 10;
		}
		*--buf = '-';
	}
	return (ft_strdup(buf));
}
