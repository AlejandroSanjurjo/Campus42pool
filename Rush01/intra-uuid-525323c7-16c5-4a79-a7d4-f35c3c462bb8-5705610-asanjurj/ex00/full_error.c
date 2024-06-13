/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 02:53:42 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/02 02:53:47 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	error_size_arg(char *input)
{
	int	len;
	int	expected_len;

	len = 0;
	expected_len = 31;
	while (input[len])
		len++;
	if (len != expected_len)
	{
		write(1, "Error: Argument must be 31 characters\n", 38);
		return (1);
	}
	return (0);
}

int	error_num_and_esp(char *input)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
		{
			if (input[i] < '1' || input[i] > '4')
			{
				write(1, "Error: All numbers must be between 1 and 4.\n", 44);
				return (1);
			}
		}
		else
		{
			if (input[i] != ' ')
			{
				write(1, "Error: Numbers must be separated by spaces.\n", 44);
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	full_error(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error in the numbers of arguments\n", 34);
		return (1);
	}
	if (error_size_arg(argv[1]))
		return (1);
	if (error_num_and_esp(argv[1]))
		return (1);
	return (0);
}
