/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah <oozsipah@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:37:23 by oozsipah          #+#    #+#             */
/*   Updated: 2024/11/07 04:07:06 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list  *ft_lstnew(void *content)
{
	t_list  *node;
	if(!(node = (t_list *)malloc(sizeof(t_list))))
		return NULL;
	
	node->content = content;
	node->next = NULL;
	return (node);
}
