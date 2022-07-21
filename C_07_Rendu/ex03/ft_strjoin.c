/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:35:46 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/20 00:00:21 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	len_src;

	len_dest = ft_str_len(dest);
	len_src = 0;
	while (src[len_src])
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}
	dest[len_dest + len_src] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_c;
	int		i;

	if (size == 0)
	{
		str_c = malloc(1);
		str_c[0] = 0;
		return (str_c);
	}
	str_c = malloc(sizeof(char *) * size);
	str_c[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str_c, strs[i]);
		if (i + 1 < size)
			ft_strcat(str_c, sep);
		i++;
	}
	return (str_c);
}
