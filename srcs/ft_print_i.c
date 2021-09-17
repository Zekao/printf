/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:04:51 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/17 20:06:41 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_i(int nbr)
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
		ft_print_i(nb / 10);
		ft_print_i(nb % 10);
	}
	return (ft_get_size_num(nbr));
}
