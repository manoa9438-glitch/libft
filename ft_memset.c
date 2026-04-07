/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:01:01 by logname           #+#    #+#             */
/*   Updated: 2026/03/17 10:09:03 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_memset(char *str, int value, size_t count)
{
    size_t i;

    if (str == NULL || count == 0)
        return;
    i = 0;
    while (i < count)
    {
        str[i] = value;
        i++;
    }
}
