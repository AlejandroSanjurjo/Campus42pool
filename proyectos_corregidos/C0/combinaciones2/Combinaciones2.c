/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Combinaciones2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:14:20 by asanjurj          #+#    #+#             */
/*   Updated: 2024/05/23 19:08:51 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	str[5];
	int		i;
	int		j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			str[0] = '0' + i / 10;
			str[1] = '0' + i % 10;
			str[2] = ' ';
			str[3] = '0' + j / 10;
			str[4] = '0' + j % 10;
			write (1, str, 5);
			if (!(i == 98 && j == 99))
			{
				write (1, ", ", 2);
			}
			j++;
		}
		i++;
	}	
}
