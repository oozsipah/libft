#include <stdio.h>
#include "ft.h"

int main()
{
    int a = 5;
    int b = 6;

    ft_putchar('a');
    ft_putstr("ömer özsipahi");
    ft_strlen("ömer özsipahi");
    printf("%d", ft_strcmp("özsipahi", "özsipa"));
    ft_swap(&a, &b);
    printf("%d\n%d\n", a, b);
}