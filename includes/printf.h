/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:36:02 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/17 23:42:07 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_get_size_num_u(unsigned int nb);
int	ft_get_size_num(int nb);
int	ft_print_c(va_list args);
int	ft_print_d(va_list args);
int	ft_print_i(int nbr);
int	ft_print_p(va_list args);
int	ft_print_percent(void);
int	ft_print_s(va_list args);
int	ft_print_u(unsigned int nbr);
int	ft_print_upper_x(va_list args);
int	ft_print_x(va_list args);
void	ft_putchar(char c);
void	ft_putnbr_base_unsigned(unsigned int nbr, const char *base);
void	ft_putnbr_base(int nbr, const char *base);
int	ft_strlen(const char *str);
int	ft_parse(char flag, va_list args);
#endif