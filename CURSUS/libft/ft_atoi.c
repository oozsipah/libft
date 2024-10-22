#include "libft.h"
int ft_atoi(char *str)
{
    int i;
    int result;
    int sign;

    sign = 1;
    result = 0;
    i = 0;

    while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
            if (str[i] == '-')
                sign *= -1;
            i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (str[i] - 48) + (result * 10);
        i++;
    }
    if (result > 2147483647)
        return (-1);
    if(result < -2147483648)
        return (0);    
    return result;
}