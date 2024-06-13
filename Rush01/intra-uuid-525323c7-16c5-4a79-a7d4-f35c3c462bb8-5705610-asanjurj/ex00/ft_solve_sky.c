/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_sky.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 02:53:12 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/02 02:53:17 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 4

int	check_args(int **matrix, int *args);
int	ft_solve_sky(int **matrix, int row, int col, int *args);

int	is_value(int **matrix, int row, int col, int *args)
{
	if (col == N - 1)
	{
		if (ft_solve_sky(matrix, row + 1, 0, args))
			return (1);
	}
	else
	{
		if (ft_solve_sky(matrix, row, col + 1, args))
			return (1);
	}
	return (0);
}

int	ft_is_safe(int **matrix, int row, int col, int aux)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (matrix[row][i] == aux || matrix[i][col] == aux)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_matrix(int **matrix)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			c = matrix[i][j] + '0';
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_solve_sky(int **matrix, int row, int col, int *args)
{
	int	aux;

	if (row == N)
	{
		if (check_args(matrix, args))
		{
			ft_print_matrix(matrix);
			return (1);
		}
		return (0);
	}
	aux = 1;
	while (aux <= N)
	{
		if (ft_is_safe(matrix, row, col, aux))
		{
			matrix[row][col] = aux;
			if (is_value(matrix, row, col, args))
				return (1);
			matrix[row][col] = 0;
		}
		aux++;
	}
	return (0);
}
