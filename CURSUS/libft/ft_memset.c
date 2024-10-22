/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omerozsipahi <omerozsipahi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:17:03 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/10/22 17:17:04 by omerozsipah      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *a;

    a = (unsigned char *) b;
    i = 0;
    while ((a[i]) && (i < len))
    {
        a[i] = (unsigned char) c;
        i++;
    }
    return (a);
}