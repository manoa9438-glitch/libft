/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:52:13 by logname           #+#    #+#             */
/*   Updated: 2026/03/17 13:43:18 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memcpy(void *dest, const void *src, size_t size)
{
    size_t i;
    char *d;
    char *s;

    d = (char *)dest;
    s = (char *)src;

    i = 0;
    while (i < size)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
