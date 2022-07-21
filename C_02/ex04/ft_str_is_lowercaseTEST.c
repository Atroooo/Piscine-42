/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercaseTEST.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:24:09 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/10 14:46:30 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 96) || (123 <= str[i]))
			return (0);
		i++;
	}
	return (1);

}

int main()
{
	printf("%d", ft_str_is_lowercase("qbcdefwrgr"));
}
