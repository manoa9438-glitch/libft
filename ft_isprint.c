/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoabrug <manoabrug@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 10:51:37 by manoabrug         #+#    #+#             */
/*   Updated: 2026/03/09 11:03:27 by manoabrug        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int ft_isprint(unsigned char c)
{
    if ((c >= 32 && c <= 47) || (c == 126))
        return (1);
    return (0);
}

/*int main(void)
{
    printf("%d", ft_isprint('~'));
    printf("%d", isprint('~'));
}*/