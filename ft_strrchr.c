/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/20 15:27:38 by kwiessle          #+#    #+#             */
/*   Updated: 2015/01/20 16:05:31 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen((char *)s) + 1;
	while (i > -1)
	{
		if (s[i] == c)
			return ((char *)s + i);
		else
			i--;
	}
	return (NULL);
}
