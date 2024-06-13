/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:04:01 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/04 14:04:23 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	leng;

	i = 0;
	leng = max - min;
	arr = (int *)malloc(length * sizeof(int));
	if (leng < 0)
		return (NULL);
	while (i < leng)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
