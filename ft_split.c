/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 09:26:17 by logname           #+#    #+#             */
/*   Updated: 2026/05/03 18:25:26 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_split
{
	int	i;
	int	y;
	int	len_array;
	int	len_str;
}		t_split;

void	*ft_memset(void *s, int value, size_t count)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (count > 0)
	{
		count--;
		*ptr++ = (unsigned char)value;
	}
	return (s);
}

int	count_words(char const *str, char c)
{
	int	len_array;
	int	i;

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

char	**create_matrice(char const *str, char c)
{
	char	**result;
	int		len;
	t_split	split_one;

	ft_memset(&split_one, 0, sizeof(t_split));
	result = malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (result == NULL)
		return (NULL);
	while (str[split_one.i])
	{
		if (str[split_one.i] != c && (split_one.i == 0 
				|| str[split_one.i - 1] == c))
		{
			len = 0;
			while (str[split_one.i + len] && str[split_one.i + len] != c)
				len++;
			result[split_one.y++] = malloc(sizeof(char) * (len + 1));
			if (!result[split_one.y - 1])
				return (NULL);
			split_one.i += len - 1;
		}
		split_one.i++;
	}
	result[split_one.y] = NULL;
	return (result);
}

char	**update_matrice(char const *str, char c, char **result)
{
	int		len;
	t_split	split_two;

	ft_memset(&split_two, 0, sizeof(t_split));
	while (str[split_two.i])
	{
		if (str[split_two.i] != c && (split_two.i == 0 
				|| str[split_two.i - 1] == c))
		{
			len = 0;
			while (str[split_two.i + len] && str[split_two.i + len] != c)
				len++;
			split_two.y = 0;
			while (split_two.y < len)
			{
				result[split_two.len_array][split_two.y] = str[split_two.i++];
				split_two.y++;
			}
			result[split_two.len_array][split_two.y] = '\0';
			split_two.len_array++;
		}
		else
			split_two.i++;
	}
	return (result);
}

char	**ft_split(char const *str, char c)
{
	char	**result;

	if (!str)
		return (NULL);
	result = create_matrice(str, c);
	if (!result)
		return (NULL);
	result = update_matrice(str, c, result);
	return (result);
}

// int main()
// {
//     char *str = "  tripouille  42  ";
//     char **result;

//     result = ft_split(str, ' ');
//     int i = 0;

//     while (result[i] != NULL)
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }
//     return (0);
// }
