/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 02:54:07 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/02 02:54:38 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#define N 4

void	ft_delete_matrix(int **matrix);
int		full_error(int argc, char **argv);
int		**ft_creation_matrix(void);
int		ft_solve_sky(int **matrix, int row, int col, int *args);

int	*ft_arguments(char *str)
{
	int	i;
	int	j;
	int	*arguments;

	i = 0;
	j = 0;
	arguments = (int *)malloc(16 * sizeof(int));
	if (!arguments)
		return (NULL);
	while (j < 16)
	{
		arguments[j] = 0;
		j++;
	}
	j = 0;
	while (str[i])
	{
		if (str[i] && (str[i] >= '1' && str[i] <= '4'))
		{
			arguments[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (arguments);
}

int	main(int argc, char **argv)
{
	int	**matrix;
	int	*args;

	if (full_error(argc, argv))
		return (0);
	matrix = ft_creation_matrix();
	args = ft_arguments(argv[1]);
	if (!ft_solve_sky(matrix, 0, 0, args))
	{
		write(1, "Error\n", 6);
	}
	ft_delete_matrix(matrix);
	free (args);
	return (0);
}
