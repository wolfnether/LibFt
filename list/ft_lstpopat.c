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