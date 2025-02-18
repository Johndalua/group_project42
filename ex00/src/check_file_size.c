/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:31:38 by aluis             #+#    #+#             */
/*   Updated: 2024/11/03 20:31:44 by aluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

// Função para obter o tamanho do arquivo.
int	ft_get_file_size(char *dictpath)
{
	char	c;
	int		file;
	int		count;

	file = open(dictpath, O_RDONLY);
	if (file == -1)
		return (-1);
	count = 0;
	while (read(file, &c, 1))
		count++;
	close(file);
	return (count);
}

// Função para verificar se o dicionário é válido e não vazio.
int	ft_check_dict(char *dictpath)
{
	int	file;
	int	file_size;

	file = open(dictpath, O_RDONLY);
	if (file == -1)
		return (0);
	file_size = ft_get_file_size(dictpath);
	if (file_size == 0)
		return (0);
	close(file);
	return (1);
}
