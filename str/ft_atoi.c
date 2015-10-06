/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:59:12 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 14:03:51 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int neg;

	i = 0;
	neg = 1;
	while (ft_isspace(*nptr))
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
