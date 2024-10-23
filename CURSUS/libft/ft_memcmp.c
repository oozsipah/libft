/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 03:00:43 by oozsipah          #+#    #+#             */
/*   Updated: 2024/10/23 03:20:13 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>
#include <sys/_types/_null.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *one;
    unsigned char *two;
    
    one = (unsigned char *)s1;
    two = (unsigned char *)s2;
    
    i = 0;
    while ((one[i] || two[i]) && i < n)
    {
        if (one[i] != two[i])
            return (one[i] - two[i]);
        i++;
    }
    return (0);
}