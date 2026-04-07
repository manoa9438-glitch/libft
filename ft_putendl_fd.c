/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:16:30 by logname           #+#    #+#             */
/*   Updated: 2026/03/26 11:20:40 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putendl_fd(char *str, int fd)
{
    int i;
    if (str == NULL)
        return;

    i = 0;
    while (str[i])
    {
        write(fd, &str[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}
