/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:57:18 by emaugale          #+#    #+#             */
/*   Updated: 2021/10/24 14:14:22 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		{
			res = res + ft_parse(str[i + 1], args);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			res++;
		}
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
	else if (flag == 's')
		res = ft_print_s(args);
	else if (flag == 'p')
		res = ft_print_p(args);
	else if (flag == 'd' || flag == 'i')
		res = ft_print_d(args);
	else if (flag == 'u')
		res = ft_print_u(args);
	else if (flag == 'x')
		res = ft_print_x(args);
	else if (flag == 'X')
		res = ft_print_upper_x(args);
	else if (flag == '%')
		res = ft_print_percent();
	else
		res = -1;
	va_end(args);
	return (res);
}
