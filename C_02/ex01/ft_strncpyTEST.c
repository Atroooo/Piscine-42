/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpyTEST.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:39:15 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/14 18:20:58 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (src[i] != '\0' && i <  n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[6] = "aaa";
	char src[10] = "abcdefghde";
	ft_strncpy(dest, src, 10);
	printf("dest = %s ", dest);

	char destbis[6] = "aaa";
	char srcbis[10] = "abcdefghde";
	strncpy(destbis, srcbis, 6);
	printf("dest2 = %s ", destbis);
}
