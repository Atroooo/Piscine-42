/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:24:35 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/28 04:24:35 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int    rec_loop(int n)
{    
    if (n < 2)
        return (n);
    else
        return (rec_loop(n - 1) + rec_loop(n - 2));
}

int    ft_fibonacci(int index)
{    
    if (index >= 0)
        return (rec_loop(index));
    return (-1);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_fibonacci(47));
}
