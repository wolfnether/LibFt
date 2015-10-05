/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstruct.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:51:54 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/05 19:37:31 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTSTRUCT_H

# define FTSTRUCT_H

typedef struct		s_cbuf
{
	char			*buf;
	size_t			size;
	size_t			rpos;
	size_t			wpos;
}					t_cbus;

typedef struct		s_item
{
	struct s_item	*prev;
	struct s_item	*next;
	struct s_list	*master;
}					t_item;

typedef struct		s_list
{
	struct s_item	*head;
	struct s_item	*tail;
	size_t			size;
}					t_list;

#endif
