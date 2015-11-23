/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:27:41 by kwiessle          #+#    #+#             */
/*   Updated: 2015/11/23 18:27:48 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!*s2)
		return ((unsigned char)*s1);
	if (!*s1)
		return (-(unsigned char)*s2);
	while (*s1 && *s2 && n > 1)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			n--;
		}
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
