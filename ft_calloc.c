/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:10:21 by logname           #+#    #+#             */
/*   Updated: 2026/04/13 10:34:02 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void    ft_bzero(char *str, size_t size)
{
    size_t i;

    if (str == NULL || size == 0)
        return;
    i = 0;
    while (i < size)
    {
        str[i] = '\0';
        i++;
    }
}

void *ft_calloc(size_t elementCount, size_t size)
{
    void *ptr;
    size_t total;

    if (elementCount == 0 || size == 0)
        return malloc(0);

    if (elementCount > SIZE_MAX / size)
        return NULL;

    total = elementCount * size;

    ptr = malloc(total);
    if (!ptr)
        return NULL;

    ft_bzero(ptr, elementCount * size);
    return ptr;
}

// void main()
// {
//     // int pointer[5];
//     int i;
//     //
//     int *tab = ft_calloc(INT_MIN  , INT_MAX);
// //   int *tab = calloc(5, sizeof(int));
//     for (i=0; i<5; i++ ) {
//         printf( "%d ", tab[i] );
//     }
//     printf( "\n" );
// }