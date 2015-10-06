/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdesvall <jdesvall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 01:53:56 by jdesvall          #+#    #+#             */
/*   Updated: 2015/10/06 15:24:33 by jdesvall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "ftstruct.h"

# define NOTOND(x)    NOTONX(x) * 2
# define NOTONX(x)    (x * 2)

void	ft_putstr_fd(char const *string, int fd);
void	*ft_memdup(void *s, size_t size);
void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, int n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, int n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, int n);
int		ft_atoi(const char *nptr);
long	ft_atol(const char *nptr);
char	*ft_itoa(int n);
char	*ft_ltoa(long n);
char	*ft_ptoh(void *ptr);
char	*ft_itoh(unsigned n);
char	*ft_ltoh(unsigned long n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
int		ft_isascii(int c);
int		ft_isblank(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	get_hex(int i);
t_list	*ft_lstcreate(void);
t_item	*ft_lstpop(t_list *list);
t_item	*ft_lstpopat(t_list *list, size_t i);
t_item	*ft_lstpop(t_list *list);
void	ft_lstpush(t_list *list, t_item *item, size_t size);
void	ft_lstpushback(t_list *list, t_item *item, size_t size);
void    ft_memdel(void **ap);
char    *ft_strsub(char const *s, unsigned int st, size_t len);
char    *ft_strtrim(char const *s);
char    **ft_strsplit(char const *s, char c);
int		ft_strnequ(char const *s1, char const *s2, size_t i);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	 ft_striteri(char *s, void (*f)(unsigned int,char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif
