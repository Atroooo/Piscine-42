/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncatTEST.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:10:48 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/16 22:11:05 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int len_dest;
    unsigned int len_src;

    len_dest = 0;
    while(dest[len_dest])
    {   
        len_dest++;
    }

    len_src = 0;
    while(src[len_src] && len_src < nb)
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
    char str1[30] = "";
    char str2[30] = " test";

    char str1b[30] = "";
    char str2b[30] = " test";

    printf("%s \n",strncat(str1 ,str2,2));
    printf("%s \n",ft_strncat(str1b ,str2b, 2));
    
}
