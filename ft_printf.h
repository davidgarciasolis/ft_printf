/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 23:09:26 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/28 01:20:40 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_printf(char const *str, ...);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_putchar(int c);
int		ft_putstr(char	*ptr);

#endif