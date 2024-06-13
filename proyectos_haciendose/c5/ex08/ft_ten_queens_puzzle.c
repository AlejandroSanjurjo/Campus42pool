/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:12:15 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/13 21:59:12 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	pintar(int *board, int NumMax)
{
	char	c;
	int		i;

	i = 0;
	while (i < NumMax)
	{
		c = board[i] + '0';
		write (1, &c, 1);
		i++;
	}
}

void	pintartablero(void)
{
	int	tablero[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		tablero[i] = 0;
		i++;
	}
}

int	is_safe(int *pos, int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (pos[i] == col || pos[i] == col - (row - i)
			|| pos[i] == col + (row - i))
			return (0);
		i++;
	}
	return (1);
}

void	encontrar_reinas(int *board, int row, int numMax, int *solutcount)
{
	int	i;
	int	col;

	i = 0;
	col = 0;
	if (row == numMax)
	{
		pintar (board, numMax);
		write (1, "\n", 1);
		(*solutcount)++;
		return ;
	}
	while (col < numMax)
	{
		if (is_safe (board, row, col))
		{
			board[row] = col;
			encontrar_reinas(board, row +1, numMax, solutcount);
			board[row] = 0;
		}
		col ++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	row;
	int	board[10];
	int	solutcount;

	solutcount = 0;
	row = 0;
	i = 0;
	while (i < 10)
	{
		board[i] = 0;
		i++;
	}
	encontrar_reinas(board, 0, 10, &solutcount);
	return (solutcount);
}
