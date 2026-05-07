/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 18:42:08 by logname           #+#    #+#             */
/*   Updated: 2026/05/04 14:51:31 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	if (!str || str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	test(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c - 32);
	return (c);
}

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	result = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (result == NULL)
		return (NULL);
	while (str[i])
	{
		result[i] = f(i, str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int main()
// {
//     char str[] = "hello world";
//     printf(("%s", ft_strmapi(str, &test)));
// }