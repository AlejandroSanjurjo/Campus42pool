/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_vs_solutions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 02:51:27 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/02 02:51:41 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int	check_col_up(int **matrix, int col, int args)
{
	int	max_value;
	int	count;
	int	i;

	max_value = 0;
	count = 0;
	i = 0;
	while (i < N)
	{
		if (matrix[i][col] > max_value)
		{
			max_value = matrix[i][col];
			count++;
		}
		i++;
	}
	return (count == args);
}

int	check_col_down(int **matrix, int col, int args)
{
	int	max_value;
	int	count;
	int	i;

	max_value = 0;
	count = 0;
	i = N - 1;
	while (i >= 0)
	{
		if (matrix[i][col] > max_value)
		{
			max_value = matrix[i][col];
			count++;
		}
		i--;
	}
	return (count == args);
}

int	check_row_left(int **matrix, int row, int args)
{
	int	max_value;
	int	count;
	int	i;

	max_value = 0;
	count = 0;
	i = 0;
	while (i < N)
	{
		if (matrix[row][i] > max_value)
		{
			max_value = matrix[row][i];
			count++;
		}
		i++;
	}
	return (count == args);
}

int	check_row_right(int **matrix, int row, int args)
{
	int	max_value;
	int	count;
	int	i;

	max_value = 0;
	count = 0;
	i = N - 1;
	while (i >= 0)
	{
		if (matrix[row][i] > max_value)
		{
			max_value = matrix[row][i];
			count++;
		}
		i--;
	}
	return (count == args);
}

int	check_args(int **matrix, int *args)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (!check_col_up(matrix, i, args[i])
			|| !check_col_down(matrix, i, args[N + i])
			|| !check_row_left(matrix, i, args[2 * N + i])
			|| !check_row_right(matrix, i, args[3 * N + i]))
			return (0);
		i++;
	}
	return (1);
}
