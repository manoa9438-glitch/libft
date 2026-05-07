/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 14:10:00 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/06 12:44:36 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void ft_lstadd_front(t_list **head, t_list *new)
{
    new->next = *head;
    *head = new;
}

// int main()
// {
//     t_list *head;

//     head = NULL;
//     int nb = 3;
//     ft_lstadd_front(&head, ft_lstnew(&nb));
// }