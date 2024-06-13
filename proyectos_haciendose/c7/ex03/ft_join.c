/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:06:08 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/13 19:24:39 by asanjurj         ###   ########.fr       */
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

int	ft_sizetotal(int size, char **str, char *sep)
{
	int	fulleng;
	int	i;

	i = 0;
	fulleng = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		fulleng += ft_strleng(str[i]);
		i++;
	}
	return (fulleng);
}

char	*ft_strcat(char *dest, char *str)
{
	int	dest_len;
	int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (str[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		size_result;
	int		i;

	size_result = ft_sizetotal(size, strs, sep);
	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	result = (char *)malloc(size of(char) *(size_result +1));
	if (!result)
		return (NULL);
	while (i < size)
	{
		ft_strcat(result, str[i]);
		if (i < size -1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
