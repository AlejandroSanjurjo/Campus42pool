/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:02:10 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/13 19:03:39 by asanjurj         ###   ########.fr       */
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

	a = argc - 1;
	while (a > 0)
	{
		ft_putchar(argv[a]);
		write(1, "\n", 1);
		a--;
	}
	return (0);
}
