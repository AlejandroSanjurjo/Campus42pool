/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:59:17 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/11 12:02:55 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	low;
	int	high;
	int	mid;
	int	mid_squared;

	if (nb < 0)
		return (0);
	low = 0;
	high = nb;
	while (low <= high)
	{
		mid = (low + high) / 2;
		mid_squared = mid * mid;
		if (mid_squared == nb)
			return (mid);
		else if (mid_squared < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}
