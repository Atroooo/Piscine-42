/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numericTEST.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 13:48:12 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/11 22:32:13 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 47) || (58 <= str[i]))
			return (0);
		i++;
	}
	return (1);

}

int main()
{
	printf("%d", ft_str_is_numeric("0ddf"));
}
