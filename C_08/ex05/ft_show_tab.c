/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 05:40:45 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/21 11:46:09 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long int nbtemp;
	char c;

	nbtemp = nb;
	if(nbtemp > 0)
	{
		ft_putnbr(nbtemp / 10);
		c = (nbtemp % 10) + 48;
		write(1, &c, 1);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int i;
	char *nb;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putstr(par[i].str);
		write(1, "\n", 2);
		ft_putnbr(par[i].size);
		write(1, "\n", 2);
		ft_putstr(par[i].copy);	
		write(1, "\n", 2);	
		i++;
	}
}

#include <stdio.h>
int main()
{
	int ac = 3;
	char *str0 = "J'adores les nouilles eh oh";
	char *str1 = "et les gros poneys";
	char *str2 = "mais surtout les pasteques Egyptiennes";
	char **av;
	av = malloc(300);
	av[0] = str0;
	av[1] = str1;
	av[2] = str2;
	t_stock_str    *all_struct = ft_strs_to_tab(ac, av);
	ft_show_tab(ft_strs_to_tab(ac, av));
	return (0);
}
