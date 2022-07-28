/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:21:37 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/27 08:41:31 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_power(10, 0));
}
