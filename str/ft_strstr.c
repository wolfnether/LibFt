/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 02:01:27 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/05 17:28:00 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i])
	{
		if (!haystack[i + j] && needle[j])
			return (0);
		else if (!needle[j])
			return ((char *)haystack + i);
		else if (haystack[i + j] == needle[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	if (*haystack == *needle && *needle == 0)
		return ((char *)haystack);
	else 
		return (0);
}
