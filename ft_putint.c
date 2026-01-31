/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 12:59:51 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/31 16:15:27 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int n)
{
	int len;
	
	if (!n)
		return (-1);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if(n >= 10)
		len = ft_putint(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
/*
int	main(void)
{
	ft_putint(-96);
	return (0);
}
*/