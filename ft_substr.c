/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 17:36:37 by logname           #+#    #+#             */
/*   Updated: 2026/03/24 18:20:11 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



unsigned int ft_strlen(const char *str)
{
    if(!str || str[0] == '\0')
        return (0);
   unsigned int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}


char *ft_strdup(char *src)
{
    char *dst;
    int i;
   unsigned int len;

    len = ft_strlen(src);
    i = 0;
    if (!src)
        return (NULL);
    dst = malloc(len + 1);
    if (!dst)
        return (NULL);
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[len] = '\0';
    return (dst);
}

char *ft_substr(char const *str, unsigned int start, size_t len)
{
    size_t i;
    char *result;
    unsigned int len_str;

    len_str = ft_strlen(str);
    if (!str)
        return (NULL);
    if (start > len_str)
        return (ft_strdup(""));
    if (len > len_str - start)
        len = len_str - start;
    i = 0;
    result = malloc(sizeof(char) * (len + 1));
    while (i < len)
    {
        result[i] = str[start];
        i++;
        start++;
    }
    result[len] = '\0';
    return (result);
}

// int main()
// {
//     printf("%s", ft_substr("hello world", 6, 5));
// }