/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alphaTEST.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 11:32:08 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/11 22:31:33 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_str_is_alpha(char *str)
{
	int		i;
	int 	count;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if((str[i] <= 64) || (91  >= str[i] && str[i] >= 96) || (str[i] >= 123))
			return (0);
		i++;
	}
	return (1);

}

int main()
{
	printf("%d", ft_str_is_alpha("essdfghsjkDFHEJFt"));
}
