/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_toupper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 01:50:52 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/31 18:10:17 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_puthex_toupper(unsigned long n)
{
	char	base_hex[17];
	int		i;

	if (!n)
		return (-1);
	ft_strcpy(base_hex, "0123456789ABCDEF");
	i = 0;
	if(n >= 16)
		i = ft_puthex_toupper(n / 16);
	i += ft_putchar(base_hex[n % 16]);
	return (i);
}
/*
int	main(void)
{
	ft_puthex_toupper(89217497249);
	return (0);
}
*/