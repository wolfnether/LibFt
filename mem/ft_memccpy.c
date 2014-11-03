/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:56:42 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:06:31 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n-- && *(char *)src != c)
		*(char *)dest++ = *(char *)src++;
	if (n)
		return (dest + 1);
	return (NULL);
}
