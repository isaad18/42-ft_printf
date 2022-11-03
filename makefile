# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isaad <isaad@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 12:00:05 by isaad             #+#    #+#              #
#    Updated: 2022/11/03 11:34:50 by isaad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RCS	= ./src/ft_putchar_fd.c	./src/ft_putstr_fd.c	./src/printhexa.c \
./src/printptr.c	./src/ft_printf.c	./src/ft_putnbr_fd.c	./src/printun.c \

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
