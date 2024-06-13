/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ùtnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:45:10 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/08 18:12:08 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
void	ft_putnbr_base(int nbr, char *base)
{
	int	leng;

	leng = ft_strlen(base);
	if(nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	if (leng <= 1)
		return ;
	if (nbr >= leng)
		ft_putnbr_base(nbr/leng,base);
	write(1, &base[nbr % leng], 1);
}
