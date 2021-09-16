/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:59:17 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/16 18:53:18 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_c(char c)
{
	if (c)
	{
		write(1, &c, 1);
		return (1);
	}
	return (0);
}