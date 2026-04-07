/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:30:43 by logname           #+#    #+#             */
/*   Updated: 2026/03/24 18:36:34 by logname          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strlen(const char *str)
{
	if(!str || str[0] == '\0')
		return (0);
  int i;

  i = 0;
  while (str[i])
	{
    	i++;
	}
  return (i);
}
//#include <stdio.h>
///int main()
//{
//  char *buffer = "test";
  //printf("%d", ft_strlen(buffer));
//}