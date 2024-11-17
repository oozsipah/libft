/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 02:17:00 by oozsipah          #+#    #+#             */
/*   Updated: 2024/11/12 02:26:05 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_len(int n)
{
	int			count;
	long int	b;

	b = (long int)n;
	count = 0;
	if (b < 0)
	{
		count += 1;
		b *= -1;
	}
	while (b > 9)
	{
		b = b / 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	int			i;
	long int	b;

	b = (long int)n;
	len = count_len(b);
	i = len - 1;
	res = (char *)malloc(((len * sizeof(char)) + 1));
	if (!res)
		return (NULL);
	if (b < 0)
	{
		res[0] = '-';
		b *= -1;
	}
	while (b > 9)
	{
		res[i--] = (b % 10) + 48;
		b = b / 10;
	}
	res[i] = b + 48;
	res[len] = '\0';
	return (res);
}
