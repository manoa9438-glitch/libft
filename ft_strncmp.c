/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoabrug <manoabrug@student.1337.ma>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:35:03 by manoabrug         #+#    #+#             */
/*   Updated: 2026/04/28 18:09:21 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *s1 = "1234";
	char *s2 = "1235";
	printf("%d", strncmp(s1, s2, -1));
	printf("%d", ft_strncmp(s1, s2, -1));
}*/
