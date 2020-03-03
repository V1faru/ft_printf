# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amurtone <amurtone@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 08:57:27 by amurtone          #+#    #+#              #
#    Updated: 2020/03/03 17:40:42 by amurtone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = binary.c char.c conversions.c float.c float2.c \
		format_parse.c ft_error.c ft_printf.c hex.c \
		ints.c modifiers.c octals.c pointer.c strings.c \
		support.c support2.c udecint.c
DIR_S = srcs
SRCS = $(addprefix $(DIR_S)/,$(SRC))
OBJ = $(subst .c,.o,$(SRC))
HEADER = includes/ft_print_f.h
LIBFT = libft/
LIB_NAME = libft.a
LIB = $(LIBFT)$(LIB_NAME)
CC = gcc
FLAGS = -Wall -Wextra -Werror
COLOR_RESET = \033[0m
COLOR_PENDING = \033[01;33m
COLOR_SUCCESS = \033[1;32m
COLOR_DEFAULT = \033[1;34m

all: $(NAME)
$(NAME): $(OBJS)
	@echo "$(LIB_NAME)     [$(COLOR_PENDING)Compiling...$(COLOR_RESET)]"
	@make -C $(LIBFT)
	@echo "\033[A\033[K\033[A"
	@echo "$(LIB_NAME) [$(COLOR_SUCCESS)OK$(COLOR_RESET)]"
	@cp $(LIB) $(NAME)
	@echo "$(NAME)     [$(COLOR_PENDING)Compiling...$(COLOR_RESET)]"
	@$(CC) $(FLAGS) -I $(HEADER) -I $(LIB_PATH)/includes -c $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[A\033[K\033[A"
	@echo "$(NAME)     [$(COLOR_SUCCESS)OK$(COLOR_RESET)]"
	@echo "        [$(COLOR_SUCCESS)FINISHED$(COLOR_RESET)]"
test:
	$(CC) $(NAME) main.c
	./a.out
norme:
	@echo "$(LIBFT)     [$(COLOR_PENDING)Libft Norm$(COLOR_RESET)]"
	norminette ./libft/
	@echo "$(HEADER)     [$(COLOR_PENDING)Header Norm$(COLOR_RESET)]"
	norminette ./$(HEADER)/
	@echo "$(DIR_S)     [$(COLOR_PENDING)Source Norm$(COLOR_RESET)]"
	norminette ./$(DIR_S)/
clean:
	@make -C $(LIBFT) clean
	@rm -f $(OBJ)
	@echo "$(NAME): $(COLOR_SUCCESS)$(OBJ) DELETED$(COLOR_RESET)"
	@echo "$(NAME): $(COLOR_SUCCESS)All object files were deleted$(COLOR_RESET)"
fclean: clean
	@make -C $(LIBFT) fclean
	@echo "$(NAME): $(COLOR_SUCCESS)$(LIB) DELETED$(COLOR_RESET)"
	@rm -rfv $(NAME)
	@echo "$(NAME): $(COLOR_SUCCESS)$(NAME) DELETED$(COLOR_RESET)"
re: fclean all
.PHONY: all clean fclean norme re