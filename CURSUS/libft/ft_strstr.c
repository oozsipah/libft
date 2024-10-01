#include "libft.h"

char    *ft_strstr(char *str, char *dest)
{
    int i;
    int j;

    j = 0;
    i = 0;
    if (dest[i] == '\0')
        return (&str[i]);
    while (str[i])
    {
        while ((str[i + j] == dest[j]) || (dest[j] == '\0'))
        {
            if(dest[j] == '\0')
                return (&str[i]);
            j++;
        }
        i++;
        j = 0;
    }
    return (NULL);
}