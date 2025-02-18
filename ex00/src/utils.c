/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:34:51 by aluis             #+#    #+#             */
/*   Updated: 2024/11/03 20:34:55 by aluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

// Função para imprimir um caractere.
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

// Função para comparar duas strings.
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// Função para calcular o comprimento de uma string.
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// Função para imprimir uma string.
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

// Função para liberar a memória alocada dinamicamente.
void	ft_free(char **dict, char **tab_nbr, char *nbr, char *zerovalue)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		free(dict[i]);
		i++;
	}
	free(dict);
	i = 0;
	while (tab_nbr[i])
	{
		free(tab_nbr[i]);
		i++;
	}
	free(tab_nbr);
	free(nbr);
	free(zerovalue);
}
