# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/04 19:05:03 by davgarc4          #+#    #+#              #
#    Updated: 2026/02/14 20:19:34 by davgarc4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = \
	ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putint.c \
	ft_puthex_tolower.c \
	ft_puthex_toupper.c \
	ft_putptr.c \
	ft_putperce.c \
	ft_putunsigned.c \
	ft_strcpy.c \
	ft_strlen.c
	
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	cc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all