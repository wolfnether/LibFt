/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpopat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:58:46 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 01:58:47 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_item	*ft_lstpopat(t_list *list, size_t i)
{
	t_item *item;
	t_item *prev;
	t_item *next;

	i = i % list->size;
	item = list->head;
	while (i--)
		item = item->next;
	next = item->next;
	prev = item->prev;
	if (prev)
		prev->next = next;
	if (next)
		next->prev = prev;
	item->prev = 0;
	item->next = 0;
	return (item);
}
