/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/06 14:36:18 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 14:41:05 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int st, size_t len)
{
	char *n;

	n = ft_strnew(len);
	if (!n)
		return (n);
	ft_strncpy(n, s + st, len);
	return (n);
}
