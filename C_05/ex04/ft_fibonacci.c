/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:24:35 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/18 13:28:59 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if(index < 0)
		return -1;
	if (index < 3)
		return 1;
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

#include <stdio.h>
int main()
{
	printf("%d", ft_fibonacci(-10));
}
