/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:43:48 by oozsipah          #+#    #+#             */
/*   Updated: 2024/10/23 01:43:49 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *s;
    char *d;

    i = 0;
    s = (char *)src;
    d = (char *)dst;
    if (!src)
        return (NULL);
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (d);
}

int	main()
{
	char *src = "omer ozsipahi";
	char *dst;
	
	printf("%s\n", (char *)ft_memcpy(dst, src, 7));
}
