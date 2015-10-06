/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpopback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:58:42 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 13:57:57 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_item	*ft_lstpop(t_list *list)
{
	t_item *tail;

	tail = list->tail;
	list->tail = tail->prev;
	tail->prev = 0;
	list->size--;
	if (list->tail)
		list->tail->next = 0;
	return (tail);
}
