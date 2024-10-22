#include "libft.h"
#include <stdlib.h>
char    *ft_strdup(const char *s1)
{
    int i;
    int size;
    char *dest;
    i = 0;
    size = ft_strlen(s1);
    dest = (char *)malloc(size * sizeof(char));
   
	if (!dest)
    {
        return (0);
    }

	while (i < size)
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}