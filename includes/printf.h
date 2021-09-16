/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:36:02 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/16 20:32:07 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "libft.a"

int	ft_print_c(char c);
int	ft_print_s(const char *s);
int	ft_print_d(int nbr);
int	ft_print_x(int nbr);
#endif