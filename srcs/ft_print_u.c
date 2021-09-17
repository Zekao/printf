/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:07:24 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/18 00:21:27 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_u(va_list args)
{
	unsigned int	nbr;

	nbr = va_arg(args, unsigned int);
	return (ft_print_u_after_cast(nbr));
}

int	ft_print_u_after_cast(unsigned int nb)
{
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	if (nb > 9)
	{
		ft_print_u_after_cast(nb / 10);
		ft_print_u_after_cast(nb % 10);
	}
	return (ft_get_size_num(nb));
}
