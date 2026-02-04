/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 04:04:36 by davgarc4          #+#    #+#             */
/*   Updated: 2026/02/04 19:16:00 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_printargs(char str, va_list args)
{
	int	n;

	n = 0;
	if (str == '%')
		n = ft_putperce();
	else if (str == 'c')
		n = ft_putchar(va_arg(args, int));
	else if (str == 's')
		n = ft_putstr(va_arg(args, char *));
	else if (str == 'd' || str == 'i')
		n = ft_putint(va_arg(args, int));
	else if (str == 'u')
		n = ft_putfloat_unsigned((unsigned long)va_arg(args, unsigned int));
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
	
	x = 0;
	n = 0;
	va_start(args, str);
	while (str[x])
	{
		if (str[x] == '%')
		{
			n += ft_printargs(str[++x], args);
			x++;
		}
		else
			n += ft_putchar(str[x]);
		x++;
	}
	va_end(args);
	return (n);	
}

int	main(void)
{
	int		ret1;
	int		ret2;
	int		n;
	char	c;
	char	*str;

	n = 42;
	c = 'A';
	str = "Hola mundo";

	ret1 = ft_printf("ft_printf:\n");
	ret1 = ft_printf(
		"char: %c | string: %s | int: %d | unsigned: %u | hex: %x | HEX: %X | ptr: %p | %%\n",
		c, str, n, (unsigned int)n, n, n, &n
	);

	ret2 = printf("\nprintf:\n");
	ret2 = printf(
		"char: %c | string: %s | int: %d | unsigned: %u | hex: %x | HEX: %X | ptr: %p | %%\n",
		c, str, n, (unsigned int)n, n, n, &n
	);

	printf("\nReturn ft_printf: %d\n", ret1);
	printf("Return printf   : %d\n", ret2);

	return (0);
}