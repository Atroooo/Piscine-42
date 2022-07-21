/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:58:17 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/19 23:58:53 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		tab = malloc(1);
		tab[0] = 0;
		return (tab);
	}
	i = 0;
	tab = malloc(sizeof(int) + (max - min));
	min = min + 1;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
