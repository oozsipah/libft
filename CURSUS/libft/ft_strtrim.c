/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 05:12:15 by oozsipah          #+#    #+#             */
/*   Updated: 2024/10/23 07:31:34 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char    *fill(const char *s1, size_t start, size_t len);
int trim(char const *s1, int c);

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    char *tmp;
    
    j = ft_strlen(s1) - 1;
    i = 0;
    printf("%zu\n", j);
    if (ft_strlen(s1) == 0)
    {
        tmp = (char* )malloc(0);
        return tmp;    
    }        
    while (trim(set, s1[i]))
        i++;
    while (trim(set, s1[j]))
        j--;
    printf("i : %zu j: %zu", i, j);
    return (fill(s1, i, j - (i - 1)));
}

char    *fill(char const *s1, size_t start, size_t len)
{
    char    *str;
    size_t i;

    i = 0;
    
    str = (char *)malloc(len);
    if (!str)
        return NULL;
    while ((s1[start + i]) && (i < len))
    {
        str[i] = s1[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int trim(char const *set, int c)
{
    int i;

    i = 0;
    while (set[i])
    {
        if(c == set[i])
            return (1);
        i++;
    }
    return (0);
}

int main(void)
{
    char *s1 = "aasasasaas omer ozsipahi saaasassaasaaa";
    char *set = "as";

    printf("\n%s\n", ft_strtrim(s1, set));

    return (0);
}