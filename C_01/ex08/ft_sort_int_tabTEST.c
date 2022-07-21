/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:44:41 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/09 16:16:18 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	temp = 0;
	while(i < size)
	{
		while(j < size)
		{
			if(tab[j] < tab[i])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
		j = i;
		
	}

	while(temp < size)
	{
		printf("%d ", tab[temp]);
		temp++;
	}
}

int main()
{
	int tab[8] = {141, 20, 112, 4, 15, 12, 1514, 87};
	ft_sort_int_tab(tab, 8);
}
