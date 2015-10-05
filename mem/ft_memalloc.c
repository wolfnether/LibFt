/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memaloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 02:25:58 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:26:06 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void *new;

	new = malloc(size);
	if (!new)
	{
		ft_putstr_fd("Out of memory", 2);
		exit(0);
	}
	ft_bzero(new, size);
	return (new);
}

