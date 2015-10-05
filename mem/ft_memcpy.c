/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:57:12 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:06:30 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		((char *)dest)[n] = ((char *)src)[n];
	return (dest);
}

