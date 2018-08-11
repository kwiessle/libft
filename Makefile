# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/13 10:51:52 by kwiessle          #+#    #+#              #
#    Updated: 2018/08/11 13:31:51 by kwiessle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME= libft.a

SRC= ft_atoi.c \
		  ft_bzero.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_itoa.c \
		  ft_memalloc.c \
		  ft_memccpy.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memdel.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_putchar.c \
		  ft_putchar_fd.c \
		  ft_putendl.c \
		  ft_putendl_fd.c \
		  ft_putnbr.c \
		  ft_putnbr_fd.c \
		  ft_putstr.c \
		  ft_putstr_fd.c \
		  ft_strcat.c \
		  ft_strchr.c \
		  ft_strclr.c \
		  ft_strcmp.c \
		  ft_strcpy.c \
		  ft_strdel.c \
		  ft_strdup.c \
		  ft_strequ.c \
		  ft_striter.c \
		  ft_striteri.c \
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlen.c \
		  ft_strmap.c \
		  ft_strmapi.c \
		  ft_strncat.c \
		  ft_strncmp.c \
		  ft_strncpy.c \
		  ft_strnequ.c \
		  ft_strnew.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strsplit.c \
		  ft_strstr.c \
		  ft_strsub.c \
		  ft_strtrim.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_isspace.c \
		  ft_lstadd.c \
		  ft_lstnew.c \
		  ft_lstiter.c \
		  ft_lstmap.c \
		  ft_lstdel.c \
		  ft_lstdelone.c \
		  get_next_line.c \
		  ft_strappend.c \
		  ft_itoa_base.c \
		  ft_putnbr_base.c \

HEADER = ./includes
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "\033[32;1mlibft is ready\033[0m"

clean:
		@rm -rf $(OBJ)
		@echo "\033[37mall files.o are removed\033[0m"

fclean: clean
		@rm -rf $(NAME)
		@echo "\033[31m$(NAME) is deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re
