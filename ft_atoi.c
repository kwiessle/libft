/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 15:37:13 by kwiessle          #+#    #+#             */
/*   Updated: 2015/11/23 17:56:50 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		toi;
	int		verif;

	i = 0;
	toi = 0;
	while ((ft_isspace(str[i]) == 1 || str[i] == '+') && str[i])
		i++;
	if (str[i] == '-')
	{
		verif = i;
		i++;
	}
	while (str[i] != '\0' && str[i] > 47 && str[i] < 58)
	{
		toi = (toi * 10) + (str[i] - 48);
		i++;
	}
	if (str[verif] == '-')
		toi = -toi;
	return (toi);
}
