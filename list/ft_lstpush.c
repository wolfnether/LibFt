/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:58:25 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 01:58:26 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstpush(t_list *list, t_item *item, size_t size)
{
	t_item *head;
	t_item *new;

	head = list->head;
	new = ft_memdup(item, size);
	if (!new)
		return ;
	list->head = new;
	head->prev = new;
	new->next = head;
	new->prev = 0;
	list->size++;
	item->master = list;
}
