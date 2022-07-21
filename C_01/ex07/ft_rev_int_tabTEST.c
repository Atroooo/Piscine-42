/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tabTEST.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:09:02 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/09 15:59:36 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int 	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int t;

	i = 0;
	t = 0;
	while(i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);	
		i++;
	}
	while(t < size)
	{
		printf("%d", tab[t]);
		t++;
	}
}

int main()
{
	int tab[6] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 5);
}
