/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:42:33 by oozsipah          #+#    #+#             */
/*   Updated: 2024/10/23 02:56:34 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_null.h>
#include <sys/_types/_size_t.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *src;
    unsigned char chr;

    i = 0;
    chr = (unsigned char)c;
    src = (unsigned char *)s;
    
    while ((i <= n))
    {
        if (src[i] == c)
            return (&src[i]);
        i++;
    }
    return (NULL);
}