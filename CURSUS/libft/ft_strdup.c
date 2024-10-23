/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:43:44 by oozsipah          #+#    #+#             */
/*   Updated: 2024/10/23 01:43:45 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char    *ft_strdup(const char *s1)
{
    int i;
    int size;
    char *dest;
    i = 0;
    size = ft_strlen(s1);
    dest = (char *)malloc(size * sizeof(char));
	if (!dest)
        return (NULL);
	while (i < size)
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}