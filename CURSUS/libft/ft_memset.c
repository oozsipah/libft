/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah < oozsipah@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:17:03 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/10/28 20:02:57 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *a;

    a = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        a[i] = (unsigned char)c;
        i++;
    }
    return (a);
}

#include <stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);
    ft_memset(arr, 9, 18);
    for(int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);
}