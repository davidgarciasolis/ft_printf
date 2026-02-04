/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_unsigned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:43:15 by davgarc4          #+#    #+#             */
/*   Updated: 2026/02/04 19:38:16 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putfloat_unsigned(unsigned long n)
{
	if (!n)
		return -1;
	if (n < 0)
		return (ft_putfloat_unsigned(-n));
	else
		return (ft_putfloat_unsigned(n));
}
/*
int	main(void)
{
	ft_putfloat_unsigned(-3.14);
	return (0);
}
*/