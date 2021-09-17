/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:47:49 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/18 00:22:18 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_base(int nbr, const char *base)
{
	unsigned int		a;
	unsigned int		new_nbr;

	a = ft_strlen(base);
	if (a == 0 || a == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		new_nbr = (unsigned int)(nbr * -1);
	}
	else
		new_nbr = (unsigned int) nbr;
	if (new_nbr >= a)
		ft_putnbr_base_unsigned(new_nbr / a, base);
	ft_putchar(base[new_nbr % a]);
}
