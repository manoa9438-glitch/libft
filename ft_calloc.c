/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrugge <mabrugge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:21:14 by mabrugge          #+#    #+#             */
/*   Updated: 2026/05/03 18:23:27 by mabrugge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define SIZE_MAX 18446744073709551615UL

void	ft_bzero(char *str, size_t size)
{
	size_t	i;

	if (str == NULL || size == 0)
		return ;
	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t elementCount, size_t size)
{
	void	*ptr;
	size_t	total;

	if (elementCount == 0 || size == 0)
		return (malloc(0));
	if (elementCount > SIZE_MAX / size)
		return (NULL);
	total = elementCount * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, elementCount * size);
	return (ptr);
}
// void main()
// {
//     // int pointer[5];
//     int i;
//     //
//     int *tab = ft_calloc(INT_MIN  , INT_MAX);
// //   int *tab = calloc(5, sizeof(int));
//     for (i=0; i<5; i++ ) {
//         printf( "%d ", tab[i] );
//     }
//     printf( "\n" );
// }
