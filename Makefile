# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amurtone <amurtone@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 08:57:27 by amurtone          #+#    #+#              #
#    Updated: 2020/01/21 09:00:16 by amurtone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = 
OBJ = $(subst .c,.o,$(SRCS))
HEADER = includes/ft_print_f.h
FLAGS = -Wall -Wextra -Werror
ATTATCH = -L ./libft -lft
LIBFT = libft/

all: $(NAME)

$(NAME): 
	make -C $(LIBFT)
	gcc $(FLAGS) -o $(NAME) $(SRCS) -I $(HEADER) $(ATTATCH)

clean:
	rm -f $(OBJ)
	make -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT) fclean

re: fclean all

.PHONY: all clean fclean re
