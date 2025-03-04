/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Combinaciones.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:24:37 by asanjurj          #+#    #+#             */
/*   Updated: 2024/05/23 18:55:43 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				if (a <= '7')
				{
					write (1, ", ", 2);
				}
				c ++;
			}
			b ++;
		}		
		a ++;
	}
}
