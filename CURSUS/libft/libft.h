#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
int	ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
int ft_atoi(char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
char    *ft_strchr(const char *str, int a);
char    *ft_strrchr(const char *str, int a);
char    *ft_strcat(char *dest, char *src);
char    *ft_strncat(char *dest, char *src, unsigned int n);
char    *ft_strlcat(char *dest, char *src, unsigned int destsize);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
char    *ft_strdup(char *str);
char    *ft_strstr(char *str, char *dest);
#endif
