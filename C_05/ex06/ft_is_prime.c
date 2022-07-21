/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:12:56 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/18 13:34:33 by lcompieg         ###   ########lyon.fr   */
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

#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(7));
}
