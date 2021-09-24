/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 19:22:52 by emaugale          #+#    #+#             */
/*   Updated: 2021/09/24 13:51:07 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(va_list args)
{
	char	*str;
	size_t	i;

	str = va_arg(args, char *);
	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}	
	while (str && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	if (str)
		return (ft_strlen(str));
	return (0);
}
