/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcaseTEST.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:23:24 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/11 22:35:06 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int main()
{
	char test[8] = "qABCDE";
	ft_strlowcase(test);
	printf("%s", test);
}
