/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:17:11 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/11/07 04:03:17 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
