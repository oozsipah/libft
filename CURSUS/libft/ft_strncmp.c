/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omerozsipahi <omerozsipahi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:41:00 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/10/22 17:09:41 by omerozsipah      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <__stddef_size_t.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] || s2[i]) && (s1[i] != s2[i]))
			return ((unsigned char)s1[i] - (unsigned char )s2[i]);
		i++;
	}
	return (0);
}