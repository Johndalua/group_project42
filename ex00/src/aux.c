/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:29:28 by aluis             #+#    #+#             */
/*   Updated: 2024/11/03 20:29:41 by aluis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	check_aux(char *nbr, int i)
{
	while (nbr[i])
	{
		if (nbr[i] == '.' && nbr[i + 1] >= '0' && nbr[i + 1] <= '9')
			return (0);
		if (nbr[i] < '0' || nbr[i] > '9')
		{
			nbr[i] = '\0';
			return (1);
		}
		i++;
	}
	return (1);
}

int	aux2(char *buffer, int size, int file)
{
	if (size < 0)
		return (1);
	if (file == -1)
		return (1);
	if (!buffer)
	{
		close (file);
		return (1);
	}
	return (0);
}
