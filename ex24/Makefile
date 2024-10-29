# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 18:10:45 by sakamoto-42       #+#    #+#              #
#    Updated: 2024/10/27 18:55:24 by sakamoto-42      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I$(HEADERS_DIR)

SRCS_DIR = srcs/
HEADERS_DIR = includes

SRCS_FILES = \
	ft_putchar.c \
	ft_putstr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_swap.c

OBJS = $(addprefix $(SRCS_DIR), $(SRCS_FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(SRCS_DIR)%.o: $(SRCS_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
