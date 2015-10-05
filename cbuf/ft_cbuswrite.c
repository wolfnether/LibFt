/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cbuswrite.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/05 19:35:41 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/05 19:35:46 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_cbufwrite(t_cbus *cbuf, char *s, size_t l)
{
	cbuf->wpos %= cbuf->size;
	cbuf->rpos %= cbuf->size;
	while (l--)
	{
		if (cbuf->wpos - cbuf->rpos == 1)
			cbuf->rpos++;
		cbuf->buf[cbuf->wpos++ % cbuf->size] = *s++;
	}
}
