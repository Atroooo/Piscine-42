/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:11:40 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/17 22:45:07 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
 
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destlen;
	unsigned int srclen;
	unsigned int index;

	destlen = 0;
	index = 0;
	while (dest[destlen] && destlen < size)
		destlen++;
	while (src[srclen])
		srclen++;
	while (src[index] && (destlen + index) < size - 1)
	{
		dest[destlen + index] = src[index];
		index++;
	}
	if (src[index] == '\0')
		dest[destlen + index] = '\0';
	return (destlen+srclen);
}
  
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[30] = "";
	char str2[30] = "test";
	printf("%u ", ft_strlcat(str1, str2,10));
	printf("%s\n", str1);

	char str1bis[30] = "";
	char str2bis[30] = "test";
	printf("%lu ", strlcat(str1bis, str2bis,10));
	printf("%s", str1bis);
}
