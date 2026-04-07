/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 11:04:06 by logname           #+#    #+#             */
/*   Updated: 2026/03/17 13:39:51 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
    size_t	i;
    char	*d;
    char    *s;

    i = 0;
    d = (char *)dest;
    s = (char *)src;
        if (d < s)
            while (i < size)
            {
                d[i] = s[i];
                i++;
            }
        else
            while (size > 0)
            {
                d[size - 1] = s[size - 1];
                size--;
            }
    return (d);
}