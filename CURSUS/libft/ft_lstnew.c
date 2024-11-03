/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah < oozsipah@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 22:39:38 by oozsipah          #+#    #+#             */
/*   Updated: 2024/11/02 23:48:36 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
t_list  *ft_lstnew(void  *content)
{
    t_list  *node;
    node = malloc(sizeof(t_list));
    if(!node)
        return (NULL);

    node->content = content;
    node->next = NULL;

    return (node);
}