/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:35:02 by kwiessle          #+#    #+#             */
/*   Updated: 2015/11/23 18:35:25 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char*)s1);
	while (s1[i] != '\0')
	{
		while (s1[i] != s2[j] && s1[i])
		{
			i++;
		}
		ptr = (char*)&s1[i];
		while (s1[i] == s2[j] && s1[i])
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return (ptr);
		j = 0;
	}
	return (NULL);
}
