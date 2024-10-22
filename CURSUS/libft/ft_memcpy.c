#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *s;
    char *d;

    i = 0;
    s = (char *)src;
    d = (char *)dst;
    if (!dst && !src)
        return (0);
    
    // if ((ft_strlen(dst) < n) && (ft_strlen(src) == n))
    //     return ("fake trace trap 3169 ./a.out");
    while (i <= n)
    {
        d[i] = s[i];
        i++;
    }

    return ((char *)d);
}