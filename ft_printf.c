/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 04:04:36 by davgarc4          #+#    #+#             */
/*   Updated: 2026/02/07 12:57:26 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_printargs(char str, va_list args)
{
	int		n;
	char	c;

	n = 0;
	c = str;
	if (str == '%')
		n = ft_putperce();
	else if (str == 'c')
		n = ft_putchar(va_arg(args, int));
	else if (c == 's')
		n = ft_putstr(va_arg(args, char *));
	else if (str == 'd' || str == 'i')
		n = ft_putint((long)va_arg(args, int));
	else if (str == 'u')
		n = ft_putunsigned(va_arg(args, unsigned int));
	else if (str == 'x')
		n = ft_puthex_tolower((unsigned long)va_arg(args, unsigned int));
	else if (str == 'X')
		n = ft_puthex_toupper((unsigned long)va_arg(args, unsigned int));
	else if (str == 'p')
		n = ft_putptr(va_arg(args, long unsigned));
	return (n);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		x;
	int		n;

	if (!str)
		return (-1);
	x = 0;
	n = 0;
	va_start(args, str);
	while (str[x])
	{
		if (str[x] == '%')
		{
			x++;
			n += ft_printargs(str[x], args);
		}
		else
			n += ft_putchar(str[x]);
		x++;
	}
	va_end(args);
	return (n);
}
/*
int	main(void)
{
	printf(" %d ", 0);
	ft_printf(" %d ", 0);
	return (0);
}
*/