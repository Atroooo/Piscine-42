/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:26:02 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/07 18:05:03 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn_recur(int n)
{
	while(n !=)
}

void	ft_print_combn(int n)
{
	while(n != 0)
	{
		ft_print_combn_recur(n);
		n = n - 1;
	}	
}
