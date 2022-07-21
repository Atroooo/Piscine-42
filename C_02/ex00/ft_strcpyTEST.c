/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpyTEST.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:39:15 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/11 22:17:51 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main()
{
	char chararray1[20];
	ft_strcpy(chararray1, "abcdedsfewfwe");
	printf("%s ", chararray1);

	char chararray[20];
	strcpy(chararray, "abcdedsfewfwe");
	printf("%s", chararray);
}
