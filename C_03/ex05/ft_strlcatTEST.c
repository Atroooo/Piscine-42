/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:11:40 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/27 15:08:16 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
 
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	int				i;
	int				j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size < dest_len)
		return (size + src_len);
	while (dest[i] != '\0' && size > 0)
	{
		i++;
		size--;
	}
	j = 0;
	while (src[j] != '\0' && size > 1)
	{
		dest[i + j] = src[j];
		size--;
		j++;
	}
	if (size > 0)
		dest[i + j] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void print_char(char *str)
{
    int i = 0 ;
    while(i < 40)
    {
        if (str[i] <= 31)
            write(1,".",1);
        else
            write(1,&str[i],1);
        i++;
    }
}

int main()
{
    char dest1[30] = "012312";
    char src1[40] = "123456789";
    int size = 3 ;
    printf("%lu\n",strlcat(dest1 ,src1,size));

    print_char(dest1);
    printf("\n");

    char dest2[30] = "012312";
    char src2[40] = "123456789";
    printf("%u\n",ft_strlcat(dest2 ,src2,size));

    print_char(dest2);
    printf("\n");

}
