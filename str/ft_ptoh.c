/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 02:07:57 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:08:30 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_ptoh(void *p)
{
	#if __WORDSIZE == 32
		return (ft_itoh((unsigned int)p));
	#elif __WORDSIZE == 64
		return (ft_ltoh((unsigned long)p));
	#else
		return (ft_strdup("0"));
	#endif
}

