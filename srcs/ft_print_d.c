/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 19:24:47 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/17 20:06:29 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_d(va_list args)
{
	int				nbr;
	long long int	nb;

	nbr = va_arg(args, int);
	nb = (long long int)nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	if (nb > 9)
	{
		ft_print_d(nb / 10);
		ft_print_d(nb % 10);
	}
	return (ft_get_size_num(nbr));
}
