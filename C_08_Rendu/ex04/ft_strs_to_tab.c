/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:23:49 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/20 07:49:20 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str_to_struct;

	i = 0;
	str_to_struct = malloc(sizeof(char *) * ft_strlen(*av));
	while (i < ac)
	{
		str_to_struct[i].str = malloc(sizeof(char *) * ft_strlen(*av));
		str_to_struct[i].copy = malloc(sizeof(char *) * ft_strlen(*av));
		str_to_struct[i].size = ft_strlen(av[i]);
		ft_strcpy(str_to_struct[i].str, av[i]);
		ft_strcpy(str_to_struct[i].copy, av[i]);
		i++;
	}
	return (str_to_struct);
}
