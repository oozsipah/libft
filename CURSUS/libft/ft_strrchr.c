#include "libft.h"

char    *ft_strrchr(const char *str, int a)
{
    int i;
    char c;

    i = ft_strlen((char *)str);
    c = a;
    while (i >= 0)
    {
        if (str[i] == c)
            return ((char *)&str[i]);
        i--;
    }
    return (NULL);
}