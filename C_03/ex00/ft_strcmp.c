/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmpTEST.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:09:14 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/16 21:21:05 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0 ;
    while (s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    if (s1[i] > s2[i])
        return (1);
    else if (s1[i] == s2[i])
        return (0);
    return (-1);
}

#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d \n",ft_strcmp("a","b"));
    printf("%d \n",strcmp("a","b"));

}
