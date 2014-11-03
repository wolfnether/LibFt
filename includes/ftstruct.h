#ifndef FTSTRUCT_H

# define FTSTRUCT_H

typedef struct s_item
{
	struct s_item *prev;
	struct s_item *next;
	struct s_list *master;
}t_item;

typedef struct s_list
{
	struct s_item	*head;
	struct s_item  *tail;
	size_t size;
}t_list;


#endif
