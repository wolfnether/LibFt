/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/06 14:41:30 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 15:04:09 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *n;

	n = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!n)
		return (n);
	ft_strcpy(n, s1);
	ft_strcpy(n + ft_strlen(s1), s2);
	return (n);
}
