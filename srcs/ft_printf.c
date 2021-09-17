/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:57:18 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/17 20:22:28 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			i;
	int			res;

	i = 0;
	res = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			res = res + ft_parse(str[i++], arg);
		else
			write(1, &str[i], 1);
		i++;
	}
	return (res);
}

int	ft_parse(char flag, va_list args)
{
	int	res;

	res = 0;
	if (flag == 'c')
		res = ft_print_c(args);
	if (flag == 's')
		res = ft_print_s(args);
	if (flag == 'p')
		res = ft_putpointer(args);
	if (flag == 'd')
		res = ft_print_d(args);
	if (flag == 'i')
		res = ft_print_i(args);
	if (flag == 'u')
		res = ft_print_u(args);
	if (flag == 'x')
		res = ft_print_x(args);
	if (flag == 'X')
		res = ft_print_upper_x(args);
	if (flag == '%')
		res = ft_print_percent(args);
	va_end(args);
	return (res);
}
