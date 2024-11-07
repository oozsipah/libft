/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:13:59 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/11/07 06:45:22 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_null.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	if (dst_len + ft_strlen(src) >= dstsize)
	// i = 0;
	// while ((dst_len + i + 1) < dstsize && src[i])
	// {
	// 	dst[dst_len + i] = src[i];
	// 	i++;
	// }
	// if (dst_len != dstsize)
	// {
	// 	dst[dst_len + i] = '\0';
	// }
	return (dst_len + ft_strlen(src));
}
