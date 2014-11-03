/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:58:38 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 01:58:39 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_item	*ft_lstpop(t_list *list)
{
	t_item *head;

	head = list->head;
	list->head = head->next;
	head->next = 0;
	list->size--;
	list->head->prev = 0;
	return (head);
}
