/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbuscreate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 10:32:55 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 10:32:55 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_cbus	*ft_cbufcreate(size_t size)
{
	t_cbus	*cbus;

	cbus = ft_memalloc(sizeof(*cbus));
	cbus->buf = ft_memalloc(size);
	cbus->size = size;
	return (cbus);
}