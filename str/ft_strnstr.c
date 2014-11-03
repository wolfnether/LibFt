/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 02:01:32 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:07:16 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (big[i])
	{
		if (!little[j] || j == len)
			return ((char *)big + i);
		else if (!big[i + j] && little[j])
			return (0);
		else if (big[i + j] == little[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
