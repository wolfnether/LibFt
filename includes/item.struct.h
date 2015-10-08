/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   item.struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/06 16:16:19 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/08 12:37:04 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITEM_STRUCT_H

# define ITEM_STRUCT_H

typedef struct		s_item
{
	struct s_item	*prev;
	struct s_item	*next;
	struct s_list	*master;
}					t_item;

#endif
