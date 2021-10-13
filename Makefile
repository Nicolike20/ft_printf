# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nortolan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 16:00:59 by nortolan          #+#    #+#              #
#    Updated: 2021/09/28 16:47:10 by nortolan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

ARFLAGS = -rcs

SRCS = ft_printf.c ft_printf_str_utils.c ft_printf_nbr_utils.c
OBJS = $(SRCS:%.c=%.o)

.PHONY = all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $@ $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
