/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 02:01:30 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/05 17:38:26 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s) + 1;
	while (i--)
	{
		if (*(s + i) == c)
			return ((char *)s + i);
	}
	return (0);
}
