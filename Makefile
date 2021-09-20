# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 11:36:49 by emaugale          #+#    #+#              #
#    Updated: 2021/09/20 18:11:53 by emaugale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	srcs/ft_printf.c				\
		srcs/ft_print_c.c				\
		srcs/ft_print_i.c				\
		srcs/ft_print_p.c				\
		srcs/ft_print_percent.c			\
		srcs/ft_print_s.c				\
		srcs/ft_print_u.c				\
		srcs/ft_print_x.c				\
		srcs/ft_print_upper_x.c			\
		srcs/ft_putchar.c				\
		srcs/ft_putstr.c				\
		srcs/ft_putnbr_base.c			\
		srcs/ft_putnbr_base_unsigned.c	\
		srcs/ft_strlen.c				\
		srcs/ft_get_size_num.c			\
		srcs/ft_get_size_num_u.c		\
		srcs/ft_nbrlen_hexa.c			\

		
		
		

OBJS := ${SRCS:.c=.o}

CC = gcc

RM = rm -f

INC_DIR = includes

CFLAGS =  -Wall -Wextra -Werror

.c.o:
	@${CC} ${CFLAGS} -c -I ${INC_DIR} $< -o ${<:.c=.o}

all: $(NAME)
	clear
	@echo "\033[0;31m\n                   "
	@echo "                  ⣠⣤⣤⣤⣤⣤⣶⣦⣤⣄⡀⠀"
	@echo "              ⢀⣴⣿⡿⠛⠉⠙⠛⠛⠛⠛⠻⢿⣿⣷⣤⡀   "
	@echo "              ⣼⣿⠋⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠈⢻⣿⣿⡄⠀⠀⠀"
	@echo "             ⣸⣿⡏⠀⠀⠀⣠⣶⣾⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣄⠀"
	@echo "             ⣿⣿⠁⠀⠀⢰⣿⣿⣯⠁⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣷⡄⠀"
	@echo "       ⣀⣤⣴⣶⣶⣿⡟⠀⠀⠀⢸⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⠀"
	@echo "⠀     ⣿⡟⠋⠉⣹⣿⡇⠀⠀⠀⠘⣿⣿⣿⣿⣷⣦⣤⣤⣤⣶⣶⣶⣶⣿⣿⣿⠀ \033[0;32m When the makefile is sus \033[0;31m"
	@echo "⠀    ⢸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃"⠀
	@echo "     ⣸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠉⠻⠿⣿⣿⣿⣿⡿⠿⠿⠛⢻⣿⡇⠀⠀"
	@echo "     ⣿⣿⠁⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣧⠀"
	@echo "     ⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀" 
	@echo "     ⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀      \033[1;33m emaugale's ft_printf\033[0;31m"
	@echo "     ⢿⣿⡆⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇"
	@echo "     ⠸⣿⣧⡀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠃"
	@echo "      ⠛⢿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⣰⣿⣿⣷⣶⣶⣶⣶⠶⠀⢠⣿⣿"
	@echo "           ⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⣽⣿⡏⠁⠀⠀⢸⣿⡇⠀"
	@echo "           ⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⢹⣿⡆⠀⠀⠀⣸⣿⠇"
	@echo "           ⢿⣿⣦⣄⣀⣠⣴⣿⣿⠁⠀⠈⠻⣿⣿⣿⣿⡿⠏"
	@echo "           ⠈⠛⠻⠿⠿⠿⠿⠋⠁"
	@echo "\033[0;34m                     \033[1;36m 100/100 or consequences\033[0;32m"
	@sleep 1
	@echo "\033[0;35m La compilation se lance dans 5secondes "
	@sleep 1
	@echo "\033[0;34m La compilation se lance dans 4secondes "
	@sleep 1
	@echo "\033[0;33m La compilation se lance dans 3secondes "
	@sleep 1
	@echo "\033[0;32m La compilation se lance dans 2secondes "
	@sleep 1
	@echo "\033[0;31m La compilation se lance dans 1seconde  \033[1;34m"
	@sleep 1
	@echo "Bonne correction !\n"
	@sleep 1
	
$(NAME): ${OBJS}
	@ar rc $(NAME) ${OBJS}

clean: 
	${RM} ${OBJS}
	@echo "Objects have been deleted"
fclean: clean
	${RM} $(NAME)
	@echo "Libftprintf have been deleted"

re: fclean all

.PHONY: all clean fclean re libftprintf.a test