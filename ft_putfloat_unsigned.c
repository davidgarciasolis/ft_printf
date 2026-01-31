/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_unsigned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:43:15 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/31 17:55:44 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putfloat_unsigned(float n)
{
	if (!n)
		return -1;
	if (n < 0)
		return (ft_putfloat(-n));
	else
		return (ft_putfloat(n));
}
/*
int	main(void)
{
	ft_putfloat_unsigned(-3.14);
	return (0);
}
*/