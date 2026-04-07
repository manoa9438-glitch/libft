/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:23:51 by logname           #+#    #+#             */
/*   Updated: 2026/03/24 18:42:21 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_str;
    int i;
    int j;

    i = 0;
    j = 0;
    new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!new_str)
        return (NULL);
    while (s1[i])
    {
        new_str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        new_str[i] = s2[j];
        i++;
        j++;
    }
    new_str[i] = '\0';
    return (new_str);
}

// int main()
// {
//     char *s1 = "hello ";
//     char *s2 = "world";
//     printf("%s", ft_strjoin(s1, s2));
// }