/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:56:42 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/05 18:59:48 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while(n--)
	{
		if (*(unsigned char*)src == (unsigned char)c)
			return (dest + 1);
		*(unsigned char*)dest++ = *(unsigned char*)src++;
	}
	return (NULL);
}
