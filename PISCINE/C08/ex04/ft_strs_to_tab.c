#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int len_str(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

void    *ft_strcpy(char *dest, char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        dest[i] = str[i];
        i++;
    }-
}

struct  ft_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *string;
    int i;

    i = 0;    
    string = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac));
    if (string == NULL)
        return 0;

    while (i < ac)
    {
        string[i].size = len_str(av[i]);
        string[i].str = (char *)malloc(string[i].size + 1);
        string[i].cpy = (char *)malloc(string[i].size + 1);
        ft_strcpy(string[i].str, av[i]);
        ft_strcpy(string[i].cpy, av[i]);
    }
    string[i].str = 0;
    return (string);
}

int main(int ac, char **av)
{
    ft_strs_to_tab(ac, av);
    return 0;
}