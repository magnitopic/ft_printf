# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 17:25:56 by alaparic          #+#    #+#              #
#    Updated: 2022/11/17 18:27:35 by alaparic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	ft_printf.c
OBJS		= $(SRCS:.c=.o)

LIBFT		= ./libft/libft.a

NAME		= libftprintf.a

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

RM			= rm -rf


$(NAME):	$(OBJS)
				cp libft/libft.a $(NAME)
				ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
				$(RM) $(OBJS)

fclean:		clean
			$(name)

.PHONY:		all clean fclean re