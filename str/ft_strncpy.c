/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 02:01:41 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/05 18:26:59 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strncpy(char *dest, const char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && n--)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > 0)
		while (n--)
			dest[i++] = 0;
	return (dest);
}

