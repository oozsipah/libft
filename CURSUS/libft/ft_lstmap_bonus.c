/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah < oozsipah@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:29:12 by oozsipah          #+#    #+#             */
/*   Updated: 2024/11/08 18:30:21 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_null.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}