/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 19:04:51 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/16 18:57:10 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_i(unsigned int nbr)
{
	if (nbr <= 9)
	{
		ft_putchar(nbr + 48);
	}	
	if (nbr > 9)
	{
		ft_print_i(nbr / 10);
		ft_print_i(nbr % 10);
	}
}
