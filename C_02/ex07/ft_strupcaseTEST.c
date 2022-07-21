/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcaseTEST.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:35:48 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/10 15:05:55 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int main()
{
	char test[6] = "abcde";
	ft_strupcase(test);
	printf("%s", test);
}
