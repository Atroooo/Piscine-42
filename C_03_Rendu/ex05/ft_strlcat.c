/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:56:36 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/17 22:58:08 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	index;

	destlen = 0;
	index = 0;
	srclen = 0;
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
	return (destlen + srclen);
}
