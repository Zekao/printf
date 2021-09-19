/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:42:46 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/19 14:47:51 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_p(va_list args)
{
	unsigned long long	nbr;

	nbr = va_arg(args, unsigned long long);
	ft_putstr("0x");
	ft_putnbr_base_unsigned(nbr, "0123456789abcdef");
	return (ft_get_size_num_u(nbr));
}
