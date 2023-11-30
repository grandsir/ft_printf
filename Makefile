# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 17:34:38 by databey           #+#    #+#              #
#    Updated: 2023/11/30 14:16:21 by databey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT		= libft
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
SRC_DIR		= src/
OBJ_DIR		= obj/
OBJ = $(SRC:.c=.o)

SRC_FILES	=	ft_printf ft_exec_cmd ft_putunsigned ft_print_hex ft_print_ptr

SRC 		= 	$(addsuffix .c, $(SRC_FILES))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBFT)
			cp libft/libft.a .
			mv libft.a $(NAME)
			ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)%.o: %.c 
			mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
			rm -rf $(OBJ_DIR)
			make clean -C $(LIBFT)

fclean:		clean
			rm -f $(NAME)
			rm -f $(LIBFT)/libft.a

re:			fclean all