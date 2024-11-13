# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 23:52:20 by macmac            #+#    #+#              #
#    Updated: 2024/11/12 21:14:53 by meandrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE_DIR = includes
SRC_FILES = src/ft_putchar.c \
            src/ft_putstr.c \
            src/ft_putnbr.c \
            src/ft_putunbr.c \
            src/ft_putptr.c \
            src/ft_putlhexa.c \
            src/ft_putuhexa.c \
            src/ft_printf.c
OBJS = $(SRC_FILES:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re