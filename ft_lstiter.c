/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:33:33 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/07 15:56:13 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void    test(void *n)
{
    printf("%d\n", *(int *)n);
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *current;

    current = lst;
    while (current != NULL)
    {
        f(current->content);
        current = current->next;
    }
    
}

// int main()
// {
//     t_list *head;
//     int a;
//     int b;

//     a = 2;
//     b = 3;
//     head = create_linked_list(&a, &b);
//     ft_lstiter(head, test);
// }