/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:23:49 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/20 05:39:02 by lcompieg         ###   ########lyon.fr   */
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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;

	i = 0;
	t_stock_str	*str_to_struct = malloc(sizeof(char *) * ft_strlen(*av));
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


#include <stdio.h>
int main()
{
    int ac = 3;
    char *str0 = "J'adores les nouilles";
    char *str1 = "et les gros poneys";
    char *str2 = "mais surtout les pasteques Egyptiennes";
    char **av;
    av = malloc(300);
    av[0] = str0;
    av[1] = str1;
    av[2] = str2;
    t_stock_str    *all_struct = ft_strs_to_tab(ac, av);
    int index = 0;
    while (all_struct[index].str != '\0')
    {
        printf("%d\n",all_struct[index].size);
        printf("%s\n",all_struct[index].str);
        printf("%s\n\n",all_struct[index].copy);
        index++;
    }
    return (0);
}
