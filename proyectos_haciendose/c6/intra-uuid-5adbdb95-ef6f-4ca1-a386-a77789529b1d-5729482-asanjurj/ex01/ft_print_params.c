/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:06:48 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/13 18:50:27 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	a;

	a = 1;
	while (a < argc)
	{
		ft_putchar(argv[a]);
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
