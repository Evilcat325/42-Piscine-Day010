# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seli <seli@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 19:24:00 by seli              #+#    #+#              #
#    Updated: 2018/10/02 22:12:48 by seli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(IDIR)

IDIR = ./includes
SRCDIR = srcs

SOURCES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SOURCES := $(SOURCES:%=$(SRCDIR)/%)
OBJECTS := $(SOURCES:$(SRCDIR)/%.c=%.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SOURCES)
	@ar -rcs libft.a $(OBJECTS)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f libft.a

re: fclean all
