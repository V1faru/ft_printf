# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amurtone <amurtone@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 08:57:27 by amurtone          #+#    #+#              #
#    Updated: 2020/03/03 14:22:17 by amurtone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = srcs/binary.c srcs/char.c srcs/conversions.c srcs/float.c srcs/float2.c \
		srcs/format_parse.c srcs/ft_error.c srcs/ft_printf.c srcs/hex.c \
		srcs/ints.c srcs/modifiers.c srcs/octals.c srcs/pointer.c srcs/strings.c \
		srcs/support.c srcs/support2.c srcs/udecint.c
OBJ = $(subst .c,.o,$(SRCS))
HEADER = includes/ft_print_f.h
FLAGS = -Wall -Wextra -Werror
ATTATCH = -L ./libft -lft
LIBFT = libft/

all: $(NAME)

$(NAME): 
	make -C $(LIBFT)
	gcc $(FLAGS) -o $(NAME) $(SRCS) -I $(HEADER) $(ATTATCH)
	ar -rc $(NAME) $(OBJ) libft/*.o
	ranlib $(NAME)

clean:
	rm -f $(OBJ)
	make -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re
