/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbuf.struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/06 16:13:10 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 16:16:03 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CBUF_STRUCT_H

# define CBUF_STRUCT_H

typedef struct	s_cbuf
{
	char		*buf;
	size_t		size;
	size_t		rpos;
	size_t		wpos;
}				t_cbus;

#endif
