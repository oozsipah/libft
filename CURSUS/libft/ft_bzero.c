#include "libft.h"

void    *ft_bzero(void *b, size_t len)
{
    return (ft_memset(b, 0, len));
}

int main(void)
{
    unsigned char b[10];
    size_t len = 4;

    for (int i = 0; i < 10; i++)
    {
        b[i] = 'a';
    }

    ft_bzero(b, len);

    for (int i = 0; i < 10; i++)
    {
        printf("%c ", b[i]);
    }
    return (0);
}