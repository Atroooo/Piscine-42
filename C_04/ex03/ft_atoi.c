/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:26:26 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/17 23:09:46 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;
	int	i;

	sign = 1;
	nb = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+'){
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		nb = (nb * 10) + str[i] - '0';
		if (!(48 <= str[i + 1] && str[i + 1] <= 57))
			return (sign * nb);
		i++;
	}
	return (0);
}

int main()
{
	printf("%d", ft_atoi(" ---+---+1234-5168ab567"));
}
