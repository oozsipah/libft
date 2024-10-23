/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 04:52:59 by oozsipah          #+#    #+#             */
/*   Updated: 2024/10/23 05:16:51 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *array;
    size_t i;

    i = 0;
    array = (char *)malloc(len + 1);
    if (!array)
        return (NULL);
    
    while ((s[start + i]) && i < len)
    {
        array[i] = s[start + i];
        i++;
    }
    array[i] = '\0';
    return (array);
}
