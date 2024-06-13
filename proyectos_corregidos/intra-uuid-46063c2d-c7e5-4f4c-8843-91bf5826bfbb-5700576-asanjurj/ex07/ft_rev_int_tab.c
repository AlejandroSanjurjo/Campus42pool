/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:45:46 by asanjurj          #+#    #+#             */
/*   Updated: 2024/05/28 09:32:24 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	arrtemp[300];
	int	j;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		arrtemp[i] = tab[j];
		i++;
		j--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = arrtemp[i];
		i++;
	}
}
/*int main(){
	int tab[]={1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
	return(0);
}*/
