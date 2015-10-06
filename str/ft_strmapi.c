/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/06 14:27:22 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 14:30:18 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ns;
	int		i;

	ns = ft_strdup(s);
	i = 0;
	while (*(s + i))
	{
		*(ns + i) = f(*(s + i));
		i++;
	}
	return ns;
}
