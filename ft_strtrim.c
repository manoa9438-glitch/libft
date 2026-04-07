/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:45:08 by logname           #+#    #+#             */
/*   Updated: 2026/03/25 17:39:33 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>

int ft_strlen(const char *str)
{
    if(!str || str[0] == '\0')
        return (0);
    int i;

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
    int len;

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

int search_char(char const c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return 1;
        i++;
    }
    return (0);
}

int search_index(char const *str, char const *set, int i, int direction)
{
    if (direction == 1)
    {
        while (str[i])
        {
            if (search_char(str[i], set) == 0)
                return (i);
            i = i + direction;
        }
    }
    else
    {
        while (i >= 0)
        {
            if (search_char(str[i], set) == 0)
                return (i);
            i = i + direction;
        }
    }
    return (-1);
}

char *ft_strtrim(char const *str, char const *set)
{
    int i;
    int start;
    int end;
    char *result;

    if (!str || !set)
        return (NULL);
    start = search_index(str, set, 0, 1);
    end = search_index(str, set, ft_strlen(str) -1, -1);
    if (start > end || start == -1 || end == -1)
        return (strdup(""));
    result = malloc(sizeof(char) * (end - start + 1) + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (start <= end)
    {
            result[i] = str[start];
            i++;
            start++;
    }
    result[i] = '\0';
    return (result);
}

// int main()
// {
//     char const *s1 = "xxybonjourxx";
//     char const *s2 = "xy";
//     printf("%s\n", ft_strtrim(s1, s2));
//     return (0);
// }
