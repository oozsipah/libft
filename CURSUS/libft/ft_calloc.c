/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 04:31:19 by oozsipah          #+#    #+#             */
/*   Updated: 2024/10/23 04:37:09 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    unsigned char *array;
    size_t i;

    i = 0;
    array = (unsigned char *)malloc(count * size);
    if (!array)
        return NULL;
    while (array[i])
        array[i] = '0';
    return array;
}

#include <stdio.h>

int main(void)
{
    printf("yan sanayi:%s\n", ft_calloc(4, 4));
    printf("orjin: %s\n", calloc(4, 4));

    return (0);

}