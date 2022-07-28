/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:27:43 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/27 14:11:51 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
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
