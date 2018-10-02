# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seli <seli@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 02:19:52 by seli              #+#    #+#              #
#    Updated: 2018/10/02 03:23:10 by seli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(IDIR)

IDIR = ./includes
SRCDIR = srcs
OBJDIR = objs

SOURCES = ft_main.c ft_op.c ft_stdio.c
SOURCES := ${SOURCES:%=$(SRCDIR)/%}
OBJECTS := ${SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o}

all: $(NAME)

$(NAME): $(OBJECTS)
	@${CC} ${CFLAGS} -o $(NAME) $(OBJECTS)

$(OBJECTS): $(OBJDIR/%.o : $(SRCDIR)/%.c | $(OBJDIR)
	@${CC} ${CFLAGS} -c -o $@ $<

$(OBJDIR):
	mkdir $@

clean:
	@/bin/rm -f $(OBJECTS)
	@/bin/rm -rf $(OBJDIR)

fclean: clean
	@/bin/rm -f libft.a

re: fclean all
