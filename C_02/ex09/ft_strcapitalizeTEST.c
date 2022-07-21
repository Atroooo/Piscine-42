/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalizeTEST.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:31:39 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/11 22:49:36 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int		i;

	if(97 <= str[0] && str[0] <= 122)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{	
			if ((str[i - 1] < 48) || (57 < str[i - 1] && str[i - 1] < 65) || (91 <= str[i - 1] && str[i - 1] <= 96) || (123 <= str[i - 1]))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int main()
{
	char test[70] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(test);
	printf("%s", test);
}
