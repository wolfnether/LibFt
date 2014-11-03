/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:59:17 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:06:30 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long ft_atol(const char *nptr)
{
	long	i;
	int		neg;

	i = 0;
	neg = 1;
	while (ft_isblank(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		neg = *nptr++ == '-' ? -1 : 1;
	while (ft_isdigit(*nptr))
	{
		i *= 10;
		i += *nptr++ - '0';
	}
	return (i * neg);
}
