/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 02:00:03 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/30 02:10:14 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	addr;

	if (!ptr)
		{
			write (1, "0x0", 3);
			return (-1);
		}
	addr = (unsigned long)ptr;
	write (1, "0x", 2);
	return (ft_puthex(addr) + 2);
}