/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:09:40 by logname           #+#    #+#             */
/*   Updated: 2026/03/12 13:50:59 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    int len_src;
    int len_dest;

    if (!dest || !src)
        return -1;
    len_src = ft_strlen(src);
    len_dest = ft_strlen(dest);
    i = 0;
    j = ft_strlen(dest);
    if (j >= size)
        return (size + len_src);
    if (size == 0)
        return (j + len_src);
    while (src[i] && j < size - 1)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (len_dest + len_src);
}

// int main()
// {
//    char dest[9];
//     printf("%zu", ft_strlcat(dest, "coucou", -1));
//     printf("%zu", strlcat(dest, "coucou", -1));
// }