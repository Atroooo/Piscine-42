/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:27:43 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/19 23:59:28 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		tab = malloc(1);
		tab[0] = 0;
		return (0);
	}
	tab = malloc(sizeof(int *) + (max - min));
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	range = &tab;
	return (i);
}
