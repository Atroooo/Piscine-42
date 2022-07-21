/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:55:56 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/17 22:56:12 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
