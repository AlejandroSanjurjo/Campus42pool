/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 02:52:40 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/02 02:52:52 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define N 4

int	**ft_creation_matrix(void)
{
	int	**matrix;
	int	i;
	int	j;

	matrix = (int **)malloc(N * sizeof(int *));
	i = 0;
	while (i < N)
	{
		matrix[i] = (int *)malloc(N * sizeof(int));
		j = 0;
		while (j < N)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	return (matrix);
}

void	ft_delete_matrix(int **matrix)
{
	int	i;

	i = 0;
	while (i < N)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
