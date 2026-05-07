/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:23:16 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/07 18:07:15 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    if(!lst)    
        return (NULL);
        
    while(lst->next != NULL)
        lst = lst->next; 
    return(lst);
}

// int  main()
// {
//     t_list *l =  NULL;
//     ft_lstadd_back(&l, ft_lstnew((void*)1));
//     // t_list *head;
//     // int a;
//     // int b;

//     // a = 2;
//     // b = 3;
//             // head = ft_create_linked_list(&a, &b);
//     ft_lstlast(l);
// }