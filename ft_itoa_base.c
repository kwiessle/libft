/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 18:42:01 by kwiessle          #+#    #+#             */
/*   Updated: 2018/08/11 13:55:45 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		int_len(int nb, int base)
{
	int i;

	i = 0;
	if (nb < 0 && base == 10)
	{
		++i;
		nb = -nb;
	}
	if (nb < 0 && base != 10)
		nb = -nb;
	while (nb)
	{
		nb /= base;
		++i;
	}
	return (i);
}

long	max_power(long nb, int base)
{
	long max;

	max = base;
	while (max < nb)
		max *= base;
	if (max > nb)
		max /= base;
	return (max);
}

char	*ft_strnewzero(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)(ft_memalloc(sizeof(char) * size + 1));
	return (str);
}

char	*ft_itoa_base(long value, int base)
{

	long			max;
	static char		hex[16] = "0123456789abcdef";
	char			*text;
	static int		i;
	long			nb;

	text = ft_strnewzero(int_len(value, base));
	nb = value;
	if (nb < 0 && base == 10)
	{
		text[i] = '-';
		i++;
		nb = -nb;
	}
	if (nb < 0 && base != 10)
		nb = -nb;
	max = max_power(nb, base);
	while (max > 0)
	{
		text[i] = hex[nb / max];
        ft_putchar(text[i]);
		nb %= max;
		max /= base;
		i++;
	}
	return (text);
}
