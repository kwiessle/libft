NAME = test
SRCDIR = ./
HEADDIR = ./
HEAD = test.h
HEADFILES = $(addprefix $(HEADDIR)/, $(HEAD))
SCRFILES = $(addprefix $(SRCDIR)/, $(SRC))
SRC =	main.c \
		main_is.c \
		main_itoa.c \
		main_mem.c \
		main_memset.c \
		main_putnbr.c \
		main_putstr.c \
		main_strchr.c \
		main_strclr.c \
		main_strcmp.c \
		main_strdup.c \
		main_strequ.c \
		main_striter.c \
		main_strlen.c \
		main_strtrim.c \
		main_strstr.c \


OBJS = $(SCRFILES:.c=.o)
CC = gcc
CFLAGS = -g -Wall -Werror -Wextra -O3
LDFLAGS = -L ../ -lft
LIBFT = ../libft.a

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

$(LIBFT):
	$(MAKE) -C ../

%.o: %.c $(HEADERFILES)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(MAKE) -C ../ $@
	/bin/rm -f $(OBJS)

fclean: clean
	$(MAKE) -C ../ $@
	/bin/rm -f $(NAME)

re: fclean all
