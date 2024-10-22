/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omerozsipahi <omerozsipahi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:13:59 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/10/22 16:14:00 by omerozsipah      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strlcat(char *dest, char *src, unsigned int destsize)
{
    unsigned int i;
    int k;

    k = ft_strlen(dest);
    i = 0;
    while ((src[i]) && (i < destsize))
    {
        dest[k] = src[i];
        i++;
        k++;
    }
    dest[i] = '\0';
    return (dest);
}