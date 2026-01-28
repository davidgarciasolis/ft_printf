/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 23:28:40 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/28 01:20:18 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(int c)
{
	unsigned int	uc;

	if (!c)
		return (NULL);
	uc = (unsigned int)c;
	if (write(1, &uc, 1))
		return ((int)uc);
	else
		return (-1);
}