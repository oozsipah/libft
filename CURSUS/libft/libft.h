/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah < oozsipah@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:14:02 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/11/02 22:59:01 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <sys/_types/_size_t.h>
typedef struct s_list
{
    void    *content;
    struct s_list *next;
}   t_list;
t_list  *ft_lstnew(void  *content);
void    *ft_calloc(size_t count, size_t size);
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_bzero(void *b, size_t len);
void    *ft_memcpy(void *restrict dst, const void * restrict src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_atoi(char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strdup(const char *s1);
char    *ft_strnstr(const char *haystack, const char *needle, size_t n);
size_t	ft_strlen(const char *s);
size_t    ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif
