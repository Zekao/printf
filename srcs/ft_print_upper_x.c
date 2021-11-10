/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upper_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:10:04 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/21 13:52:52 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_upper_x(va_list args)
{
	size_t	nbr;
	size_t	size;

	nbr = va_arg(args, size_t);
	ft_putnbr_base_unsigned((unsigned int)nbr, "0123456789ABCDEF");
	size = ft_get_size_num_u((unsigned int)nbr, 16);
	return (size);
}
