# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 12:23:13 by nmarmugi          #+#    #+#              #
#    Updated: 2024/03/27 11:39:35 by nmarmugi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

LIBFTPATH = ./libft

LIBFTNAME = libft.a

SRCS =	main.c av_check.c av_check_duplicate.c \
		
OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME):
		make -C $(LIBFTPATH)
		cp ./libft/libft.a .
		mv libft.a $(NAME)
		cc -c $(FLAGS) $(SRCS)
		ar rc $(NAME) $(OBJS)

all:		$(NAME)
clean:
			rm -f $(OBJS)
			make -C $(LIBFTPATH) clean
fclean:		clean
			rm -f $(NAME)
			make -C $(LIBFTPATH) fclean
re:			fclean all
.PHONY:		all clean fclean re
