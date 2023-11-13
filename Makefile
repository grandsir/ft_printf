# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: databey <databey@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 17:34:38 by databey           #+#    #+#              #
#    Updated: 2023/11/03 17:36:51 by databey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT		= libft
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
SRC = 
OBJ = $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			make -C $(LIBFT)
			cp libft/libft.a .
			mv libft.a $(NAME)
			ar rcs $(NAME) $(OBJ)