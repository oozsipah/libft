/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:24:14 by oozsipah          #+#    #+#             */
/*   Updated: 2024/11/07 04:10:19 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int  trim(char c, char const *set)
{
	int i;

	i = 0;
	while(set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static  char    *ft_strcopy(char *dest, char const *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char    *ft_strtrim(char const *s1,char const *set)
{
	char    *trimmed;
	size_t k;
	size_t len;
	int i;
	if (!s1 && !set)
		return NULL;
	i = 0;
	k = ft_strlen(s1) - 1;
	while(trim(s1[i], set))
		i++;
	while(i < k && trim(s1[k], set))
		k--;
	len = k - (i - 1);
	if(!(trimmed = (char *)malloc(sizeof(char) * len + 1)))
		return NULL;
	ft_strcopy(trimmed, s1 + i, len);
	return (trimmed);   
}
