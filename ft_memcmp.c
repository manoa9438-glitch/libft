/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:13:13 by logname           #+#    #+#             */
/*   Updated: 2026/03/17 14:06:01 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
int ft_memcmp(const void *s1, const void *s2, size_t size)
{
    size_t i;
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

    i = 0;
    while (i < size)
    {
        if (str1[i] != str2[i])
            return (str1 - str2);
       i++;
    }
    return (0);
}
