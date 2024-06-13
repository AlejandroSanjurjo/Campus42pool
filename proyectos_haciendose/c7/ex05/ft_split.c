/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanjurj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:05:27 by asanjurj          #+#    #+#             */
/*   Updated: 2024/06/12 17:00:42 by asanjurj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset);

int	countwords(char *str, char *charset)
{
	int	count;
	int	in_word;
	int	i;

	count = 0;
	i = 0;
	in_word = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset) && in_word == 0)
		{
			in_word = 1;
			count ++;
		}
		if (is_charset(str[i], charset))
			in_word = 0;
		i++;
	}
	return (count);
}

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	*conserv_word(int inicio, int final, char *str)
{
	int		size;
	char	*aux;
	int		i;

	i = 0;
	size = final - inicio;
	aux = (char *)malloc(sizeof(char) * (size + 1));
	if (!aux)
		return (NULL);
	while (i < size)
	{
		aux[i] = str[inicio + i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

char	**ft_aux(char *charset, char *str, char **result)
{
	int	i;
	int	start;
	int	pos;

	i = 0;
	pos = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset))
		{
			start = i;
			while (str[i] && !is_charset(str[i], charset))
				i++;
			result[pos++] = conserv_word(start, i, str);
		}
		else
			i++;
	}
	result[pos] = 0;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		size;

	size = countwords(str, charset);
	result = (char **)malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (NULL);
	result = ft_aux(charset, str, result);
	return (result);
}
/*
#include <stdio.h>
int main()
{
    char *input_string = "Hola, mundo, este, es, un, ejemplo";
    char *delimiter = ", ";
    int word_count = countwords(input_string, delimiter);
    printf("Número de palabras: %d\n", word_count);

    char **words = ft_split(input_string, delimiter);

    // Imprime las palabras resultantes
    for (int i = 0; i < word_count; i++)
    {
        printf("Palabra %d: %s\n", i + 1, words[i]);
        free(words[i]); // Libera la memoria asignada para cada palabra
    }

    free(words); // Libera la memoria asignada para el arreglo de palabras

    return 0;
}*/
