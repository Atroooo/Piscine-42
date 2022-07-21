/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:32:48 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/18 13:43:56 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return 0;
	if (nb == 2)
		return 1;
	else
	{
		while (i < nb)
		{
			if(nb % i == 0)
				return 0;
			i++;
		}
		return 1;
	}
}

int ft_find_next_prime(int nb)
{	
	while (ft_is_prime(nb) == 0)
		nb++;
	return nb;
}


#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(12));
}
