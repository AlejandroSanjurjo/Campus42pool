/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:32:34 by asanjurj          #+#    #+#             */
/*   Updated: 2024/05/30 10:43:34 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	leng;
	int	lengfind;

	i = 0;
	leng = ft_strlen(str);
	lengfind = ft_strlen(to_find);
	if (lengfind == 0)
		return (str);
	while (i <= leng - lengfind)
	{
		j = 0;
		while (j < lengfind && str[i + j] == to_find[j])
		{
			j++;
		}
		if (j == lengfind)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
