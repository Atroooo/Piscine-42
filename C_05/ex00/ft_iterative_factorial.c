/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:43:33 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/18 11:06:59 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 0;
	res = 1;
	if (nb < 0)
		return 0;
	while (i < nb)
	{
		res = res * (nb - i);
		i++;
	}
	return (res);
}


int main()
{
	printf("%d", ft_iterative_factorial(10));
}
