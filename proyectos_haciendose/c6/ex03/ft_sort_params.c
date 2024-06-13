/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:35:07 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/13 18:58:58 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **str, char **str1)
{
	char	*temp;

	temp = *str;
	*str = *str1;
	*str1 = temp;
}

void	put_char(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}

int	ft_strcmp(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == str2[i])
		i++;
	return (str[i] - str2[i]);
}

void	ft_short(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
					ft_swap(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		ft_short(argc, argv);
		while (i < argc)
		{
			put_char(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
