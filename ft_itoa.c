/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 14:59:29 by kwiessle          #+#    #+#             */
/*   Updated: 2015/10/30 15:36:43 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_int_len(int n)
{
	int		q;
	int		i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		q = n % 10;
		n = n - q;
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		q;
	int		len;
	char	*toa;

	len = ft_int_len(n);
	toa = malloc(sizeof(len));
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		toa[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		toa[len - 1] = n % 10 + '0';
		q = n % 10;
		n = n - q;
		n = n / 10;
		len--;
	}
	return (toa);
}