/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 09:25:37 by logname           #+#    #+#             */
/*   Updated: 2026/04/28 17:15:06 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_len(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		len++;
		if (nb < 0)
			nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*char_to_str(long nb, int len)
{
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = ft_len(nb);
	return (char_to_str(nb, len));
}

// int main(void)
// {
//     printf("%s", ft_itoa(-2147483646));
//  //   free( ft_itoa(2147483647));
// }
