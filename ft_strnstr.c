/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:51:33 by logname           #+#    #+#             */
/*   Updated: 2026/03/16 19:51:25 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
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

char *ft_strnstr(char *str, const char *word, size_t len)
{
    size_t i;
    size_t j;
    size_t size;

    size = ft_strlen(word);
    i = 0;
    j = 0;
    if (word[i] == '\0')
        return ((char *)word);
    if (str[i] == '\0')
        return (0);
    if (len == 0)
        return (0);
    while (i < len && str[i])
    {
        while (str[i] == word[j])
        {
            if ((j == size - 1 && (str[i + 1] != word[j + 1])) || str[i + 1] == ' ' || str[i + 1] == '\0')
                return (&str[i - j]);
            i++;
            j++;
        }
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char *str = "aaabcabcd";
//     char *word = "cd";
//     printf("%s", ft_strnstr(str, word, 8));
// }
