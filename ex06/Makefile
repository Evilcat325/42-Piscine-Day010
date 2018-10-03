# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seli <seli@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 02:19:52 by seli              #+#    #+#              #
#    Updated: 2018/10/02 21:29:39 by seli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(IDIR)

IDIR = ./includes
SRCDIR = srcs
OBJDIR = objs

SOURCES = ft_main.c ft_op.c ft_stdio.c
DEPS = $(IDIR)/ft_define.h
SOURCES := $(SOURCES:%=$(SRCDIR)/%)
OBJECTS := $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c $(IDIR)/%.h $(DEPS) | $(OBJDIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(OBJDIR):
	@mkdir $@

clean:
	@/bin/rm -f $(OBJECTS)
	@/bin/rm -rf $(OBJDIR)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
