/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/06 16:18:53 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 16:20:43 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_STRUCT_H

# define LIST_STRUCT_H

typedef struct		s_list
{
	struct s_item	*head;
	struct s_item	*tail;
	size_t			size;
}					t_list;

#endif
