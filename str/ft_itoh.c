/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:59:38 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:06:28 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_itoh(unsigned a)
{
	char s[NOTONX(sizeof(int)) + 2];
	char *buf;

	ft_bzero(s, NOTONX(sizeof(int)) + 2);
	buf = s + NOTONX(sizeof(int)) + 1;
	if (a > 0)
	{
		while (a)
		{
			*--buf = get_hex(a % 16);
			a /= 16;
		}
	}
	else if (a == 0)
		*--buf = '0';
	else
	{
		while (a)
		{
			*--buf = get_hex(a % 16);
			a /= 16;
		}
	}
	return (ft_strdup(buf));
}
