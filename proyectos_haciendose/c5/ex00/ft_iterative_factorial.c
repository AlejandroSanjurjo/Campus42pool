/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:48:09 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/11 12:15:08 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	while (i > 1)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
