/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 10:42:10 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/07 16:12:09 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = malloc(sizeof(t_list));
    if(!node)
        return (NULL);

    node->content = content;
    node->next = NULL;
    return (node);
}

// int main()
// {
//     int nb = 3;
//     ft_lstnew(&nb);

// }