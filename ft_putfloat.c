/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 13:15:01 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/31 17:50:24 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_putfloat(float n)
{
	int	len;
	int	number_int;
	
	if (!n)
		return (-1);
	number_int = (int)n;
	ft_putint(number_int);
	ft_putchar(',');
	len = ft_putint((int)((n - number_int)* 1000000));
	return (len);
}
/*
int	main(void)
{
	putfloat(3.14);
	return (0);
}
*/