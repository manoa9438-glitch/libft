/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 10:08:01 by logname           #+#    #+#             */
/*   Updated: 2026/03/26 10:25:28 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char test(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (c - 32);
    return (c);
}

void ft_striteri(char *str, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    while (str[i])
    {
        f(i, &str[i]);
        i++;
    }
}

// int main()
// {
//     char str[] = "hello world";
//     ft_striteri(str, &test);
// }