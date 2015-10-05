/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 02:02:00 by jdesvall          #+#    #+#             */
/*   Updated: 2014/11/03 02:06:26 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strdup(const char *s)
{
	char *n;

	n = ft_strnew(ft_strlen(s));
	return (ft_strcpy(n, s));
}

