#include "libft.h"



void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *a;

    a = (unsigned char *) b;
    i = 0;
    while ((a[i]) && (i < len))
    {
        a[i] = (unsigned char) c;
        i++;
    }
    return (a);
}

int main(void)
{
    char b[] = "omer ozsipahi";
    size_t len = 5;
    int c = 97;
    unsigned char *a;
    int i = 0;

    ft_memset(&b[0] ,c, len);
    while (b[i])
    {
        printf("%c ", b[i]);
        i++;
    }
}