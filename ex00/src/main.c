/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:31:56 by aluis             #+#    #+#             */
/*   Updated: 2024/11/03 20:32:01 by aluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

// Função para imprimir uma mensagem de erro padrão.
void	ft_error(void)
{
	write (2, "Error\n", 6);
}

// Função para imprimir uma mensagem de erro específica
// para o dicionário.
void	ft_error_dict(void)
{
	write (2, "Dict Error\n", 11);
}

// Função para verificar se o número passado
// como argumento ultrapassa o limite máximo.
int	passou(char *str)
{
	if (ft_strlen(str) > \
	ft_strlen("999999999999999999999999999999999999999"))
	{
		ft_error_dict();
		return (1);
	}
	return (0);
}

// Função principal do programa que processa os argumentos,
// verifica o dicionário e inicia a impressão do número por extenso.
int	main(int argc, char **argv)
{
	char	*dictpath;
	char	*nbr;

	if (!ft_check_args(argc, argv, &dictpath, &nbr))
	{
		ft_error();
		return (1);
	}
	if (passou(argv[1]))
		return (1);
	if (!ft_check_dict(dictpath))
	{
		free(nbr);
		ft_error_dict();
		return (1);
	}
	if (!ft_init(dictpath, nbr))
	{
		ft_error_dict();
		return (1);
	}
	return (0);
}
