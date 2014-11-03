/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 02:09:32 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:09:54 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_ltoa(long a)
{
	char s[(int)NOTOND(sizeof(long)) + 2];
	char *buf;

	buf = s + NOTOND(sizeof(long)) + 1;
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
