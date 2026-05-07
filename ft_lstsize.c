/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:35:31 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/07 16:12:51 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;

    while(lst!=NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

// int main()
// {
//     t_list *head;
//     int a;
//     int b;

//     a = 2;
//     b = 3;
//     head = create_linked_list(&a, &b);
//     ft_lstsize(head);
// }