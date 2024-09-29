#include "libft.h"

char    *ft_strchr(const char *str, int a)
{
    char    c;
    int i;

    i = 0;
    c = a;
    while (str[i] != c)
        i++;
    if (str[i] != c)
        return (NULL);
    return ((char *)&str[i]);
}