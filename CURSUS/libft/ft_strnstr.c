/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 03:25:05 by oozsipah          #+#    #+#             */
/*   Updated: 2024/10/23 04:27:31 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    char *h;

    h = (char *)haystack;
    j = 0;
    i = 0;
    if (needle[i] == '\0')
        return (&h[i]);
    while ((haystack[i]) && i < len)
    {
        while ((haystack[i + j] == needle[j]) && (haystack[i + j]) && (i + j < len))
        {
            j++;
            if (needle[j] == '\0')
                return (h + i);
        }
        i++;
        j = 0;
    }
    return (0);
}