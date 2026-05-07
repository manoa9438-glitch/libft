/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:35:19 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/07 19:43:43 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void    del(void *content)
{
   free(content);
}

void    *add_two(void *nb)
{
    unsigned int	*ptr;

	ptr = (unsigned int *)nb;
    *ptr += 2;
    return (nb);
}


t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *current;
    t_list *copy;
    t_list *new_node;
    void *new_content;

    current = lst;
    copy = NULL;
    new_node = NULL;
    while (current != NULL)
    {
        new_content = f(current->content);
        new_node = ft_lstnew(new_content);
        if (!new_node)
        {
            del(new_content);
            ft_lstclear(&copy, free);
            return (NULL);
        }
        ft_lstadd_back(&copy, new_node);
        current = current->next;
    }
    return (copy);
}

// int main()
// {
//     t_list *head;
//     int a;
//     int b;

//     a = 2;
//     b = 3;
//     head = create_linked_list(&a, &b);
//     ft_lstmap(head, add_two, del);
// }