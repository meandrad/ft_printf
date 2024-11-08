# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macmac <macmac@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 23:52:20 by macmac            #+#    #+#              #
#    Updated: 2024/11/08 00:22:28 by macmac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src
INCLUDE_DIR = includes
OBJ_DIR = objs

SRC_FILES = $(SRC_DIR)/ft_putchar.c \
            $(SRC_DIR)/ft_putstr.c \
            $(SRC_DIR)/ft_putnbr.c \
            $(SRC_DIR)/ft_putunbr.c \
            $(SRC_DIR)/ft_putptr.c \
            $(SRC_DIR)/ft_putlhexa.c \
            $(SRC_DIR)/ft_putuhexa.c \
            $(SRC_DIR)/ft_printf.c

OBJS = $(SRC_FILES:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean clean

.PHONY: all clean fclean re