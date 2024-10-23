/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 05:03:11 by oozsipah          #+#    #+#             */
/*   Updated: 2024/10/23 05:15:56 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *array;
    size_t i;

    i = 0;
    array = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!array)
        return NULL;
    
    while (s1[i])
    {
        array[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])    
    {
        array[ft_strlen(s1) + i] = s2[i];
        i++;
    }
    array[i] = '\0';
    return (array);
}