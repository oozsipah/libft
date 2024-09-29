#include "libft.h"

char    *ft_strstr(char *str, char *dest)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (str[i])
    {
        while (str[i + j] == dest[j])
        {
            if(str[i + j] == dest[j])
            {
                j++;
            }
        }
        i++;
        j = 0;
    }
    return (&str[i]);
}