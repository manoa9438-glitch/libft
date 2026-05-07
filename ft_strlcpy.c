/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 10:20:54 by logname           #+#    #+#             */
/*   Updated: 2026/05/04 15:12:00 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		len;

	if (!src)
		return (-1);
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (len);
}

// int main()
// {
//     const char *src = "coucou";
//     char dst[50];
//     printf("%d \n", ft_strlcpy(dst, src, 0));
//     printf("%lu", strlcpy(dst, src, 0));
// }