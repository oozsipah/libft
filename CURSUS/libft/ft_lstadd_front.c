/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsipah < oozsipah@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:38:36 by oozsipah          #+#    #+#             */
/*   Updated: 2024/11/02 23:50:59 by oozsipah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_null.h>
void    ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 1;
    t_list *head = ft_lstnew(&a);    
    t_list *new_node = ft_lstnew(&b);
    t_list *temp;
    temp = new_node;
    while(temp)
    {
        printf("%d\n", *(int *)temp->content);
        temp = temp->next; 
    }
    ft_lstadd_front(&head,new_node);
    temp = new_node;
    while(temp)
    {
        printf("%d", *(int *)temp->content);
        temp = temp->next;
    }
    return 0;
}
