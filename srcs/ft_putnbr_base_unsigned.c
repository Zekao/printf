/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_unsigned.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:47:49 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/21 02:12:43 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

void	ft_putnbr_base_unsigned(unsigned long long nbr, const char *base)
{
	unsigned long long		a;
	unsigned long long		new_nbr;

	a = ft_strlen(base);
	new_nbr = (unsigned long long) nbr;
	if (new_nbr >= a)
		ft_putnbr_base_unsigned(new_nbr / a, base);
	ft_putchar(base[new_nbr % a]);
}
