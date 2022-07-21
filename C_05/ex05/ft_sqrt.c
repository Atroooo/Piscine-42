/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:03:12 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/18 13:33:13 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	while(i * i < nb)
	{
		i++;
		if (i * i > nb)
			return 0;
		if (i * i == nb)
			return i;
	
	}
	return 0;
}

#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(81));
}