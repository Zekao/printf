/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:00:50 by emaugale          #+#    #+#             */
/*   Updated: 2021/08/28 18:00:50 by emaugale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_putnbr(int nbr)
{
    long long int nb;
    
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
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int main(int argc, char **argv)
{
    ft_putnbr(atoi(argv[1]));
    printf("\n");
    printf("%i\n", atoi(argv[1]));
}