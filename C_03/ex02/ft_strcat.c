/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcatTEST.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:10:29 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/16 22:09:13 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    int len_dest;
    int len_src;

    len_dest = 0;
    while(dest[len_dest])
    {   
        len_dest++;
    }
    len_src = 0;
    while(src[len_src])
    {   
        dest[len_dest + len_src] = src[len_src];
        len_src++;
    }
    dest[len_dest + len_src] = '\0';
    return (dest);
}

#include <stdio.h>
#include <string.h>
int main()
{   
    char str1[30] = "test";
    char str2[30] = "ok";
    char str1b[30] = "test";
    char str2b[30] = "ok";
    printf("%s \n",strcat(str1 ,str2));
    printf("%s \n",ft_strcat(str1b ,str2b));
}
