/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/06 14:27:22 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 14:31:29 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ns;
	unsigned int	i;

	ns = ft_strdup(s);
	i = 0;
	while (*(s + i))
	{
		*(ns + i) = f(i, *(s + i));
		i++;
	}
	return ns;
}
