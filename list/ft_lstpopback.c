#include "../includes/libft.h"

t_item	*ft_lstpop(t_list *list)
{
	t_item *tail;

	tail = list->tail;
	list->tail = tail->prev;
	tail->prev = 0;
	list->size--;
	list->tail->next = 0;
	return (tail);
}