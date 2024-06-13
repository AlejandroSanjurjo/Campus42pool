/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:45:11 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/13 19:16:37 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strleng(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strup(char *src)
{
	int		i;
	int		leng;
	char	*cop;

	leng = ft_strleng(src);
	i = 0;
	cop = (char *)malloc(leng * 1);
	if (!cop)
		return (NULL);
	while (src[i])
	{
		cop[i] = src[i];
		i++;
	}
	cop[i] = '\0';
	return (cop);
}
