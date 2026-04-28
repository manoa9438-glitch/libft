/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:07:49 by logname           #+#    #+#             */
/*   Updated: 2026/04/19 18:59:20 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft.h"

void ft_putchar(char c)
{
    write(1, (&c), 1);
}

void ft_putnbr(int n)
{
    long nb;

    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');
}

void putnbr_unsigned(unsigned int nb)
{
    if (nb >= 10)
        putnbr_unsigned(nb / 10);
    ft_putchar((nb % 10) + '0');
}

void ft_putstr(char *str)
{
    int i;
    if (str == NULL)
        return;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void display_hex(unsigned long nb, char c)
{
    const char hex_upper[] = "0123456789ABCDEF";
    const char hex_down[] = "0123456789abcdef";

    if (c == 'X')
        write(1, &hex_upper[nb], 1);
    else
        write(1, &hex_down[nb], 1);
}

void transform_hex(unsigned long nb, char c)
{
    if (nb > 16)
        transform_hex(nb / 16, c);
    display_hex(nb % 16, c);
}

void display_pointer(unsigned long nb, char c)
{
    write(1, "0x", 2);
    transform_hex(nb, c);
}

void router(char c, va_list args)
{
    if (c == 'd' || c == 'i')
        ft_putnbr(va_arg(args, int));
    else if (c == 's')
        ft_putstr(va_arg(args, char *));
    else if (c == 'c')
        ft_putchar(va_arg(args, int));
    else if (c == 'X' || c == 'x')
        transform_hex(va_arg(args, unsigned long), c);
    else if (c == '%')
        write(1, "\%", 1);
    else if (c == 'u')
        putnbr_unsigned(va_arg(args, int));
    else if (c == 'p')
        display_pointer(va_arg(args, unsigned long), c);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int result;
    int i;

    i = 0;
    result = 0;
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            router(format[i + 1], args);
        }
        i++;
    }
    va_end(args);
    return (result);
}

int main()
{
//   ft_printf("%u", 35);
    int nb = 255;
    int *ptr = &nb;
    ft_printf("%p", ptr);
    write(1, "\n", 1);
    printf("%p", ptr);
}
