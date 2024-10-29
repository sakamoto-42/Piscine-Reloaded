# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 18:50:36 by sakamoto-42       #+#    #+#              #
#    Updated: 2024/10/29 07:14:43 by sakamoto-42      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I$(HEADER_DIR)

HEADER_DIR = includes
SRCS_DIR = srcs/

SRCS_FILES = \
	ft_putchar_error.c \
	ft_putstr_error.c \
	ft_display_file.c \
	main.c

OBJS = $(addprefix $(SRCS_DIR), $(SRCS_FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

$(SRCS_DIR)%.o: $(SRCS_DIR)%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
