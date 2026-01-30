/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 04:04:36 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/30 02:27:54 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		x;
	int		y;
	char	options[10];
	
	x = 0;
	ft_strcpy(options, "cspdiuxX%");
	va_start(args, str);
	while (str[x])
	{
		if (str[x] == '%')
		{
			x++;
			y = 0;
			while (str[x] != options[y] && options[y])
			{
				y++;
			}
			ft_putptr(va_arg(args, void *));
		}
		else
		{
			ft_putchar(str[x]);
		}
		x++;
	}
	va_end(args);
	return (0);	
}

int	main(void)
{
	void	*ptr;
	int		n;
	
	ptr = &n;
	printf("%p\n", ptr);
	ft_printf("%p\n", ptr);	
	return (0);
}