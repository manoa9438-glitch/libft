/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 09:20:29 by logname           #+#    #+#             */
/*   Updated: 2026/03/17 09:38:14 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strchr(char *str, char c)
{
    int i;

    i = 0;
    if (!str)
        return (NULL);
    if (c == '\0')
        return ((char *)str + ft_strlen(str));
    while (str[i])
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char str[] = "hello world";
//     char c = 'e';
//     printf("%s", ft_strchr(str, c));
// }