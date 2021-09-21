/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:10:04 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/21 13:52:11 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(va_list args)
{
	uint64_t	nbr;
	uint64_t	size;

	nbr = va_arg(args, uint64_t);
	ft_putnbr_base_unsigned((unsigned int)nbr, "0123456789abcdef");
	size = ft_get_size_num_u((unsigned int)nbr, 16);
	return (size);
}
