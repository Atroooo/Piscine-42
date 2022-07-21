/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrTEST.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:11:11 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/17 22:43:18 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	same_char;

	index = 0;
	if (str_len(to_find) == 0)
		return (&str[index]);
	if (str_len(str) < str_len(to_find) || str_len(str) == 0)
		return (0);
	while (str[index])
	{
		if (str[index] == to_find[0])
		{
			same_char = 1;
			while (str[index + same_char] == to_find[same_char]
				&& same_char >= 1)
			{
				if (to_find[same_char] && same_char == str_len(to_find) - 1)
					return (&str[index]);
				same_char++;
			}
		}
		index++;
	}
	return (0);
}

#include <string.h>
int main()
{   
	char str1[30] = "ceci est un test";
	char str2[30] = "test";

	printf("fonction = %p \n",strstr(str1 ,str2));
	printf("moi = %p \n",ft_strstr(str1 ,str2));

}
