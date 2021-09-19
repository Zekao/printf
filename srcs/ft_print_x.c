/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:10:04 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/19 14:58:48 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_x(va_list args)
{
	size_t	nbr;
	size_t	size;

	nbr = va_arg(args, size_t);
	ft_putnbr_base(nbr, "0123456789abcdef");
	size = ft_nbrlen_hexa(nbr);
	return (size);
}
