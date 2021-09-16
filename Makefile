# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 11:36:49 by emaugale          #+#    #+#              #
#    Updated: 2021/09/16 20:19:21 by emaugale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	srcs/ft_print_c.c			\
		srcs/ft_print_d.c			\
		srcs/ft_print_i.c			\
		srcs/ft_print_s.c			\
		srcs/ft_putnbr_unsigned.c	\
		srcs/ft_putnbr_hexa.c		\
		srcs/ft_printf.c			\
		
		
		

OBJS := ${SRCS:.c=.o}

CC = gcc

RM = rm -f

INC_DIR = includes

CFLAGS =  -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c -I ${INC_DIR} $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): ${OBJS}
	ar rc $(NAME) ${OBJS}

clean: 
	${RM} ${OBJS}
	@echo "Objects have been deleted"
fclean: clean
	${RM} $(NAME)
	@echo "Libftprintf have been deleted"

re: fclean all

.PHONY: all clean fclean re libftprintf.a