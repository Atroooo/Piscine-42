/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:03:12 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/28 04:13:56 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < 46341)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}

#include<stdio.h>
int main()
{
    printf ("%d\n",ft_sqrt(9));
    printf ("%d\n",ft_sqrt(5));
    printf ("%d\n",ft_sqrt(-6));
    printf ("%d\n",ft_sqrt(1));
    printf ("%d\n",ft_sqrt(10));
    printf ("%d\n",ft_sqrt(2147483646));


}
