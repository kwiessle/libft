/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:40:26 by kwiessle          #+#    #+#             */
/*   Updated: 2015/12/17 13:40:40 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *tosearch, const char *tofind)
{
	int	i;
	int	j;

	i = -1;
	if (!(tofind[0]))
		return ((char*)tosearch);
	while (tosearch[++i])
	{
		j = 0;
		if (tosearch[i] == tofind[j])
		{
			while (tosearch[i + j] == tofind[j] && tosearch[i + j]
					&& tofind[j])
			{
				j++;
				if (!(tofind[j]))
					return ((char*)tosearch + i);
			}
		}
	}
	return (NULL);
}
