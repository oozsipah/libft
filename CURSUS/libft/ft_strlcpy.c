/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:26:44 by oozsipah          #+#    #+#             */
/*   Updated: 2024/11/07 04:10:08 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>
#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;
	size_t i;

	i = 0;
	srclen = ft_strlen(src);
	if (srclen < dstsize)
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}
