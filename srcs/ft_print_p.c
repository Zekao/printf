/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:42:46 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/18 00:18:45 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_p(va_list args)
{
	int	nbr;

	nbr = va_arg(args, int);
	ft_putstr("0x");
	ft_putnbr_base_unsigned(nbr, "0123456789abcdef");
	return (1);
}
