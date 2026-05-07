/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:51:33 by username          #+#    #+#             */
/*   Updated: 2026/05/04 14:43:10 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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

char	*ft_strnstr(char *str, const char *word, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	size = ft_strlen(word);
	i = 0;
	j = 0;
	if (word[i] == '\0')
		return ((char *) word);
	if (str[i] == '\0' || len == 0)
		return (0);
	while (i < len && str[i])
	{
		while (str[i] == word[j])
		{
			if ((j == size - 1 && (str[i + 1] != word[j + 1]))
				|| str[i + 1] == ' ' || str[i + 1] == '\0')
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
