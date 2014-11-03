/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:58:33 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 01:58:33 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstpushback(t_list *list, t_item *item, size_t size)
{
	t_item *tail;
	t_item *new;

	tail = list->tail;
	new = ft_memdup(item, size);
	if (!new)
		return ;
	list->tail = new;
	tail->next = new;
	new->prev = tail;
	new->next = 0;
	list->size++;
	item->master = list;
}
