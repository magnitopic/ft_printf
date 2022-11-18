SRCS		= 	ft_printf.c \
				ft_printalpha.c
OBJS		= $(SRCS:.c=.o)

NAME		= libftprintf.a

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

RM			= rm -rf


$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
				$(RM) $(OBJS)

fclean:		clean
			$(name)

.PHONY:		all clean fclean re
