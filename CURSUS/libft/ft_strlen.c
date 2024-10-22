/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omerozsipahi <omerozsipahi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:09:54 by omerozsipah       #+#    #+#             */
/*   Updated: 2024/10/22 17:14:47 by omerozsipah      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <__stddef_size_t.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}