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