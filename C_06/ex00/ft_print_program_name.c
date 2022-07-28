/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:15:39 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/28 03:43:56 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_program_name(char *argv)
{
	(void) argv;
	int i;

	i = 0;
	while (argv[i])
	{
		write(1, &argv[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	(void) argc;
	ft_print_program_name(argv[0]);
	write(1, "\n", 1);
}
