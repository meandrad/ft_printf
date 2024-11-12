# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 23:52:20 by macmac            #+#    #+#              #
#    Updated: 2024/11/12 19:53:33 by meandrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_FILES = ft_putchar.c \
            ft_putstr.c \
            ft_putnbr.c \
            ft_putunbr.c \
            ft_putptr.c \
            ft_putlhexa.c \
            ft_putuhexa.c \
            ft_printf.c

OBJS = $(SRC_FILES:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean clean

.PHONY: all clean fclean re