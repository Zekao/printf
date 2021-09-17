/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:07:24 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/17 20:07:13 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_u(unsigned int nbr)
{
	if (nbr <= 9)
	{
		ft_putchar(nbr + 48);
	}	
	if (nbr > 9)
	{
		ft_print_u(nbr / 10);
		ft_print_u(nbr % 10);
	}
	return (ft_get_size_num_u(nbr));
}
