/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/06 14:44:11 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 15:31:01 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char*ft_strtrim(char const *s)
{
	size_t		st;
	size_t		l;
	const char	*ts;

	st = 0;
	l = 0;
	ts = s;
	while (*ts && (*ts == ' ' || *ts == '\n' || *ts == '\t'))
	{
		ts++;
		st++;
	}
	if (st == ft_strlen(s))
		return (ft_strnew(0));
	while (*++ts)
		;
	ts--;
	while (*ts == ' ' || *ts == '\n' || *ts == '\t')
	{
		ts--;
		l++;
	}
	return (ft_strsub(s, st, ft_strlen(s) - l - st));
}
