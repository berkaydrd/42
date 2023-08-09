# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdurdu <hdurdu@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 10:02:07 by hdurdu            #+#    #+#              #
#    Updated: 2023/07/24 10:14:55 by hdurdu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
SRC			=	ft_printf.c ft_printf_utils.c
OBJ			=	$(SRC:.c=.o)
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -rf
AR			=	ar rcs

all:$(NAME)

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
