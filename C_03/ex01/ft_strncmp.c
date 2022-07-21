/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmpTEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:09:48 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/16 21:22:10 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0 ;
	if (n == 0)
		return 0;
    while (s1[i] && s2[i] && i < n - 1  && s1[i] == s2[i])
    {
        i++;
    }
    if (s1[i] > s2[i])
        return (1);
    else if (s1[i] == s2[i])
        return (0);
    return (-1);
}


int main()
{
	printf("%d \n",strncmp("a", "a", 10));
	printf("%d", ft_strncmp("a", "a", 10));
}
