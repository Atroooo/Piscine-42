/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:48:57 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/21 17:34:01 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *str;
	int i;

	str = malloc(sizeof(char) * str_len(src));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
    char    *dest = ft_strdup("J'aime les nouillesdsfvdeeeeeeeeeeeeeeeeeeeeee");
    printf("%s", dest);
    return (0);
}
