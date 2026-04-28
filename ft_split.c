/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 09:26:17 by logname           #+#    #+#             */
/*   Updated: 2026/04/10 12:12:30 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int i;
    int y;
    int len_array;
    int len_str;
} Split;

int count_words(char const *str, char c)
{
    int len_array;
    int i;

    i = 0;
    len_array = 0;
    while (str[i])
    {
        if (str[i] != c && (i == 0 || str[i - 1] == c))
            len_array++;
        i++;
    }
    return (len_array);
}

char **create_matrice(char const *str, char c)
{
    char **result;
    int len;
    result = malloc(sizeof(char *) * (count_words(str, c) + 1));
    Split create = {0, 0, 0, 0};
    if (result == NULL)
        return (NULL);
    while (str[create.i])
    {
        if (str[create.i] != c && (create.i == 0 || str[create.i - 1] == c))
        {
            len = 0;
            while (str[create.i + len] && str[create.i + len] != c)
                len++;
            result[create.y++] = malloc(sizeof(char) * (len + 1));
            if (!result[create.y - 1])
                return NULL;

            create.i += len - 1;
        }
        create.i++;
    }
    result[create.y] = NULL;
    return (result);
}

char **update_matrice(char const *str, char c, char **result)
{
    Split update = {0, 0, 0, 0};
    int len;

    while (str[update.i])
    {
        if (str[update.i] != c && (update.i == 0 || str[update.i - 1] == c))
        {
            len = 0;
            while (str[update.i +  len] && str[update.i + len] != c)
                 len++;
            update.y = 0;
            while (update.y <  len)
            {
                result[update.len_array][update.y] = str[update.i++];
                update.y++;
            }
            result[update.len_array][update.y] = '\0';
            update.len_array++;
        }
        else
            update.i++;
    }
    return (result);
}

char **ft_split(char const *str, char c)
{
    char **result;

    if (!str)
        return NULL;
    result = create_matrice(str, c);
    if (!result)
        return NULL;
    result =  update_matrice(str, c, result);
    return result;
}
//
// int main()
// {
//     char *str = "  tripouille  42  ";
//     char **result;
//
//     result = ft_split(str, ' ');
//     int i = 0;
//
//     while (result[i] != NULL)
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }
//     return (0);
// }