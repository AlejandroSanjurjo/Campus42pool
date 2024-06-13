/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 09:24:45 by asanjurj          #+#    #+#             */
/*   Updated: 2024/05/29 09:35:20 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	neg;
	int	num;
	int	i;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] < '0' || str[i] > '9') && str[i])
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}
/*
int main()
{
    char *num="jcbaxv+++-n122erwvnn44mvsnv";
    int a = ft_atoi(num);
    printf("%d", a);

    return 0;
}*/
