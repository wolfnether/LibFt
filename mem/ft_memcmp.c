/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:57:02 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:06:31 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (*(char *)s1 == *(char *)s2 && n--)
	{
		s1++;
		s2++;
	}
	return (*(char *)s2 - *(char *)s1);
}
