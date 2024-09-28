#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

void	ft_putchar(char c);
int	ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);
char    *ft_strcat(char *dest, char *src);
char    *ft_strncat(char *dest, char *src, unsigned int n);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);

#endif
