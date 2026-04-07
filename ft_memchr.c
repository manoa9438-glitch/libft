/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:25:02 by logname           #+#    #+#             */
/*   Updated: 2026/03/17 10:30:13 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
    size_t i;
    char *mb;

    mb = (char *)memoryBlock;

    i = 0;
    while (i < size)
    {
        if (mb[i] == searchedChar)
            return (&mb[i]);
    }
    return (NULL);
}
