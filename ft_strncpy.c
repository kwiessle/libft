/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 14:45:14 by kwiessle          #+#    #+#             */
/*   Updated: 2015/10/13 11:20:47 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (!src[i] && (i < n))
		{
			dst[i] = 0;
		}
		else
			dst[i] = src[i];
		i++;
	}
	return (dst);
}
