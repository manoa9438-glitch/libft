/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 15:50:29 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/07 19:35:34 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// void    del(void * content)
// {
//     free(content);
// }

void ft_lstclear(t_list **head, void (*del)(void*))
{
    t_list *current;
    t_list *temp;

    current = *head;
    while(current !=NULL)
    {
        temp = current->next;
        del(current->content);
        free(current);
        current = temp;
    }
    *head = NULL;
}

// int main()
// {
//     t_list *head;
//     int a;
//     int b;

//     a = 2;
//     b = 3;
//     head = ft_create_linked_list(&a, &b);
//     ft_lstclear(&head, free);
// }