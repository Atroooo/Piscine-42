/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 22:44:57 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/18 18:30:04 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_print(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		write(1, &argv[i], 1);
		i++;
	}
	write(1, " ", 1);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0 ;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    if (s1[i] > s2[i])
        return (1);
    else if (s1[i] == s2[i])
        return (0);
    return (-1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	char *min;

	i = 1;
	j = 1;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				min = argv[j];
				(argv[j]) = (argv[i]);
				(argv[i]) = min;
			}
			j++;
		}
		ft_print(argv[i]);
		i++;
		j = i + 1;
	}
	return (0);
}
