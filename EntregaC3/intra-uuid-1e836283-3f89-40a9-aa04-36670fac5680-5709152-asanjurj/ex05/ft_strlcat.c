/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:56:14 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/04 12:24:32 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	longdes;
	unsigned int	longsrc;
	unsigned int	i;
	unsigned int	total;

	longdest = ft_strlen(dest);
	longsrc = ft_strlen(src);
	i = 0;
	total = longdest + longsrc;
	if (size < total)
		return (total);
	while (src[i] != '\0' && (longdest + i) < (size - 1))
	{
		dest[longdest + i] = src[i];
		i++;
	}
	dest[longdest + i] = '\0';
	return (total);
}
