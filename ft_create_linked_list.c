/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_linked_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:11:42 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/07 16:54:44 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_create_linked_list(int *a, int *b)
{
    t_list *head;
    t_list *new_node;
    head = ft_lstnew(a);
    new_node = ft_lstnew(b);

    ft_lstadd_front(&head, new_node);
    return (head);
}