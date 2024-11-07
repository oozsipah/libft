/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:54:18 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/11/07 04:00:48 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_null.h>

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s) + 1;
    while (i-- > 0)
    {
        if (s[i] == c)
            return ((char *)&s[i]);
    }
    return (NULL);
}
