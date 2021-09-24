/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_base_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:43:53 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/21 12:43:53 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_base_len(size_t nbr, char *base)
{
	int		size;
	size_t	baselen;

	baselen = ft_strlen(base);
	size = 0;
	while (nbr > baselen)
	{
		nbr = nbr / baselen;
		size++;
	}
	return (size);
}
