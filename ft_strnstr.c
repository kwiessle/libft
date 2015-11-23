/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:31:32 by kwiessle          #+#    #+#             */
/*   Updated: 2015/11/23 18:31:38 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	i = 0;
	j = 0;
	if (s1[i])
	{
		if (s2[j] == '\0')
			return ((char*)s1);
		while (s1[i] && i < n)
		{
			ptr = (char*)&s1[i];
			while (s1[i] == s2[j] && i < n)
			{
				i++;
				j++;
			}
			if (s2[j] == '\0')
				return (ptr);
			j = 0;
			i++;
		}
	}
	return (NULL);
}
