/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:58:17 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/20 19:13:04 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *tab;
	int i;

	if(min >= max)
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

#include <stdio.h>
int main()
{
    int *tab = ft_range(15,20);
    int i = 0;
    while (tab[i])
    {
        printf("%d\n",tab[i]);
        i++;
    }
}
