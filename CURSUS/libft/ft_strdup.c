#include "libft.h"

char    *ft_strdup(char *str)
{
    int i;
    int size;
    char *dest;
    i = 0;
    size = ft_strlen(str);
    dest = (char *)malloc(size * sizeof(char));
   
	if (!dest)
    {
        return (0);
    }

	while (i < size)
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
