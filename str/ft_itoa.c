/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:59:33 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:10:13 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_itoa(int a)
{
	char s[(int)NOTOND(sizeof(int)) + 2];
	char *buf;

	buf = s + NOTOND(sizeof(int)) + 1;
	if (a > 0)
	{
		while (a)
		{
			*--buf = '0' + (a % 10);
			a /= 10;
		}
	}
	else if (a == 0)
		*--buf = '0';
	else
	{
		while (a)
		{
			*--buf = '0' - (a % 10);
			a /= 10;
		}
	}
	return (ft_strdup(buf));
}
