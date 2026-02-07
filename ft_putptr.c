/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 02:00:03 by davgarc4          #+#    #+#             */
/*   Updated: 2026/02/07 12:32:09 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	if (!ptr)
	{
		return (write(1, "(nil)", 5));
	}
	write (1, "0x", 2);
	return (ft_puthex_tolower(ptr) + 2);
}
