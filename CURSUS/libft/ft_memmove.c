/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:17:11 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/10/23 01:23:42 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>
#include <sys/_types/_null.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    const char *s;

    d = (char *)dst;
    s = (char *)src;
    if (!src && !dst)
        return NULL;

    if (dst < src)
    {
        ft_memcpy(dst, src, len);
    }
    else
    {
        while(len--)
        {
            d[len] = s[len];
        }
    }
    return (d);
}
/*
int main(void)
{
    char str[] = "Mert Ozcan";

    char *ft_memm;
    char *memm;
    // char *ft_memc;
    // char *memc;

    ft_memm = ft_memmove(str + 4, str, 4);
    memm = memmove(str + 4, str, 4);
    // ft_memc = ft_memcpy(str + 4, str, 4);
    // memc = memcpy(str + 4, str, 4);

    printf("ft_memmove: %s\n", ft_memm);
    printf("memmove: %s\n", memm);
    // printf("ft_memcpy: %s\n", ft_memc);
    // printf("memcpy: %s\n", memc);
}
*/