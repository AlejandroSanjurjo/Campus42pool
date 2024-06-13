/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:43:17 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/12 12:45:04 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert(int nbr, char *base_to);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	valid_base(char *base)
{
	int	i;
	int	j;
	int	lengbase;

	i = 0;
	lengbase = ft_strlen(base);
	if (lengbase < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	char_to_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *c, char *base_from)
{
	int	numb;
	int	sig;
	int	i;
	int	leng;

	leng = ft_strlen(base_from);
	i = 0;
	sig = 1;
	numb = 0;
	if (c[i] == '-')
	{
		sig = -1;
		i++;
	}
	while (c[i] && char_to_value(c[i], base_from) != -1)
	{
		numb = numb * leng + char_to_value(c[i], base_from);
		i++;
	}
	return (numb * sig);
}

int	total_leng(int numb, int base_len)
{
	int	totalleng;

	totalleng = 0;
	if (numb < 0)
		totalleng++;
	while (numb)
	{
		numb /= base_len;
		totalleng++;
	}
	return (totalleng);
}
