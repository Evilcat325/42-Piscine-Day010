# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seli <seli@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 19:24:00 by seli              #+#    #+#              #
#    Updated: 2018/10/01 21:56:44 by seli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -I$(IDIR)

IDIR = ./includes
SRCDIR = srcs
OBJDIR = objs

SOURCES := $(wildcard ${SRCDIR}/*.c)
OBJECTS := ${SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o}
TARGET = target

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJECTS)
	@ar rc libft.a $(OBJECTS)

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c | $(OBJDIR)
	@${CC} ${CFLAGS} -c -o $@ $<

$(OBJDIR):
	@mkdir $@

.PHONY: clean
clean:
	@rm -f $(OBJECTS)
	@rm -rf $(OBJDIR)

.PHONY: fclean
fclean: clean
	@rm -f libft.a

.PHONY: re
re: fclean all
