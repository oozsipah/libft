/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 04:31:19 by oozsipah          #+#    #+#             */
/*   Updated: 2024/11/07 05:50:56 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
void    *ft_calloc(size_t count, size_t size)
{
    void *array;
    size_t i;

    i = 0;
    array = (unsigned char *)malloc(count * size);
    if (!array)
        return NULL;
    ft_bzero(array, count * size);
    return array;
}
