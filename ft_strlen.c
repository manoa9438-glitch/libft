/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:30:43 by logname           #+#    #+#             */
/*   Updated: 2026/05/04 14:52:49 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
//#include <stdio.h>
/// int main()
//{
//  char *buffer = "test";
// printf("%d", ft_strlen(buffer));
//}