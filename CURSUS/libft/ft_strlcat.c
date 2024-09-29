#include "libft.h"
#include <stdio.h>

char    *ft_strlcat(char *dest, char *src, unsigned int destsize)
{
    unsigned int i;
    int k;

    k = ft_strlen(dest);
    i = 0;
    while ((src[i]) && (i < destsize))
    {
        dest[k] = src[i];
        i++;
        k++;
    }
    dest[i] = '\0';
    return (dest);
}