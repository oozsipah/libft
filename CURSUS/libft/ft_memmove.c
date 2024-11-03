/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omerozsipahi <omerozsipahi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:17:11 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/10/27 12:07:28 by omerozsipah      ###   ########.fr       */
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
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Mert Ozcan";

    char *memm;
    char *memc;

    memm = memmove(str + 2, str, 4);
    memc = memcpy(str + 2, str, 4);

    printf("memmove: %s\n", memm);
    printf("memcpy: %s\n", memc);
}