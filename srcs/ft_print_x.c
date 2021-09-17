/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:10:04 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/17 23:31:33 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_x(va_list args)
{
	size_t	nbr;

	nbr = va_arg(args, size_t);
	ft_putnbr_base(nbr, "0123456789abcdef");
	return (1);
}
