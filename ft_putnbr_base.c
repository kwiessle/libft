/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 13:27:52 by kwiessle          #+#    #+#             */
/*   Updated: 2018/08/11 16:37:09 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	max_power(long nb, int base)
{
	long max;

	max = base;
	while (max <= 2147483648)
		max *= base;
	if (max > nb)
		max /= base;
	return (max);
}

void    ft_putnbr_base(unsigned int n, int base, char *set)
{
    long            power = max_power(n, base);

    while (power > 0) {
        ft_putchar(set[n / power]);
        n %= power;
        power = power / base;
    }
}
