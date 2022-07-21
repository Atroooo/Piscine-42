/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpyTEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:54:50 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/16 22:59:54 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_lenght(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				lenght;

	lenght = ft_str_lenght(src);
	i = 0;
	while (src[i] && size > 1)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (lenght);
}

#include <string.h>
int main()
{
	char chararray[6];
	char chararray1[6];
	//printf("%d %s\n", ft_strlcpy(chararray, "ABCdas", 7), chararray);
	printf("%d %s", strlcpy(chararray1, "ABCdas", 7), chararray1);
	
}
