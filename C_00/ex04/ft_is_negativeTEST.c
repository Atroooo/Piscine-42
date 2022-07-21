/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negativeTEST.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcompieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:35:35 by lcompieg          #+#    #+#             */
/*   Updated: 2022/07/06 18:08:03 by lcompieg         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n){
	if(n < 0) write(1, "N", 1);
	else if(n >= 0) write(1, "P", 1);
}

int main(){
	ft_is_negative(2);
	ft_is_negative(-5);
}
