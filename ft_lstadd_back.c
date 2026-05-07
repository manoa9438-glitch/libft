/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:39:45 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/07 18:20:03 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **head, t_list *new)
{
    t_list *current;
    if(!new)
        return ;

    if(*head == NULL)
    {
        *head = new;
        return ;
    }
    current = *head;
    while(current->next !=NULL)
    {
        current = current->next;          
    }
    current->next = new;
}

// int main()
// {
//     t_list *head;
//     int a;
//     int b;

//     a = 2;
//     b = 3;
//     head = create_linked_list(&a, &b);
//     ft_lstadd_back(&head, ft_lstnew(&a));
// }