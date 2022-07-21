/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:27:43 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/19 17:31:14 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	if (min >= max)
	{
		tab = malloc(1);
		tab[0] = 0;
		return (0);
	}
	tab = malloc(sizeof(int*) + (max - min));
	i = 0;
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	range = &tab;
	return (i);
}

#include <stdio.h>
int main()
{    
    int **range;
    int int_1 = 1;
    int int_2 = 2;
    int int_3 = 3;
    range = malloc(300);
    range[0] = &int_1;
    range[1] = &int_2;
    range[2] = &int_3;
    printf("%d\n",ft_ultimate_range(range,5,20));
}
