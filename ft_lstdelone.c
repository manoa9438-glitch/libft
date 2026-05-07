/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 15:05:12 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/07 18:23:35 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void    del(void *lst)
{
    free(lst);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    del(lst->content);
    free(lst);
}

// int main()
// {
//     int nb = 3;

//     ft_lstdelone(ft_lstnew(&nb), free);
// }