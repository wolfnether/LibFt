/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/06 14:46:53 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 15:06:51 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	ft_splitter(char **as, char const *s, char c)
{
	size_t		n;
	char		**tas;

	tas = as;
	while (*s == c)
		s++;
	while (*s)
	{
		n = 0;
		if (*s == c)
		{
			s++;
			while (*(s + n) != c && *(s + n) != 0)
				n++;
		}
		if (n)
		{
			*tas++ = ft_strsub(s, 0, n);
			s += n;
		}
		s++;
	}
}

char		**ft_strsplit(char const *s, char c)
{
	char	*ts;
	char	**as;
	int		n;
	
	n = *s == c ? 0 : 1;
	ts = (char *)s;
	while (*ts)
	{
		if (*ts == c && ts[1] != c && ts[1] != 0)
			n++;
		ts++;
	}
	as = ft_memalloc(sizeof(*as) * (n + 1));
	if (as && n)
		ft_splitter(as, s, c);
	return (as);
}
