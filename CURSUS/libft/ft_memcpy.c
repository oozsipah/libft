/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:43:48 by oozsipah          #+#    #+#             */
/*   Updated: 2024/11/07 04:03:23 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *s;
    char *d;

    i = 0;
    s = (char *)src;
    d = (char *)dst;
    if (!dst && !src)
        return (0);
    
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}
