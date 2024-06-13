/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:17:06 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/13 19:17:53 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	leng;
	int	i;

	leng = max - min;
	i = 0;
	arr = (int *)malloc(leng * sizeof(int));
	if (!arr)
		return (-1);
	if (leng <= 0)
	{
		arr = NULL;
		return (0);
	}
	while (i < leng)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (leng);
}
