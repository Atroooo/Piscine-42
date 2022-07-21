/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercaseTEST.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:27:48 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/11 22:33:04 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 64) || (91 <= str[i]))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	printf("%d", ft_str_is_uppercase("QQQaQQAD"));
}
