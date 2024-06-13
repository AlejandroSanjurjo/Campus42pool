/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:47:05 by asanjurj          #+#    #+#             */
/*   Updated: 2024/05/30 09:48:25 by asanjurj         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	longdest;
	int	i;

	longdest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[longdest + i] = src[i];
		i++;
	}
	dest[longdest + i] = '\0';
	return (dest);
}
