/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 02:01:54 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 14:11:31 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *dest, const char *src, int s)
{
	int		i;
	size_t	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] && s--)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = 0;
	return (dest);
}
