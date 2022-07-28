/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:12:56 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/27 10:37:07 by lcompieg         ###   ########lyon.fr   */
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
    printf("%d\n",ft_is_prime(-1));
    printf("%d\n",ft_is_prime(0));
    printf("%d\n \n",ft_is_prime(1));

    printf("%d\n",ft_is_prime(2));
    printf("%d\n",ft_is_prime(3));
    printf("%d\n",ft_is_prime(17));
    printf("%d\n",ft_is_prime(19));
    printf("%d\n \n",ft_is_prime(23));

    printf("%d\n",ft_is_prime(1));
    printf("%d\n",ft_is_prime(135));
    printf("%d\n",ft_is_prime(195));
    printf("%d\n",ft_is_prime(200));
    printf("%d\n",ft_is_prime(205));
}
