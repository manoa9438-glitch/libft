/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 09:12:36 by logname           #+#    #+#             */
/*   Updated: 2026/03/16 10:25:03 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

#include <stddef.h>
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

int find_occurrence(char *str, char c)
{
    int occurrences;
    int i;

    i = 0;
    occurrences = 0;
    while (str[i])
    {
        if (str[i] == c)
            occurrences++;
        i++;
    }
    if (occurrences == 0)
        return (-1);
    return (occurrences);
}

char *ft_strrchr(char *str, char c)
{
    int i;
    int j;
    int occurrences;

    i = 0;
    j = 0;
    if (!str)
        return (NULL);
    if (c == '\0')
        return ((char *)str + ft_strlen(str));
    occurrences = find_occurrence(str, c);
    if (occurrences == -1)
        return (NULL);
    i = 0;
    while (str[i])
{
        if (str[i] == c)
            j++;
        if (j == occurrences)
            return (&str[i]);
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char *src = "hello world";
//     char c = 'l';
//     printf("%s", ft_strrchr(src, c));
// }