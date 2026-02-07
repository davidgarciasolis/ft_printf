/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_tolower.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 01:50:52 by davgarc4          #+#    #+#             */
/*   Updated: 2026/02/07 12:55:20 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_puthex_tolower(unsigned long n)
{
	char	base_hex[17];
	int		i;

	ft_strcpy(base_hex, "0123456789abcdef");
	i = 0;
	if (n >= 16)
		i = ft_puthex_tolower(n / 16);
	i += ft_putchar(base_hex[n % 16]);
	return (i);
}
