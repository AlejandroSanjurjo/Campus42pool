/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:45:38 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/12 12:53:48 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *c, char *base_from);

int	char_to_value(char c, char *base);

int	valid_base(char *base);

int	ft_strlen(char *c);

int	total_leng(int numb, int base_len);

char	*ft_convert(int nbr, char *base_to)
{
	int		leng;
	int		size;
	char	*number;

	leng = ft_strlen(base_to);
	size = total_leng(nbr, leng);
	number = (char *)malloc((sizeof(char) * size + 1));
	if (nbr < 0)
	{
		number[0] = '-';
		nbr = -nbr;
	}
	number[size] = '\0';
	if (nbr == 0)
		number[0] = 0;
	while (nbr)
	{
		number[--size] = base_to[nbr % leng];
		nbr /= leng;
	}
	return (number);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		numbasefrom;
	char	*numbaseto;

	if (valid_base(base_to) == 0 || valid_base(base_from) == 0)
		return (NULL);
	numbasefrom = ft_atoi_base(nbr, base_from);
	numbaseto = ft_convert(numbasefrom, base_to);
	return (numbaseto);
}
