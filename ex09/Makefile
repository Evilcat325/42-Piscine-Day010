# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seli <seli@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 02:19:52 by seli              #+#    #+#              #
#    Updated: 2018/10/02 22:17:36 by seli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(IDIR) -I./

IDIR = ./includes
SRCDIR = srcs
OBJDIR = objs

SOURCES = ft_op.c ft_stdio.c ft_do_op.c ft_main.c
SOURCES := $(SOURCES:%=$(SRCDIR)/%)


all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -o $(NAME) $(SOURCES)

clean:
	@/bin/rm -f $(NAME)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
