
RCS	= ft_atoi.c	ft_putchar_fd.c	ft_putstr_fd.c	printhexa.c \
printptr.c	ft_printf.c	ft_putnbr_fd.c	printun.c \

OBJS	= $(RCS:.c=.o)

NAME	= libftprintf.a

CFLAGS	= -Wall -Werror -Wextra

$(NAME)	: $(OBJS)
		ar rcs $(NAME) $(OBJS)

all	: $(NAME)

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all