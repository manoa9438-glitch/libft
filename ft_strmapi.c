/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 18:42:08 by logname           #+#    #+#             */
/*   Updated: 2026/03/26 10:05:28 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

char test(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (c - 32);
    return (c);
}

char *ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
    int i;

    i = 0;
    char *result;
    result = malloc(sizeof(char) * (ft_strlen(str) + 1));
    if (result == NULL)
        return (NULL);
    while (str[i])
    {
        result[i] = f(i, str[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

// int main()
// {
//     char str[] = "hello world";
//     printf(("%s", ft_strmapi(str, &test)));
// }