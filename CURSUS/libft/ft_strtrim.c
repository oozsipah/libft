/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah < oozsipah@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:03:03 by oozsipah          #+#    #+#             */
/*   Updated: 2024/10/29 15:04:08 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
static  char    *trim(char const *s, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (*s == set[i])
            return ((char *)s);
        i++;
    }
    return ((char *)s);
    
}

char    *ft_strtrim(char const *s, char const *set)
{
    if (!s || !set)
        return (NULL);
    char *trimmed;
    long long i;
    
    i = ft_strlen(s);
    while (s)
        return(trim(s++, set));
}

int main(void)
{
    char const *s = "aasdasdasdasdasdasdasdas omer ozsipahi asdasdasdasdasddaasd";
    
    printf("%s", ft_strtrim(s, "asd"));
    return (0);
}