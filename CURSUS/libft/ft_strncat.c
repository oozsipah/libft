#include "libft.h"
char    *ft_strncat(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    unsigned int size;

    i = 0;
    size = ft_strlen(dest);
    while ((src[i] != '\0') && (i < n))
    {
        dest[i + size] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i + size] = '\0';
        i++;
    }
    return (dest);
}