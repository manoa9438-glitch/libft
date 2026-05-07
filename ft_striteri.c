/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:19:27 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/03 18:19:31 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void to_upper(unsigned int i, char *c)
// {
//     (void)i;
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
}

// int main()
// {
//     char str[] = "hello world";
//     ft_striteri(str, to_upper);
// }