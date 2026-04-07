/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 11:22:39 by logname           #+#    #+#             */
/*   Updated: 2026/03/26 11:30:09 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, (&c), 1);
}

void ft_putnbr_fd(int n, int fd)
{
    long nb;

    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar_fd('-', fd);
    }
    if (nb >= 10)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd((nb % 10) + '0', fd);
}