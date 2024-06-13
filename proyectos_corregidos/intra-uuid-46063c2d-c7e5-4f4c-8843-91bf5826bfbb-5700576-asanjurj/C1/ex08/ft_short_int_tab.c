/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 09:56:04 by asanjurj          #+#    #+#             */
/*   Updated: 2024/05/29 10:13:06 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_short_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	menor;
	int	temp;

	i = 0;
	while (i < size)
	{
		menor = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				menor = j;
			j++;
		}
		if (menor != i)
		{
			temp = tab[i];
			tab[i] = tab[menor];
			tab[menor] = temp;
		}
		i++;
	}
}
