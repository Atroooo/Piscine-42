/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:57:31 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/14 20:57:36 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void convert_hexa(char c)
{
	int a;
	int b;

	a = (c >> 4) & 0xf;
	b = c & 0xf;
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[a]);
	ft_putchar("0123456789abcdef"[b]);
}

void    ft_putstr_non_printable(char *str)
{
    int    i;

    i = 0;
    while (str[i])
    {
        if (str[i] <= 31)
            convert_hexa(str[i]);
        else
            write(1, &str[i], 1);
        i++;
    }
}
