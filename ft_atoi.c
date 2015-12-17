/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 12:40:25 by kwiessle          #+#    #+#             */
/*   Updated: 2015/12/17 12:40:29 by kwiessle         ###   ########.fr       */
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
	verif = 1;
	while (ft_isspace(str[i]) == 1 && str[i])
		i++;
	if ((str[i] == '+' || str[i] == '-') && ft_isdigit(str[i + 1]) == 1)
	{
		if (str[i] == '-')
			verif = -verif;
		i++;
	}
	while (ft_isdigit(str[i]) == 1 && str[i] != '\0')
	{
		toi = (toi * 10) + (str[i] - 48);
		i++;
	}
	return (verif * toi);
}
