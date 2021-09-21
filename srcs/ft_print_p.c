/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:42:46 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/21 13:19:43 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(va_list args)
{
	uint64_t	nbr;

	nbr = va_arg(args, uint64_t);
	if (nbr == 0)
	{
		ft_putstr("(nil)");
		return  (5);
	}
	ft_putstr("0x");
	ft_putnbr_base_unsigned(nbr, "0123456789abcdef");
	return (ft_get_size_num_u(nbr, 16) + 2);
}
