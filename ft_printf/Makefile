NAME = libftprintf.a

AR = @ar -rc

CFLAGS = -Wall -Wextra -Werror

RM = @rm -f

CC = @cc -c

SRCS = ft_printf.c ft_check.c sub_ft.c ft_nbr.c

OBJS = ${subst .c,.o,${SRCS}}

all : $(NAME)

$(NAME) : ${OBJS}
	${AR} $(NAME) ${OBJS}

clean :
	${RM} ${OBJS}
fclean : clean
	${RM} $(NAME)
re : fclean all